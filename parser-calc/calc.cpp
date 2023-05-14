#include "calc.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <string>
#include <sstream>

#include "calcParser.h"
#include "calcLexer.h"

#include "calcUserVisitor.h"


std::vector<int> Calc::eval(std::string expression)
{
    std::stringstream stream(expression);
    antlr4::ANTLRInputStream input(stream);
    calcLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    calcParser parser(&tokens);
    calcUserVisitor visitor;
    visitor.visit(parser.prog());
    return visitor.res;
}
