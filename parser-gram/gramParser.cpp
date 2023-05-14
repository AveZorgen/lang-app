
// Generated from gram.g4 by ANTLR 4.12.0


#include "gramVisitor.h"

#include "gramParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GramParserStaticData final {
  GramParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramParserStaticData(const GramParserStaticData&) = delete;
  GramParserStaticData(GramParserStaticData&&) = delete;
  GramParserStaticData& operator=(const GramParserStaticData&) = delete;
  GramParserStaticData& operator=(GramParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramParserOnceFlag;
GramParserStaticData *gramParserStaticData = nullptr;

void gramParserInitialize() {
  assert(gramParserStaticData == nullptr);
  auto staticData = std::make_unique<GramParserStaticData>(
    std::vector<std::string>{
      "primExp", "postExpr", "mulExpr", "addExpr", "expression", "program", 
      "statement_list", "statement", "vardef", "funcdef", "arg_list", "compstm", 
      "exprstm", "retstm"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'['", "']'", "'='", "';'", "'func'", "'{'", "'}'", 
      "'return'", "", "", "'*'", "'/'", "'+'", "'-'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "ID", "NUMBER", "MUL", 
      "DIV", "ADD", "SUB", "COM", "Whitespace", "Newline", "BlockComment", 
      "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,132,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,1,0,1,0,1,0,3,0,35,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,44,8,1,1,1,
  	5,1,47,8,1,10,1,12,1,50,9,1,1,2,1,2,1,2,5,2,55,8,2,10,2,12,2,58,9,2,1,
  	3,1,3,1,3,5,3,63,8,3,10,3,12,3,66,9,3,1,4,1,4,1,4,5,4,71,8,4,10,4,12,
  	4,74,9,4,1,5,3,5,77,8,5,1,5,1,5,1,6,4,6,82,8,6,11,6,12,6,83,1,7,1,7,1,
  	7,1,7,1,7,3,7,91,8,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,3,9,102,8,9,
  	1,9,1,9,1,9,1,10,1,10,1,10,5,10,110,8,10,10,10,12,10,113,9,10,1,11,1,
  	11,3,11,117,8,11,1,11,1,11,1,12,3,12,122,8,12,1,12,1,12,1,13,1,13,3,13,
  	128,8,13,1,13,1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,0,
  	2,1,0,13,14,1,0,15,16,136,0,34,1,0,0,0,2,36,1,0,0,0,4,51,1,0,0,0,6,59,
  	1,0,0,0,8,67,1,0,0,0,10,76,1,0,0,0,12,81,1,0,0,0,14,90,1,0,0,0,16,92,
  	1,0,0,0,18,97,1,0,0,0,20,106,1,0,0,0,22,114,1,0,0,0,24,121,1,0,0,0,26,
  	125,1,0,0,0,28,29,5,1,0,0,29,30,3,8,4,0,30,31,5,2,0,0,31,35,1,0,0,0,32,
  	35,5,11,0,0,33,35,5,12,0,0,34,28,1,0,0,0,34,32,1,0,0,0,34,33,1,0,0,0,
  	35,1,1,0,0,0,36,48,3,0,0,0,37,38,5,3,0,0,38,39,3,8,4,0,39,40,5,4,0,0,
  	40,47,1,0,0,0,41,43,5,1,0,0,42,44,3,8,4,0,43,42,1,0,0,0,43,44,1,0,0,0,
  	44,45,1,0,0,0,45,47,5,2,0,0,46,37,1,0,0,0,46,41,1,0,0,0,47,50,1,0,0,0,
  	48,46,1,0,0,0,48,49,1,0,0,0,49,3,1,0,0,0,50,48,1,0,0,0,51,56,3,2,1,0,
  	52,53,7,0,0,0,53,55,3,2,1,0,54,52,1,0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,
  	56,57,1,0,0,0,57,5,1,0,0,0,58,56,1,0,0,0,59,64,3,4,2,0,60,61,7,1,0,0,
  	61,63,3,4,2,0,62,60,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,1,0,0,0,
  	65,7,1,0,0,0,66,64,1,0,0,0,67,72,3,6,3,0,68,69,5,17,0,0,69,71,3,6,3,0,
  	70,68,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,9,1,0,0,0,
  	74,72,1,0,0,0,75,77,3,12,6,0,76,75,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,
  	0,78,79,5,0,0,1,79,11,1,0,0,0,80,82,3,14,7,0,81,80,1,0,0,0,82,83,1,0,
  	0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,13,1,0,0,0,85,91,3,16,8,0,86,91,3,
  	18,9,0,87,91,3,22,11,0,88,91,3,24,12,0,89,91,3,26,13,0,90,85,1,0,0,0,
  	90,86,1,0,0,0,90,87,1,0,0,0,90,88,1,0,0,0,90,89,1,0,0,0,91,15,1,0,0,0,
  	92,93,5,11,0,0,93,94,5,5,0,0,94,95,3,8,4,0,95,96,5,6,0,0,96,17,1,0,0,
  	0,97,98,5,7,0,0,98,99,5,11,0,0,99,101,5,1,0,0,100,102,3,20,10,0,101,100,
  	1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,0,103,104,5,2,0,0,104,105,3,22,
  	11,0,105,19,1,0,0,0,106,111,5,11,0,0,107,108,5,17,0,0,108,110,5,11,0,
  	0,109,107,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,
  	21,1,0,0,0,113,111,1,0,0,0,114,116,5,8,0,0,115,117,3,12,6,0,116,115,1,
  	0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,119,5,9,0,0,119,23,1,0,0,0,
  	120,122,3,8,4,0,121,120,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,124,
  	5,6,0,0,124,25,1,0,0,0,125,127,5,10,0,0,126,128,3,8,4,0,127,126,1,0,0,
  	0,127,128,1,0,0,0,128,129,1,0,0,0,129,130,5,6,0,0,130,27,1,0,0,0,15,34,
  	43,46,48,56,64,72,76,83,90,101,111,116,121,127
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramParserStaticData = staticData.release();
}

}

gramParser::gramParser(TokenStream *input) : gramParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

gramParser::gramParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  gramParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gramParserStaticData->atn, gramParserStaticData->decisionToDFA, gramParserStaticData->sharedContextCache, options);
}

