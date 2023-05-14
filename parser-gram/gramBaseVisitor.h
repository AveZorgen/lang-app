
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "gramVisitor.h"


/**
 * This class provides an empty implementation of gramVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gramBaseVisitor : public gramVisitor {
public:

  virtual std::any visitPrimExp(gramParser::PrimExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostExpr(gramParser::PostExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_list(gramParser::Arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExpr(gramParser::MulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(gramParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(gramParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(gramParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_list(gramParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(gramParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVardef(gramParser::VardefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncdef(gramParser::FuncdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_list(gramParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompstm(gramParser::CompstmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprstm(gramParser::ExprstmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetstm(gramParser::RetstmContext *ctx) override {
    return visitChildren(ctx);
  }


};

