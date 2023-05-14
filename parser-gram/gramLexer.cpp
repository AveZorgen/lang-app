
// Generated from gram.g4 by ANTLR 4.12.0


#include "gramLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GramLexerStaticData final {
  GramLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramLexerStaticData(const GramLexerStaticData&) = delete;
  GramLexerStaticData(GramLexerStaticData&&) = delete;
  GramLexerStaticData& operator=(const GramLexerStaticData&) = delete;
  GramLexerStaticData& operator=(GramLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag gramlexerLexerOnceFlag;
GramLexerStaticData *gramlexerLexerStaticData = nullptr;

void gramlexerLexerInitialize() {
  assert(gramlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<GramLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "ID", "NUMBER", "MUL", "DIV", "ADD", "SUB", "COM", "Whitespace", 
      "Newline", "BlockComment", "LineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,145,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,5,10,74,8,10,10,10,12,
  	10,77,9,10,1,11,3,11,80,8,11,1,11,4,11,83,8,11,11,11,12,11,84,1,11,1,
  	11,4,11,89,8,11,11,11,12,11,90,3,11,93,8,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,17,4,17,106,8,17,11,17,12,17,107,1,17,1,17,
  	1,18,1,18,3,18,114,8,18,1,18,3,18,117,8,18,1,18,1,18,1,19,1,19,1,19,1,
  	19,5,19,125,8,19,10,19,12,19,128,9,19,1,19,1,19,1,19,1,19,1,19,1,20,1,
  	20,1,20,1,20,5,20,139,8,20,10,20,12,20,142,9,20,1,20,1,20,1,126,0,21,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,1,0,5,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,9,9,32,32,2,0,10,10,13,13,
  	154,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,
  	1,0,0,0,3,45,1,0,0,0,5,47,1,0,0,0,7,49,1,0,0,0,9,51,1,0,0,0,11,53,1,0,
  	0,0,13,55,1,0,0,0,15,60,1,0,0,0,17,62,1,0,0,0,19,64,1,0,0,0,21,71,1,0,
  	0,0,23,79,1,0,0,0,25,94,1,0,0,0,27,96,1,0,0,0,29,98,1,0,0,0,31,100,1,
  	0,0,0,33,102,1,0,0,0,35,105,1,0,0,0,37,116,1,0,0,0,39,120,1,0,0,0,41,
  	134,1,0,0,0,43,44,5,40,0,0,44,2,1,0,0,0,45,46,5,41,0,0,46,4,1,0,0,0,47,
  	48,5,91,0,0,48,6,1,0,0,0,49,50,5,93,0,0,50,8,1,0,0,0,51,52,5,61,0,0,52,
  	10,1,0,0,0,53,54,5,59,0,0,54,12,1,0,0,0,55,56,5,102,0,0,56,57,5,117,0,
  	0,57,58,5,110,0,0,58,59,5,99,0,0,59,14,1,0,0,0,60,61,5,123,0,0,61,16,
  	1,0,0,0,62,63,5,125,0,0,63,18,1,0,0,0,64,65,5,114,0,0,65,66,5,101,0,0,
  	66,67,5,116,0,0,67,68,5,117,0,0,68,69,5,114,0,0,69,70,5,110,0,0,70,20,
  	1,0,0,0,71,75,7,0,0,0,72,74,7,1,0,0,73,72,1,0,0,0,74,77,1,0,0,0,75,73,
  	1,0,0,0,75,76,1,0,0,0,76,22,1,0,0,0,77,75,1,0,0,0,78,80,5,45,0,0,79,78,
  	1,0,0,0,79,80,1,0,0,0,80,82,1,0,0,0,81,83,7,2,0,0,82,81,1,0,0,0,83,84,
  	1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,92,1,0,0,0,86,88,5,46,0,0,87,89,
  	7,2,0,0,88,87,1,0,0,0,89,90,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,
  	1,0,0,0,92,86,1,0,0,0,92,93,1,0,0,0,93,24,1,0,0,0,94,95,5,42,0,0,95,26,
  	1,0,0,0,96,97,5,47,0,0,97,28,1,0,0,0,98,99,5,43,0,0,99,30,1,0,0,0,100,
  	101,5,45,0,0,101,32,1,0,0,0,102,103,5,44,0,0,103,34,1,0,0,0,104,106,7,
  	3,0,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,
  	108,109,1,0,0,0,109,110,6,17,0,0,110,36,1,0,0,0,111,113,5,13,0,0,112,
  	114,5,10,0,0,113,112,1,0,0,0,113,114,1,0,0,0,114,117,1,0,0,0,115,117,
  	5,10,0,0,116,111,1,0,0,0,116,115,1,0,0,0,117,118,1,0,0,0,118,119,6,18,
  	0,0,119,38,1,0,0,0,120,121,5,47,0,0,121,122,5,42,0,0,122,126,1,0,0,0,
  	123,125,9,0,0,0,124,123,1,0,0,0,125,128,1,0,0,0,126,127,1,0,0,0,126,124,
  	1,0,0,0,127,129,1,0,0,0,128,126,1,0,0,0,129,130,5,42,0,0,130,131,5,47,
  	0,0,131,132,1,0,0,0,132,133,6,19,0,0,133,40,1,0,0,0,134,135,5,47,0,0,
  	135,136,5,47,0,0,136,140,1,0,0,0,137,139,8,4,0,0,138,137,1,0,0,0,139,
  	142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,143,1,0,0,0,142,140,1,
  	0,0,0,143,144,6,20,0,0,144,42,1,0,0,0,11,0,75,79,84,90,92,107,113,116,
  	126,140,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramlexerLexerStaticData = staticData.release();
}

}

gramLexer::gramLexer(CharStream *input) : Lexer(input) {
  gramLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *gramlexerLexerStaticData->atn, gramlexerLexerStaticData->decisionToDFA, gramlexerLexerStaticData->sharedContextCache);
}

gramLexer::~gramLexer() {
  delete _interpreter;
}

std::string gramLexer::getGrammarFileName() const {
  return "gram.g4";
}

const std::vector<std::string>& gramLexer::getRuleNames() const {
  return gramlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& gramLexer::getChannelNames() const {
  return gramlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& gramLexer::getModeNames() const {
  return gramlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& gramLexer::getVocabulary() const {
  return gramlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramLexer::getSerializedATN() const {
  return gramlexerLexerStaticData->serializedATN;
}

const atn::ATN& gramLexer::getATN() const {
  return *gramlexerLexerStaticData->atn;
}




void gramLexer::initialize() {
  ::antlr4::internal::call_once(gramlexerLexerOnceFlag, gramlexerLexerInitialize);
}