gramParser::~gramParser() {
  delete _interpreter;
}

const atn::ATN& gramParser::getATN() const {
  return *gramParserStaticData->atn;
}

std::string gramParser::getGrammarFileName() const {
  return "gram.g4";
}

const std::vector<std::string>& gramParser::getRuleNames() const {
  return gramParserStaticData->ruleNames;
}

const dfa::Vocabulary& gramParser::getVocabulary() const {
  return gramParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramParser::getSerializedATN() const {
  return gramParserStaticData->serializedATN;
}


//----------------- PrimExpContext ------------------------------------------------------------------

gramParser::PrimExpContext::PrimExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::ExpressionContext* gramParser::PrimExpContext::expression() {
  return getRuleContext<gramParser::ExpressionContext>(0);
}

tree::TerminalNode* gramParser::PrimExpContext::ID() {
  return getToken(gramParser::ID, 0);
}

tree::TerminalNode* gramParser::PrimExpContext::NUMBER() {
  return getToken(gramParser::NUMBER, 0);
}


size_t gramParser::PrimExpContext::getRuleIndex() const {
  return gramParser::RulePrimExp;
}


std::any gramParser::PrimExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitPrimExp(this);
  else
    return visitor->visitChildren(this);
}

gramParser::PrimExpContext* gramParser::primExp() {
  PrimExpContext *_localctx = _tracker.createInstance<PrimExpContext>(_ctx, getState());
  enterRule(_localctx, 0, gramParser::RulePrimExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(28);
        match(gramParser::T__0);
        setState(29);
        expression();
        setState(30);
        match(gramParser::T__1);
        break;
      }

      case gramParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(32);
        match(gramParser::ID);
        break;
      }

      case gramParser::NUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(33);
        match(gramParser::NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostExprContext ------------------------------------------------------------------

gramParser::PostExprContext::PostExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::PrimExpContext* gramParser::PostExprContext::primExp() {
  return getRuleContext<gramParser::PrimExpContext>(0);
}

std::vector<gramParser::ExpressionContext *> gramParser::PostExprContext::expression() {
  return getRuleContexts<gramParser::ExpressionContext>();
}

gramParser::ExpressionContext* gramParser::PostExprContext::expression(size_t i) {
  return getRuleContext<gramParser::ExpressionContext>(i);
}


size_t gramParser::PostExprContext::getRuleIndex() const {
  return gramParser::RulePostExpr;
}


std::any gramParser::PostExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitPostExpr(this);
  else
    return visitor->visitChildren(this);
}

