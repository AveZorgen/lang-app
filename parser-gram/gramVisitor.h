
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "gramParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by gramParser.
 */
class  gramVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by gramParser.
   */
    virtual std::any visitPrimExp(gramParser::PrimExpContext *context) = 0;

    virtual std::any visitPostExpr(gramParser::PostExprContext *context) = 0;

    virtual std::any visitArg_list(gramParser::Arg_listContext *context) = 0;

    virtual std::any visitMulExpr(gramParser::MulExprContext *context) = 0;

    virtual std::any visitAddExpr(gramParser::AddExprContext *context) = 0;

    virtual std::any visitExpression(gramParser::ExpressionContext *context) = 0;

    virtual std::any visitProgram(gramParser::ProgramContext *context) = 0;

    virtual std::any visitStatement_list(gramParser::Statement_listContext *context) = 0;

    virtual std::any visitStatement(gramParser::StatementContext *context) = 0;

    virtual std::any visitVardef(gramParser::VardefContext *context) = 0;

    virtual std::any visitFuncdef(gramParser::FuncdefContext *context) = 0;

    virtual std::any visitParam_list(gramParser::Param_listContext *context) = 0;

    virtual std::any visitCompstm(gramParser::CompstmContext *context) = 0;

    virtual std::any visitExprstm(gramParser::ExprstmContext *context) = 0;

    virtual std::any visitRetstm(gramParser::RetstmContext *context) = 0;


};

