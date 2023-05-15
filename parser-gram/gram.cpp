#include "gram.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <string>
#include <sstream>

#include "gramParser.h"
#include "gramLexer.h"

#include "gramUserVisitor.h"


std::string Gram::eval(std::string expression)
{
    std::stringstream stream(expression);
    antlr4::ANTLRInputStream input(stream);
    gramLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    gramParser parser(&tokens);
    gramUserVisitor visitor;
    visitor.visit(parser.program());
    return visitor.console;
}