gramParser::PostExprContext* gramParser::postExpr() {
  PostExprContext *_localctx = _tracker.createInstance<PostExprContext>(_ctx, getState());
  enterRule(_localctx, 2, gramParser::RulePostExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    primExp();
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::T__0

    || _la == gramParser::T__2) {
      setState(46);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case gramParser::T__2: {
          setState(37);
          match(gramParser::T__2);
          setState(38);
          expression();
          setState(39);
          match(gramParser::T__3);
          break;
        }

        case gramParser::T__0: {
          setState(41);
          match(gramParser::T__0);
          setState(43);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 6146) != 0)) {
            setState(42);
            expression();
          }
          setState(45);
          match(gramParser::T__1);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExprContext ------------------------------------------------------------------

gramParser::MulExprContext::MulExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramParser::PostExprContext *> gramParser::MulExprContext::postExpr() {
  return getRuleContexts<gramParser::PostExprContext>();
}

gramParser::PostExprContext* gramParser::MulExprContext::postExpr(size_t i) {
  return getRuleContext<gramParser::PostExprContext>(i);
}

std::vector<tree::TerminalNode *> gramParser::MulExprContext::MUL() {
  return getTokens(gramParser::MUL);
}

tree::TerminalNode* gramParser::MulExprContext::MUL(size_t i) {
  return getToken(gramParser::MUL, i);
}

std::vector<tree::TerminalNode *> gramParser::MulExprContext::DIV() {
  return getTokens(gramParser::DIV);
}

tree::TerminalNode* gramParser::MulExprContext::DIV(size_t i) {
  return getToken(gramParser::DIV, i);
}


size_t gramParser::MulExprContext::getRuleIndex() const {
  return gramParser::RuleMulExpr;
}


std::any gramParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}

