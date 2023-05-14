
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
      "primExp", "postExpr", "arg_list", "mulExpr", "addExpr", "expression", 
      "program", "statement_list", "statement", "vardef", "funcdef", "param_list", 
      "compstm", "exprstm", "retstm"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'='", "';'", "'func'", "'{'", "'}'", "'return'", 
      "", "", "'*'", "'/'", "'+'", "'-'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "ID", "NUMBER", "MUL", "DIV", 
      "ADD", "SUB", "COM", "Whitespace", "Newline", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,19,135,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,1,0,1,0,1,0,1,0,3,0,37,8,0,1,1,1,1,1,1,3,1,42,8,1,1,1,3,1,
  	45,8,1,1,2,1,2,1,2,5,2,50,8,2,10,2,12,2,53,9,2,1,3,1,3,1,3,5,3,58,8,3,
  	10,3,12,3,61,9,3,1,4,1,4,1,4,5,4,66,8,4,10,4,12,4,69,9,4,1,5,1,5,1,5,
  	5,5,74,8,5,10,5,12,5,77,9,5,1,6,3,6,80,8,6,1,6,1,6,1,7,4,7,85,8,7,11,
  	7,12,7,86,1,8,1,8,1,8,1,8,1,8,3,8,94,8,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,
  	1,10,1,10,3,10,105,8,10,1,10,1,10,1,10,1,11,1,11,1,11,5,11,113,8,11,10,
  	11,12,11,116,9,11,1,12,1,12,3,12,120,8,12,1,12,1,12,1,13,3,13,125,8,13,
  	1,13,1,13,1,14,1,14,3,14,131,8,14,1,14,1,14,1,14,0,0,15,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,0,2,1,0,11,12,1,0,13,14,138,0,36,1,0,0,0,2,
  	38,1,0,0,0,4,46,1,0,0,0,6,54,1,0,0,0,8,62,1,0,0,0,10,70,1,0,0,0,12,79,
  	1,0,0,0,14,84,1,0,0,0,16,93,1,0,0,0,18,95,1,0,0,0,20,100,1,0,0,0,22,109,
  	1,0,0,0,24,117,1,0,0,0,26,124,1,0,0,0,28,128,1,0,0,0,30,31,5,1,0,0,31,
  	32,3,10,5,0,32,33,5,2,0,0,33,37,1,0,0,0,34,37,5,9,0,0,35,37,5,10,0,0,
  	36,30,1,0,0,0,36,34,1,0,0,0,36,35,1,0,0,0,37,1,1,0,0,0,38,44,3,0,0,0,
  	39,41,5,1,0,0,40,42,3,4,2,0,41,40,1,0,0,0,41,42,1,0,0,0,42,43,1,0,0,0,
  	43,45,5,2,0,0,44,39,1,0,0,0,44,45,1,0,0,0,45,3,1,0,0,0,46,51,3,8,4,0,
  	47,48,5,15,0,0,48,50,3,8,4,0,49,47,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,
  	0,51,52,1,0,0,0,52,5,1,0,0,0,53,51,1,0,0,0,54,59,3,2,1,0,55,56,7,0,0,
  	0,56,58,3,2,1,0,57,55,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,
  	0,60,7,1,0,0,0,61,59,1,0,0,0,62,67,3,6,3,0,63,64,7,1,0,0,64,66,3,6,3,
  	0,65,63,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,9,1,0,0,
  	0,69,67,1,0,0,0,70,75,3,8,4,0,71,72,5,15,0,0,72,74,3,8,4,0,73,71,1,0,
  	0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,11,1,0,0,0,77,75,1,0,
  	0,0,78,80,3,14,7,0,79,78,1,0,0,0,79,80,1,0,0,0,80,81,1,0,0,0,81,82,5,
  	0,0,1,82,13,1,0,0,0,83,85,3,16,8,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,
  	1,0,0,0,86,87,1,0,0,0,87,15,1,0,0,0,88,94,3,18,9,0,89,94,3,20,10,0,90,
  	94,3,24,12,0,91,94,3,26,13,0,92,94,3,28,14,0,93,88,1,0,0,0,93,89,1,0,
  	0,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,17,1,0,0,0,95,96,5,9,
  	0,0,96,97,5,3,0,0,97,98,3,10,5,0,98,99,5,4,0,0,99,19,1,0,0,0,100,101,
  	5,5,0,0,101,102,5,9,0,0,102,104,5,1,0,0,103,105,3,22,11,0,104,103,1,0,
  	0,0,104,105,1,0,0,0,105,106,1,0,0,0,106,107,5,2,0,0,107,108,3,24,12,0,
  	108,21,1,0,0,0,109,114,5,9,0,0,110,111,5,15,0,0,111,113,5,9,0,0,112,110,
  	1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,23,1,0,0,
  	0,116,114,1,0,0,0,117,119,5,6,0,0,118,120,3,14,7,0,119,118,1,0,0,0,119,
  	120,1,0,0,0,120,121,1,0,0,0,121,122,5,7,0,0,122,25,1,0,0,0,123,125,3,
  	10,5,0,124,123,1,0,0,0,124,125,1,0,0,0,125,126,1,0,0,0,126,127,5,4,0,
  	0,127,27,1,0,0,0,128,130,5,8,0,0,129,131,3,10,5,0,130,129,1,0,0,0,130,
  	131,1,0,0,0,131,132,1,0,0,0,132,133,5,4,0,0,133,29,1,0,0,0,15,36,41,44,
  	51,59,67,75,79,86,93,104,114,119,124,130
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
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(30);
        match(gramParser::T__0);
        setState(31);
        expression();
        setState(32);
        match(gramParser::T__1);
        break;
      }

      case gramParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(34);
        match(gramParser::ID);
        break;
      }

      case gramParser::NUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(35);
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

