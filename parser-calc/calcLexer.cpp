
// Generated from calc.g4 by ANTLR 4.12.0


#include "calcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
CalcLexerStaticData *calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
  assert(calclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "INT", "SEP", "NEWLINE", "WS", "MUL", "DIV", "ADD", 
      "SUB"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "';'", "", "", "'*'", "'/'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "INT", "SEP", "NEWLINE", "WS", "MUL", "DIV", "ADD", "SUB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,10,54,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,2,4,2,27,8,2,11,2,12,2,28,
  	1,3,1,3,1,4,3,4,34,8,4,1,4,1,4,1,4,1,4,1,5,4,5,41,8,5,11,5,12,5,42,1,
  	5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,0,0,10,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,1,0,2,1,0,48,57,2,0,9,9,32,32,56,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,1,21,1,0,0,0,3,23,1,0,0,0,5,26,
  	1,0,0,0,7,30,1,0,0,0,9,33,1,0,0,0,11,40,1,0,0,0,13,46,1,0,0,0,15,48,1,
  	0,0,0,17,50,1,0,0,0,19,52,1,0,0,0,21,22,5,40,0,0,22,2,1,0,0,0,23,24,5,
  	41,0,0,24,4,1,0,0,0,25,27,7,0,0,0,26,25,1,0,0,0,27,28,1,0,0,0,28,26,1,
  	0,0,0,28,29,1,0,0,0,29,6,1,0,0,0,30,31,5,59,0,0,31,8,1,0,0,0,32,34,5,
  	13,0,0,33,32,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,0,35,36,5,10,0,0,36,37,
  	1,0,0,0,37,38,6,4,0,0,38,10,1,0,0,0,39,41,7,1,0,0,40,39,1,0,0,0,41,42,
  	1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,44,1,0,0,0,44,45,6,5,0,0,45,12,
  	1,0,0,0,46,47,5,42,0,0,47,14,1,0,0,0,48,49,5,47,0,0,49,16,1,0,0,0,50,
  	51,5,43,0,0,51,18,1,0,0,0,52,53,5,45,0,0,53,20,1,0,0,0,4,0,28,33,42,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = staticData.release();
}

}

calcLexer::calcLexer(CharStream *input) : Lexer(input) {
  calcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

calcLexer::~calcLexer() {
  delete _interpreter;
}

std::string calcLexer::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& calcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void calcLexer::initialize() {
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
}
