
// Generated from gram.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  gramParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, ID = 9, NUMBER = 10, MUL = 11, DIV = 12, ADD = 13, SUB = 14, 
    COM = 15, Whitespace = 16, Newline = 17, BlockComment = 18, LineComment = 19
  };

  enum {
    RulePrimExp = 0, RulePostExpr = 1, RuleArg_list = 2, RuleMulExpr = 3, 
    RuleAddExpr = 4, RuleExpression = 5, RuleProgram = 6, RuleStatement_list = 7, 
    RuleStatement = 8, RuleVardef = 9, RuleFuncdef = 10, RuleParam_list = 11, 
    RuleCompstm = 12, RuleExprstm = 13, RuleRetstm = 14
  };

  explicit gramParser(antlr4::TokenStream *input);

  gramParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~gramParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class PrimExpContext;
  class PostExprContext;
  class Arg_listContext;
  class MulExprContext;
  class AddExprContext;
  class ExpressionContext;
  class ProgramContext;
  class Statement_listContext;
  class StatementContext;
  class VardefContext;
  class FuncdefContext;
  class Param_listContext;
  class CompstmContext;
  class ExprstmContext;
  class RetstmContext; 

  class  PrimExpContext : public antlr4::ParserRuleContext {
  public:
    PrimExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimExpContext* primExp();

  class  PostExprContext : public antlr4::ParserRuleContext {
  public:
    PostExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimExpContext *primExp();
    Arg_listContext *arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostExprContext* postExpr();

  class  Arg_listContext : public antlr4::ParserRuleContext {
  public:
    Arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddExprContext *> addExpr();
    AddExprContext* addExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COM();
    antlr4::tree::TerminalNode* COM(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_listContext* arg_list();

  class  MulExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    MulExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PostExprContext *> postExpr();
    PostExprContext* postExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulExprContext* mulExpr();

  class  AddExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    AddExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExprContext *> mulExpr();
    MulExprContext* mulExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddExprContext* addExpr();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddExprContext *> addExpr();
    AddExprContext* addExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COM();
    antlr4::tree::TerminalNode* COM(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Statement_listContext *statement_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_listContext* statement_list();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VardefContext *vardef();
    FuncdefContext *funcdef();
    CompstmContext *compstm();
    ExprstmContext *exprstm();
    RetstmContext *retstm();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VardefContext : public antlr4::ParserRuleContext {
  public:
    VardefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VardefContext* vardef();

  class  FuncdefContext : public antlr4::ParserRuleContext {
  public:
    FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    CompstmContext *compstm();
    Param_listContext *param_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncdefContext* funcdef();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COM();
    antlr4::tree::TerminalNode* COM(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  CompstmContext : public antlr4::ParserRuleContext {
  public:
    CompstmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_listContext *statement_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompstmContext* compstm();

  class  ExprstmContext : public antlr4::ParserRuleContext {
  public:
    ExprstmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprstmContext* exprstm();

  class  RetstmContext : public antlr4::ParserRuleContext {
  public:
    RetstmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetstmContext* retstm();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

