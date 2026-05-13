
// Generated from Sysy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SysyLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, FLOAT = 2, VOID = 3, CONST = 4, RETURN = 5, IF = 6, ELSE = 7, 
    WHILE = 8, BREAK = 9, CONTINUE = 10, LP = 11, RP = 12, LB = 13, RB = 14, 
    LC = 15, RC = 16, COMMA = 17, SEMICOLON = 18, QUESTION = 19, COLON = 20, 
    MINUS = 21, NOT = 22, ASSIGN = 23, ADD = 24, MUL = 25, DIV = 26, MOD = 27, 
    AND = 28, OR = 29, EQ = 30, NEQ = 31, LT = 32, LE = 33, GT = 34, GE = 35, 
    INT_LIT = 36, FLOAT_LIT = 37, ID = 38, STRING = 39, WS = 40, LINE_COMMENT = 41, 
    BLOCK_COMMENT = 42
  };

  explicit SysyLexer(antlr4::CharStream *input);
  ~SysyLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