gramParser::Arg_listContext* gramParser::PostExprContext::arg_list() {
  return getRuleContext<gramParser::Arg_listContext>(0);
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
    setState(38);
    primExp();
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramParser::T__0) {
      setState(39);
      match(gramParser::T__0);
      setState(41);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1538) != 0)) {
        setState(40);
        arg_list();
      }
      setState(43);
      match(gramParser::T__1);
    }
   
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

std::vector<gramParser::AddExprContext *> gramParser::Arg_listContext::addExpr() {
  return getRuleContexts<gramParser::AddExprContext>();
}

gramParser::AddExprContext* gramParser::Arg_listContext::addExpr(size_t i) {
  return getRuleContext<gramParser::AddExprContext>(i);
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
  enterRule(_localctx, 4, gramParser::RuleArg_list);
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
    setState(46);
    addExpr();
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::COM) {
      setState(47);
      match(gramParser::COM);
      setState(48);
      addExpr();
      setState(53);
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
  enterRule(_localctx, 6, gramParser::RuleMulExpr);
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
    setState(54);
    postExpr();
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::MUL

    || _la == gramParser::DIV) {
      setState(55);
      antlrcpp::downCast<MulExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == gramParser::MUL

      || _la == gramParser::DIV)) {
        antlrcpp::downCast<MulExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(56);
      postExpr();
      setState(61);
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
  enterRule(_localctx, 8, gramParser::RuleAddExpr);
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
    setState(62);
    mulExpr();
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::ADD

    || _la == gramParser::SUB) {
      setState(63);
      antlrcpp::downCast<AddExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == gramParser::ADD

      || _la == gramParser::SUB)) {
        antlrcpp::downCast<AddExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(64);
      mulExpr();
      setState(69);
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
  enterRule(_localctx, 10, gramParser::RuleExpression);
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
    setState(70);
    addExpr();
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::COM) {
      setState(71);
      match(gramParser::COM);
      setState(72);
      addExpr();
      setState(77);
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
  enterRule(_localctx, 12, gramParser::RuleProgram);
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
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1906) != 0)) {
      setState(78);
      statement_list();
    }
    setState(81);
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
  enterRule(_localctx, 14, gramParser::RuleStatement_list);
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
    setState(84); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(83);
      statement();
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1906) != 0));
   
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
  enterRule(_localctx, 16, gramParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      vardef();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      funcdef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(90);
      compstm();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(91);
      exprstm();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(92);
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
  enterRule(_localctx, 18, gramParser::RuleVardef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(gramParser::ID);
    setState(96);
    match(gramParser::T__2);
    setState(97);
    expression();
    setState(98);
    match(gramParser::T__3);
   
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

gramParser::Param_listContext* gramParser::FuncdefContext::param_list() {
  return getRuleContext<gramParser::Param_listContext>(0);
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
  enterRule(_localctx, 20, gramParser::RuleFuncdef);
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
    setState(100);
    match(gramParser::T__4);
    setState(101);
    match(gramParser::ID);
    setState(102);
    match(gramParser::T__0);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramParser::ID) {
      setState(103);
      param_list();
    }
    setState(106);
    match(gramParser::T__1);
    setState(107);
    compstm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

gramParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> gramParser::Param_listContext::ID() {
  return getTokens(gramParser::ID);
}

tree::TerminalNode* gramParser::Param_listContext::ID(size_t i) {
  return getToken(gramParser::ID, i);
}

std::vector<tree::TerminalNode *> gramParser::Param_listContext::COM() {
  return getTokens(gramParser::COM);
}

tree::TerminalNode* gramParser::Param_listContext::COM(size_t i) {
  return getToken(gramParser::COM, i);
}


size_t gramParser::Param_listContext::getRuleIndex() const {
  return gramParser::RuleParam_list;
}


std::any gramParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

gramParser::Param_listContext* gramParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 22, gramParser::RuleParam_list);
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
    setState(109);
    match(gramParser::ID);
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramParser::COM) {
      setState(110);
      match(gramParser::COM);
      setState(111);
      match(gramParser::ID);
      setState(116);
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
  enterRule(_localctx, 24, gramParser::RuleCompstm);
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
    setState(117);
    match(gramParser::T__5);
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1906) != 0)) {
      setState(118);
      statement_list();
    }
    setState(121);
    match(gramParser::T__6);
   
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
  enterRule(_localctx, 26, gramParser::RuleExprstm);
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
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1538) != 0)) {
      setState(123);
      expression();
    }
    setState(126);
    match(gramParser::T__3);
   
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
  enterRule(_localctx, 28, gramParser::RuleRetstm);
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
    setState(128);
    match(gramParser::T__7);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1538) != 0)) {
      setState(129);
      expression();
    }
    setState(132);
    match(gramParser::T__3);
   
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
