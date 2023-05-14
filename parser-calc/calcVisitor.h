
// Generated from calc.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calcParser.
 */
class  calcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calcParser.
   */
    virtual std::any visitOneLineProg(calcParser::OneLineProgContext *context) = 0;

    virtual std::any visitMultLineProg(calcParser::MultLineProgContext *context) = 0;

    virtual std::any visitParens(calcParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(calcParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(calcParser::AddSubContext *context) = 0;

    virtual std::any visitInt(calcParser::IntContext *context) = 0;


};

