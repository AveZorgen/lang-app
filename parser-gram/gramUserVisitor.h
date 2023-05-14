#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "antlr4-runtime.h"
#include "gramBaseVisitor.h"
#include <iostream>
#include <vector>
#include <stack>
#include <map>

class gramUserVisitor : public gramBaseVisitor
{
public:
    std::vector<int> res;
    std::stack<int> stk;
    std::map<std::string, int> memory;

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
        std::cout << "TErm1 " << node->getSymbol()->getText() << std::endl;
        std::cout << "TErm2 " << node->getSymbol()->getType() << std::endl;
        std::cout << "TErm3 " << node->getSymbol()->toString() << std::endl;
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
            std::cout << ctx_val->getText() << std::endl;
            stk.push(std::stoi(ctx_val->getText()));
        }
        else if (ctx_val = ctx->ID())
        {
            std::cout << ctx_val->getText() << std::endl;
            stk.push(memory[ctx_val->getText()]);
        }
        return visitChildren(ctx);
    }

    virtual std::any visitPostExpr(gramParser::PostExprContext *ctx) override
    {
        std::cout << "PostExpr" << std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitMulExpr(gramParser::MulExprContext *ctx) override
    {
        std::cout << "MulExpr" << std::endl;
        visitChildren(ctx);
        size_t n = ctx->children.size() / 2 + 1;
        int midRes = stk.top();
        stk.pop();
        for (size_t i = 0; i < n - 1; i++)
        {
            midRes *= stk.top();
            stk.pop();
        }
        stk.push(midRes);
        return midRes;
    }

    virtual std::any visitAddExpr(gramParser::AddExprContext *ctx) override
    {
        std::cout << "AddExpr" << std::endl;

        // visitChildren(ctx);
        size_t n = ctx->children.size();
        for (size_t i = 0; i < n; i++)
        {
            std::cout << "Child: " << ctx->children[i]->getText() << std::endl;
            std::cout << "ADD: " << gramParser::ADD << " SUB: " << gramParser::SUB << std::endl;
            std::any childResult = ctx->children[i]->accept(this);
            switch (ctx->children[i]->getTreeType())
            {
            case antlr4::tree::ParseTreeType::TERMINAL:
            {
                auto termToken = std::any_cast<antlr4::Token *>(childResult);
                std::cout << "ChildRes: " << termToken->getType() << std::endl;
                break;
            }
            case antlr4::tree::ParseTreeType::RULE:
            {
                std::cout << "ChildRes: " << std::any_cast<int>(childResult) << std::endl;
                break;
            }
            default:
                std::cout << "ChildRes: "
                          << "Error" << std::endl;
            }
        }

        // size_t n = ctx->children.size() / 2 + 1;
        n = n / 2 + 1;
        int midRes = stk.top();
        stk.pop();
        for (size_t i = 0; i < n - 1; i++)
        {
            midRes += stk.top();
            stk.pop();
        }
        stk.push(midRes);
        return midRes;
    }

    virtual std::any visitExpression(gramParser::ExpressionContext *ctx) override
    {
        std::cout << "Expression" << std::endl;
        visitChildren(ctx);
        size_t n = ctx->children.size() / 2 + 1;
        int midRes = stk.top();
        stk.pop();
        for (size_t i = 0; i < n - 1; i++)
        {
            stk.pop();
        }
        stk.push(midRes);
        return midRes;
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
        return visitChildren(ctx);
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
        // visitChildren(ctx);
        // int val = stk.top();
        stk.pop();
        res.push_back(val);
        // return val;
        return val;
    }

    virtual std::any visitFuncdef(gramParser::FuncdefContext *ctx) override
    {
        std::cout << "Funcdef" << std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitArg_list(gramParser::Arg_listContext *ctx) override
    {
        std::cout << "Arg_list" << std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitCompstm(gramParser::CompstmContext *ctx) override
    {
        std::cout << "Compstm" << std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitExprstm(gramParser::ExprstmContext *ctx) override
    {
        std::cout << "Exprstm" << std::endl;
        visitChildren(ctx);
        int val = stk.top();
        stk.pop();
        res.push_back(val);
        return val;
    }

    virtual std::any visitRetstm(gramParser::RetstmContext *ctx) override
    {
        std::cout << "Retstm" << std::endl;
        return visitChildren(ctx);
    }
};