gramParser::MulExprContext* gramParser::mulExpr() {
  MulExprContext *_localctx = _tracker.createInstance<MulExprContext>(_ctx, getState());
  enterRule(_localctx, 4, gramParser::RuleMulExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    postExpr();
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::MUL

    || _la == gramParser::DIV) {
      setState(52);
      _la = _input->LA(1);
      if (!(_la == gramParser::MUL

      || _la == gramParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(53);
      postExpr();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExprContext ------------------------------------------------------------------

gramParser::AddExprContext::AddExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramParser::MulExprContext *> gramParser::AddExprContext::mulExpr() {
  return getRuleContexts<gramParser::MulExprContext>();
}

gramParser::MulExprContext* gramParser::AddExprContext::mulExpr(size_t i) {
  return getRuleContext<gramParser::MulExprContext>(i);
}

std::vector<tree::TerminalNode *> gramParser::AddExprContext::ADD() {
  return getTokens(gramParser::ADD);
}

tree::TerminalNode* gramParser::AddExprContext::ADD(size_t i) {
  return getToken(gramParser::ADD, i);
}

std::vector<tree::TerminalNode *> gramParser::AddExprContext::SUB() {
  return getTokens(gramParser::SUB);
}

tree::TerminalNode* gramParser::AddExprContext::SUB(size_t i) {
  return getToken(gramParser::SUB, i);
}


size_t gramParser::AddExprContext::getRuleIndex() const {
  return gramParser::RuleAddExpr;
}


std::any gramParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}

gramParser::AddExprContext* gramParser::addExpr() {
  AddExprContext *_localctx = _tracker.createInstance<AddExprContext>(_ctx, getState());
  enterRule(_localctx, 6, gramParser::RuleAddExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    mulExpr();
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::ADD

    || _la == gramParser::SUB) {
      setState(60);
      _la = _input->LA(1);
      if (!(_la == gramParser::ADD

      || _la == gramParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(61);
      mulExpr();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

gramParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramParser::AddExprContext *> gramParser::ExpressionContext::addExpr() {
  return getRuleContexts<gramParser::AddExprContext>();
}

gramParser::AddExprContext* gramParser::ExpressionContext::addExpr(size_t i) {
  return getRuleContext<gramParser::AddExprContext>(i);
}

std::vector<tree::TerminalNode *> gramParser::ExpressionContext::COM() {
  return getTokens(gramParser::COM);
}

tree::TerminalNode* gramParser::ExpressionContext::COM(size_t i) {
  return getToken(gramParser::COM, i);
}


size_t gramParser::ExpressionContext::getRuleIndex() const {
  return gramParser::RuleExpression;
}


std::any gramParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

gramParser::ExpressionContext* gramParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, gramParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    addExpr();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::COM) {
      setState(68);
      match(gramParser::COM);
      setState(69);
      addExpr();
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

gramParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramParser::ProgramContext::EOF() {
  return getToken(gramParser::EOF, 0);
}

gramParser::Statement_listContext* gramParser::ProgramContext::statement_list() {
  return getRuleContext<gramParser::Statement_listContext>(0);
}


size_t gramParser::ProgramContext::getRuleIndex() const {
  return gramParser::RuleProgram;
}


std::any gramParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

gramParser::ProgramContext* gramParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 10, gramParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7618) != 0)) {
      setState(75);
      statement_list();
    }
    setState(78);
    match(gramParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

gramParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramParser::StatementContext *> gramParser::Statement_listContext::statement() {
  return getRuleContexts<gramParser::StatementContext>();
}

gramParser::StatementContext* gramParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<gramParser::StatementContext>(i);
}


size_t gramParser::Statement_listContext::getRuleIndex() const {
  return gramParser::RuleStatement_list;
}


std::any gramParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}

gramParser::Statement_listContext* gramParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 12, gramParser::RuleStatement_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(80);
      statement();
      setState(83); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7618) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

gramParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::VardefContext* gramParser::StatementContext::vardef() {
  return getRuleContext<gramParser::VardefContext>(0);
}

gramParser::FuncdefContext* gramParser::StatementContext::funcdef() {
  return getRuleContext<gramParser::FuncdefContext>(0);
}

gramParser::CompstmContext* gramParser::StatementContext::compstm() {
  return getRuleContext<gramParser::CompstmContext>(0);
}

gramParser::ExprstmContext* gramParser::StatementContext::exprstm() {
  return getRuleContext<gramParser::ExprstmContext>(0);
}

gramParser::RetstmContext* gramParser::StatementContext::retstm() {
  return getRuleContext<gramParser::RetstmContext>(0);
}


size_t gramParser::StatementContext::getRuleIndex() const {
  return gramParser::RuleStatement;
}


std::any gramParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

gramParser::StatementContext* gramParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, gramParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      vardef();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      funcdef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(87);
      compstm();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(88);
      exprstm();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(89);
      retstm();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardefContext ------------------------------------------------------------------

gramParser::VardefContext::VardefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramParser::VardefContext::ID() {
  return getToken(gramParser::ID, 0);
}

gramParser::ExpressionContext* gramParser::VardefContext::expression() {
  return getRuleContext<gramParser::ExpressionContext>(0);
}


size_t gramParser::VardefContext::getRuleIndex() const {
  return gramParser::RuleVardef;
}


std::any gramParser::VardefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitVardef(this);
  else
    return visitor->visitChildren(this);
}

gramParser::VardefContext* gramParser::vardef() {
  VardefContext *_localctx = _tracker.createInstance<VardefContext>(_ctx, getState());
  enterRule(_localctx, 16, gramParser::RuleVardef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(gramParser::ID);
    setState(93);
    match(gramParser::T__4);
    setState(94);
    expression();
    setState(95);
    match(gramParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

gramParser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramParser::FuncdefContext::ID() {
  return getToken(gramParser::ID, 0);
}

gramParser::CompstmContext* gramParser::FuncdefContext::compstm() {
  return getRuleContext<gramParser::CompstmContext>(0);
}

gramParser::Arg_listContext* gramParser::FuncdefContext::arg_list() {
  return getRuleContext<gramParser::Arg_listContext>(0);
}


size_t gramParser::FuncdefContext::getRuleIndex() const {
  return gramParser::RuleFuncdef;
}


std::any gramParser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

gramParser::FuncdefContext* gramParser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 18, gramParser::RuleFuncdef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(gramParser::T__6);
    setState(98);
    match(gramParser::ID);
    setState(99);
    match(gramParser::T__0);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramParser::ID) {
      setState(100);
      arg_list();
    }
    setState(103);
    match(gramParser::T__1);
    setState(104);
    compstm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_listContext ------------------------------------------------------------------

gramParser::Arg_listContext::Arg_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> gramParser::Arg_listContext::ID() {
  return getTokens(gramParser::ID);
}

tree::TerminalNode* gramParser::Arg_listContext::ID(size_t i) {
  return getToken(gramParser::ID, i);
}

std::vector<tree::TerminalNode *> gramParser::Arg_listContext::COM() {
  return getTokens(gramParser::COM);
}

tree::TerminalNode* gramParser::Arg_listContext::COM(size_t i) {
  return getToken(gramParser::COM, i);
}


size_t gramParser::Arg_listContext::getRuleIndex() const {
  return gramParser::RuleArg_list;
}


std::any gramParser::Arg_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitArg_list(this);
  else
    return visitor->visitChildren(this);
}

gramParser::Arg_listContext* gramParser::arg_list() {
  Arg_listContext *_localctx = _tracker.createInstance<Arg_listContext>(_ctx, getState());
  enterRule(_localctx, 20, gramParser::RuleArg_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(gramParser::ID);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::COM) {
      setState(107);
      match(gramParser::COM);
      setState(108);
      match(gramParser::ID);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompstmContext ------------------------------------------------------------------

gramParser::CompstmContext::CompstmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::Statement_listContext* gramParser::CompstmContext::statement_list() {
  return getRuleContext<gramParser::Statement_listContext>(0);
}


size_t gramParser::CompstmContext::getRuleIndex() const {
  return gramParser::RuleCompstm;
}


std::any gramParser::CompstmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitCompstm(this);
  else
    return visitor->visitChildren(this);
}

gramParser::CompstmContext* gramParser::compstm() {
  CompstmContext *_localctx = _tracker.createInstance<CompstmContext>(_ctx, getState());
  enterRule(_localctx, 22, gramParser::RuleCompstm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(gramParser::T__7);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7618) != 0)) {
      setState(115);
      statement_list();
    }
    setState(118);
    match(gramParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprstmContext ------------------------------------------------------------------

gramParser::ExprstmContext::ExprstmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::ExpressionContext* gramParser::ExprstmContext::expression() {
  return getRuleContext<gramParser::ExpressionContext>(0);
}


size_t gramParser::ExprstmContext::getRuleIndex() const {
  return gramParser::RuleExprstm;
}


std::any gramParser::ExprstmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitExprstm(this);
  else
    return visitor->visitChildren(this);
}

gramParser::ExprstmContext* gramParser::exprstm() {
  ExprstmContext *_localctx = _tracker.createInstance<ExprstmContext>(_ctx, getState());
  enterRule(_localctx, 24, gramParser::RuleExprstm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6146) != 0)) {
      setState(120);
      expression();
    }
    setState(123);
    match(gramParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetstmContext ------------------------------------------------------------------

gramParser::RetstmContext::RetstmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramParser::ExpressionContext* gramParser::RetstmContext::expression() {
  return getRuleContext<gramParser::ExpressionContext>(0);
}


size_t gramParser::RetstmContext::getRuleIndex() const {
  return gramParser::RuleRetstm;
}


std::any gramParser::RetstmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitRetstm(this);
  else
    return visitor->visitChildren(this);
}

gramParser::RetstmContext* gramParser::retstm() {
  RetstmContext *_localctx = _tracker.createInstance<RetstmContext>(_ctx, getState());
  enterRule(_localctx, 26, gramParser::RuleRetstm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(gramParser::T__9);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6146) != 0)) {
      setState(126);
      expression();
    }
    setState(129);
    match(gramParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void gramParser::initialize() {
  ::antlr4::internal::call_once(gramParserOnceFlag, gramParserInitialize);
}