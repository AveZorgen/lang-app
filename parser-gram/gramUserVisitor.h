#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "antlr4-runtime.h"
#include "gramBaseVisitor.h"
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <algorithm>

#ifdef TRACE
#define VISIT(NODE) std::cout << NODE << std::endl;
#else
#define VISIT(NODE) 
#endif

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
    std::map<std::string, int> memory;
    std::map<std::string, callable> functable;

    std::any visitTerminal(antlr4::tree::TerminalNode *node) override
    {
        std::cout << "Terminal " << node->getText() << std::endl;
        return node->getSymbol();
    }

    virtual std::any visitPrimExp(gramParser::PrimExpContext *ctx) override
    {
        VISIT("PrimExp")
        auto ctx_val = ctx->NUMBER();
        if (ctx_val)
        {
            std::cout << "NUMBER: " << ctx_val->getText() << std::endl;
            return std::stoi(ctx_val->getText());
        }
        else if (ctx_val = ctx->ID())
        {
            std::string text = ctx_val->getText();
            std::cout << "ID: " << text << std::endl;
            if (functable.count(text)) {
                return functable[text];
            } else {
                return memory[text];
            }
        }
        else if (ctx_val = ctx->PREDEF())
        {
            std::string text = ctx_val->getText();
            std::cout << "PREDEF: " << text << std::endl;
            if (!functable.count(text)) {
                std::vector<std::string> params {text};
                functable.insert({text, {nullptr, params}});
            }
            return functable[text];
        }
        return visit(ctx->expression());
    }

    std::any call_func(callable callinfo, std::vector<int> args) {
        auto compstm = callinfo.executable;
        auto params = callinfo.params;
        size_t i = 0;
        for (auto param: params){
            memory[param] = args[i++];
        }
        if (compstm)
            return visit(compstm);
        std::string name = params[0];
        if (name == "print") {
            for (auto arg: args) {
                std::cout << arg << " ";
            }
            std::cout << std::endl;
            return args.front();
        } else {
            return defaultResult();
        }
    }

    virtual std::any visitPostExpr(gramParser::PostExprContext *ctx) override
    {
        VISIT("PostExpr")
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
        VISIT("Arg_list")
        auto addExprs = ctx->addExpr();
        std::vector<int> operands;
        for (auto expr: addExprs) {
            operands.push_back(std::any_cast<int>(visit(expr)));
        }
        return operands;
    }

    virtual std::any visitMulExpr(gramParser::MulExprContext *ctx) override
    {
        VISIT("MulExpr")
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
        VISIT("AddExpr")
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
        VISIT("Expression")
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
       VISIT("Program")
        visitChildren(ctx);
        return &res;
    }

    virtual std::any visitStatement_list(gramParser::Statement_listContext *ctx) override
    {
        VISIT("Statement_list")
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
        VISIT("Statement")
        return visitChildren(ctx);
    }

    virtual std::any visitVardef(gramParser::VardefContext *ctx) override
    {
        VISIT("Vardef")
        int val = std::any_cast<int>(visit(ctx->expression()));
        memory.insert({ctx->ID()->getText(), val});
        res.push_back(val);
        return val;
    }

    virtual std::any visitFuncdef(gramParser::FuncdefContext *ctx) override
    {
        VISIT("Funcdef")
        std::string funcname = ctx->ID()->getText();
        std::cout << "funcname: " << funcname << std::endl;
        auto params = std::vector<std::string>();
        if (ctx->param_list()){
            params = std::any_cast<std::vector<std::string>>(visit(ctx->param_list()));
            std::cout << "prams: ";
            for (auto param: params) {
                std::cout << param << " ";
            }
            std::cout << std::endl;
        }
        functable.insert({funcname, {ctx->compstm(), params}});
        return params;
    }

    virtual std::any visitParam_list(gramParser::Param_listContext *ctx) override
    {
        VISIT("Param_list")
        auto params = ctx->ID();
        std::vector<std::string> names;
        for (auto param: params) {
            names.push_back(param->getText());
        }
        return names;
    }

    virtual std::any visitCompstm(gramParser::CompstmContext *ctx) override
    {
        VISIT("Compstm")
        return visit(ctx->statement_list());
    }

    virtual std::any visitExprstm(gramParser::ExprstmContext *ctx) override
    {
        VISIT("Exprstm")
        int val = std::any_cast<int>(visit(ctx->expression()));
        res.push_back(val);
        return val;
    }

    virtual std::any visitRetstm(gramParser::RetstmContext *ctx) override
    {
        VISIT("Retstm")
        if (ctx->expression())
            return visit(ctx->expression());
        else
            return defaultResult();
    }
};
