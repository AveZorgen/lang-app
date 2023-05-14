#pragma once
#include "antlr4-runtime.h"
#include "calcBaseVisitor.h"
#include <iostream>
#include <vector>
class calcUserVisitor : public calcBaseVisitor
{
public:
    std::vector<int> res;
    virtual std::any visitOneLineProg(calcParser::OneLineProgContext *ctx) override
    {
        std::cout << "OneLineProg" << std::endl;
        int val = std::any_cast<int>(visit(ctx->expr()));
        res.push_back(val);
        return val;
    }
    virtual std::any visitMultLineProg(calcParser::MultLineProgContext *ctx) override
    {
        std::cout << "MultLineProg" << std::endl;
        visit(ctx->prog());
        int val = std::any_cast<int>(visit(ctx->expr()));
        res.push_back(val);
        return &res;
    }
    virtual std::any visitParens(calcParser::ParensContext *ctx) override
    {
        std::cout << "Parens" << std::endl;
        return visit(ctx->expr());
    }
    virtual std::any visitMulDiv(calcParser::MulDivContext *ctx) override
    {
        int left = std::any_cast<int>(visit(ctx->expr(0)));  // get value of left subexpression
        int right = std::any_cast<int>(visit(ctx->expr(1))); // get value of right subexpression
        std::cout << " T <- " << left << ctx->op->getText() << right << std::endl;
        if (ctx->op->getType() == calcParser::MUL)
            return left * right;
        else
            return left / right;
    }
    virtual std::any visitAddSub(calcParser::AddSubContext *ctx) override
    {
        int left = std::any_cast<int>(visit(ctx->expr(0)));  // get value of left subexpression
        int right = std::any_cast<int>(visit(ctx->expr(1))); // get value of right subexpression
        std::cout << " T <- " << left << ctx->op->getText() << right << std::endl;
        if (ctx->op->getType() == calcParser::ADD)
            return left + right;
        else
            return left - right;
    }
    virtual std::any visitInt(calcParser::IntContext *ctx) override
    {
        return std::stoi(ctx->INT()->getText());
    }
};