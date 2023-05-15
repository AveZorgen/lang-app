#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "antlr4-runtime.h"
#include "gramBaseVisitor.h"
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <algorithm>

class gramUserVisitor : public gramBaseVisitor
{
private:
    struct
    {
        bool operator()(antlr4::tree::TerminalNode * a, antlr4::tree::TerminalNode * b) const {
             return a->getSymbol()->getTokenIndex() < b->getSymbol()->getTokenIndex(); 
        }
    }
    byIndex;
    struct callable
    {
        gramParser::CompstmContext* executable;
        std::vector<std::string> params;
    };

public:
    std::vector<int> res;
    std::stack<int> stk;
    std::map<std::string, int> memory;
    std::map<std::string, callable> functable;

    // std::any visitChildren(antlr4::tree::ParseTree *node) override
    // {
    //     std::cout << "HELO" << std::endl;
    //     std::any result = defaultResult();
    //     size_t n = node->children.size();
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         if (!shouldVisitNextChild(node, result))
    //         {
    //             break;
    //         }
    //         std::cout << node->toString() << std::endl;
    //         std::any childResult = node->children[i]->accept(this);
    //         result = aggregateResult(std::move(result), std::move(childResult));
    //     }

    //     return result;
    // }

    std::any visitTerminal(antlr4::tree::TerminalNode *node) override
    {
        std::cout << "Terminal " << node->getSymbol()->toString() << std::endl;
        return node->getSymbol();
    }

    std::any aggregateResult(std::any /*aggregate*/, std::any nextResult) override
    {
        return nextResult;
    }

    virtual std::any visitPrimExp(gramParser::PrimExpContext *ctx) override
    {
        std::cout << "PrimExp" << std::endl;
        auto ctx_val = ctx->NUMBER();
        if (ctx_val)
        {
            std::cout << "NUMBER: " << ctx_val->getText() << std::endl;
            return std::stoi(ctx_val->getText());
        }
        else if (ctx_val = ctx->ID()) // либо функция либо переменная
        {
            std::string text = ctx_val->getText();
            std::cout << "ID: " << text << std::endl;
            if (functable.count(text)) {
                return functable[text];
            } else {
                return memory[text];
            }
        } 
        return visit(ctx->expression());
    }

    std::any call_func(callable callinfo, std::vector<int> args) {
        // auto callinfo = functable[func_name];
        auto compstm = callinfo.executable;
        auto params = callinfo.params;
        size_t i = 0;
        for (auto param: params){
            memory[param] = args[i++];
        }
         
        return visit(compstm);
    }

    virtual std::any visitPostExpr(gramParser::PostExprContext *ctx) override
    {
        std::cout << "PostExpr" << std::endl;
        if (ctx->children.size() > 1) {
            std::vector<int> args;
            if (ctx->arg_list()){
                args = std::any_cast<std::vector<int>>(visit(ctx->arg_list()));
            }
            callable caller = std::any_cast<callable>(visit(ctx->primExp()));
            return call_func(caller, args);
        } else {
            return visit(ctx->primExp());
        }
    }

    virtual std::any visitArg_list(gramParser::Arg_listContext *ctx) override
    {
        std::cout << "Arg_list" << std::endl;
        auto addExprs = ctx->addExpr();
        std::vector<int> operands;
        for (auto expr: addExprs) {
            operands.push_back(std::any_cast<int>(visit(expr)));
        }
        return operands;
    }

    virtual std::any visitMulExpr(gramParser::MulExprContext *ctx) override
    {
        std::cout << "MulExpr" << std::endl;
        size_t n = ctx->children.size();

        auto postExpr = ctx->postExpr();
        auto mul = ctx->MUL();
        auto div = ctx->DIV();
        auto operators(mul);
        operators.insert(operators.end(), div.begin(), div.end());
        std::sort(operators.begin(), operators.end(), byIndex);

        int res = std::any_cast<int>(visit(postExpr[0]));
        for (size_t i = 1; i < n/2+1; i++){
            auto op = std::any_cast<antlr4::Token *>(visit(operators[i-1]));
            if (op->getType() == gramParser::MUL){
                res *= std::any_cast<int>(visit(postExpr[i]));
            } else {
                res /= std::any_cast<int>(visit(postExpr[i]));
            }
        }
        std::cout << "MulExprRes: " << res << std::endl;
        return res;
    }

    virtual std::any visitAddExpr(gramParser::AddExprContext *ctx) override
    {
        std::cout << "AddExpr" << std::endl;
        size_t n = ctx->children.size();

        auto mulExprs = ctx->mulExpr();
        auto add = ctx->ADD();
        auto sub = ctx->SUB();
        auto operators(add);
        operators.insert(operators.end(), sub.begin(), sub.end());
        std::sort(operators.begin(), operators.end(), byIndex);

        int res = std::any_cast<int>(visit(mulExprs[0]));
        for (size_t i = 1; i < n/2+1; i++){
            auto op = std::any_cast<antlr4::Token *>(visit(operators[i-1]));
            if (op->getType() == gramParser::ADD){
                res += std::any_cast<int>(visit(mulExprs[i]));
            } else {
                res -= std::any_cast<int>(visit(mulExprs[i]));
            }
        }
        std::cout << "AddExprRes: " << res << std::endl;
        return res;
    }

    virtual std::any visitExpression(gramParser::ExpressionContext *ctx) override
    {
        std::cout << "Expression" << std::endl;
        auto addExprs = ctx->addExpr();
        std::vector<int> operands;
        for (auto expr: addExprs) {
            int val = std::any_cast<int>(visit(expr));
            operands.push_back(val);
        }
        return operands.back();
    }

    virtual std::any visitProgram(gramParser::ProgramContext *ctx) override
    {
        std::cout << "Program" << std::endl;
        visitChildren(ctx);
        return &res;
    }

    virtual std::any visitStatement_list(gramParser::Statement_listContext *ctx) override
    {
        std::cout << "Statement_list" << std::endl;
        size_t n = ctx->children.size();
        for (size_t i = 0; i < n; i++)
        {
            if (ctx->statement(i)->retstm()) {
                return visit(ctx->statement(i)->retstm());
            }
            std::any childResult = ctx->children[i]->accept(this);
        }
        return 42;
    }

    virtual std::any visitStatement(gramParser::StatementContext *ctx) override
    {
        std::cout << "Statement" << std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitVardef(gramParser::VardefContext *ctx) override
    {
        std::cout << "Vardef" << std::endl;
        int val = std::any_cast<int>(visit(ctx->expression()));
        memory.insert({ctx->ID()->getText(), val});
        res.push_back(val);
        return val;
    }

    virtual std::any visitFuncdef(gramParser::FuncdefContext *ctx) override
    {
        std::cout << "Funcdef" << std::endl;
        std::string funcname = ctx->ID()->getText();
        std::cout << "funcname: " << funcname << std::endl;
        auto params = std::vector<std::string>();
        if (ctx->param_list()){
            params = std::any_cast<std::vector<std::string>>(visit(ctx->param_list()));
            std::cout << "prams: ";
            for (auto param: params) {
                std::cout << param << " ";
                memory.insert({param, 0});
            }
            std::cout << std::endl;
        }
        functable.insert({funcname, {ctx->compstm(), params}});
        return params;
    }

    virtual std::any visitParam_list(gramParser::Param_listContext *ctx) override
    {
        std::cout << "Param_list" << std::endl;
        auto params = ctx->ID();
        std::vector<std::string> names;
        for (auto param: params) {
            names.push_back(param->getText());
        }
        return names;
    }

    virtual std::any visitCompstm(gramParser::CompstmContext *ctx) override
    {
        std::cout << "Compstm" << std::endl;
        return visit(ctx->statement_list());
    }

    virtual std::any visitExprstm(gramParser::ExprstmContext *ctx) override
    {
        std::cout << "Exprstm" << std::endl;
        int val = std::any_cast<int>(visit(ctx->expression()));
        res.push_back(val);
        return val;
    }

    virtual std::any visitRetstm(gramParser::RetstmContext *ctx) override
    {
        std::cout << "Retstm" << std::endl;
        if (ctx->expression())
            return visit(ctx->expression());
        else
            return defaultResult();
    }
};
