
// Generated from Sysy.g4 by ANTLR 4.9.2


#include "SysyListener.h"
#include "SysyVisitor.h"

#include "SysyParser.h"


using namespace antlrcpp;
using namespace antlr4;

SysyParser::SysyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SysyParser::~SysyParser() {
  delete _interpreter;
}

std::string SysyParser::getGrammarFileName() const {
  return "Sysy.g4";
}

const std::vector<std::string>& SysyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SysyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysyParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::CompUnitContext::EOF() {
  return getToken(SysyParser::EOF, 0);
}

std::vector<SysyParser::DeclContext *> SysyParser::CompUnitContext::decl() {
  return getRuleContexts<SysyParser::DeclContext>();
}

SysyParser::DeclContext* SysyParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<SysyParser::DeclContext>(i);
}

std::vector<SysyParser::FuncDefContext *> SysyParser::CompUnitContext::funcDef() {
  return getRuleContexts<SysyParser::FuncDefContext>();
}

SysyParser::FuncDefContext* SysyParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<SysyParser::FuncDefContext>(i);
}


size_t SysyParser::CompUnitContext::getRuleIndex() const {
  return SysyParser::RuleCompUnit;
}

void SysyParser::CompUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompUnit(this);
}

void SysyParser::CompUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompUnit(this);
}


antlrcpp::Any SysyParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::CompUnitContext* SysyParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysyParser::RuleCompUnit);
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
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::INT)
      | (1ULL << SysyParser::FLOAT)
      | (1ULL << SysyParser::VOID)
      | (1ULL << SysyParser::CONST))) != 0)) {
      setState(66);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(64);
        decl();
        break;
      }

      case 2: {
        setState(65);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    match(SysyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SysyParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::ConstDeclContext* SysyParser::DeclContext::constDecl() {
  return getRuleContext<SysyParser::ConstDeclContext>(0);
}

SysyParser::VarDeclContext* SysyParser::DeclContext::varDecl() {
  return getRuleContext<SysyParser::VarDeclContext>(0);
}


size_t SysyParser::DeclContext::getRuleIndex() const {
  return SysyParser::RuleDecl;
}

void SysyParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void SysyParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any SysyParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::DeclContext* SysyParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, SysyParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(73);
        constDecl();
        break;
      }

      case SysyParser::INT:
      case SysyParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(74);
        varDecl();
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

//----------------- ConstDeclContext ------------------------------------------------------------------

SysyParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::ConstDeclContext::CONST() {
  return getToken(SysyParser::CONST, 0);
}

SysyParser::BTypeContext* SysyParser::ConstDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::ConstDefContext *> SysyParser::ConstDeclContext::constDef() {
  return getRuleContexts<SysyParser::ConstDefContext>();
}

SysyParser::ConstDefContext* SysyParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<SysyParser::ConstDefContext>(i);
}

tree::TerminalNode* SysyParser::ConstDeclContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDeclContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::ConstDeclContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}


size_t SysyParser::ConstDeclContext::getRuleIndex() const {
  return SysyParser::RuleConstDecl;
}

void SysyParser::ConstDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDecl(this);
}

void SysyParser::ConstDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDecl(this);
}


antlrcpp::Any SysyParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstDeclContext* SysyParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, SysyParser::RuleConstDecl);
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
    setState(77);
    match(SysyParser::CONST);
    setState(78);
    bType();
    setState(79);
    constDef();
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::COMMA) {
      setState(80);
      match(SysyParser::COMMA);
      setState(81);
      constDef();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(87);
    match(SysyParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysyParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::BTypeContext::INT() {
  return getToken(SysyParser::INT, 0);
}

tree::TerminalNode* SysyParser::BTypeContext::FLOAT() {
  return getToken(SysyParser::FLOAT, 0);
}


size_t SysyParser::BTypeContext::getRuleIndex() const {
  return SysyParser::RuleBType;
}

void SysyParser::BTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBType(this);
}

void SysyParser::BTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBType(this);
}


antlrcpp::Any SysyParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BTypeContext* SysyParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, SysyParser::RuleBType);
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
    setState(89);
    _la = _input->LA(1);
    if (!(_la == SysyParser::INT

    || _la == SysyParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

SysyParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::ConstDefContext::ID() {
  return getToken(SysyParser::ID, 0);
}

tree::TerminalNode* SysyParser::ConstDefContext::ASSIGN() {
  return getToken(SysyParser::ASSIGN, 0);
}

SysyParser::ConstInitValContext* SysyParser::ConstDefContext::constInitVal() {
  return getRuleContext<SysyParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDefContext::LB() {
  return getTokens(SysyParser::LB);
}

tree::TerminalNode* SysyParser::ConstDefContext::LB(size_t i) {
  return getToken(SysyParser::LB, i);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::ConstDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::ConstDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDefContext::RB() {
  return getTokens(SysyParser::RB);
}

tree::TerminalNode* SysyParser::ConstDefContext::RB(size_t i) {
  return getToken(SysyParser::RB, i);
}


size_t SysyParser::ConstDefContext::getRuleIndex() const {
  return SysyParser::RuleConstDef;
}

void SysyParser::ConstDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDef(this);
}

void SysyParser::ConstDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDef(this);
}


antlrcpp::Any SysyParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstDefContext* SysyParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 8, SysyParser::RuleConstDef);
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
    setState(91);
    match(SysyParser::ID);
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::LB) {
      setState(92);
      match(SysyParser::LB);
      setState(93);
      constExp();
      setState(94);
      match(SysyParser::RB);
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
    match(SysyParser::ASSIGN);
    setState(102);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

SysyParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::ConstInitValContext::getRuleIndex() const {
  return SysyParser::RuleConstInitVal;
}

void SysyParser::ConstInitValContext::copyFrom(ConstInitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListConstInitValContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ListConstInitValContext::LC() {
  return getToken(SysyParser::LC, 0);
}

tree::TerminalNode* SysyParser::ListConstInitValContext::RC() {
  return getToken(SysyParser::RC, 0);
}

std::vector<SysyParser::ConstInitValContext *> SysyParser::ListConstInitValContext::constInitVal() {
  return getRuleContexts<SysyParser::ConstInitValContext>();
}

SysyParser::ConstInitValContext* SysyParser::ListConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<SysyParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::ListConstInitValContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::ListConstInitValContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}

SysyParser::ListConstInitValContext::ListConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }

void SysyParser::ListConstInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListConstInitVal(this);
}
void SysyParser::ListConstInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListConstInitVal(this);
}

antlrcpp::Any SysyParser::ListConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitListConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ScalarConstInitValContext ------------------------------------------------------------------

SysyParser::ConstExpContext* SysyParser::ScalarConstInitValContext::constExp() {
  return getRuleContext<SysyParser::ConstExpContext>(0);
}

SysyParser::ScalarConstInitValContext::ScalarConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }

void SysyParser::ScalarConstInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarConstInitVal(this);
}
void SysyParser::ScalarConstInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarConstInitVal(this);
}

antlrcpp::Any SysyParser::ScalarConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitScalarConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::ConstInitValContext* SysyParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 10, SysyParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::LP:
      case SysyParser::MINUS:
      case SysyParser::NOT:
      case SysyParser::ADD:
      case SysyParser::INT_LIT:
      case SysyParser::FLOAT_LIT:
      case SysyParser::ID: {
        _localctx = dynamic_cast<ConstInitValContext *>(_tracker.createInstance<SysyParser::ScalarConstInitValContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(104);
        constExp();
        break;
      }

      case SysyParser::LC: {
        _localctx = dynamic_cast<ConstInitValContext *>(_tracker.createInstance<SysyParser::ListConstInitValContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(SysyParser::LC);
        setState(114);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::LP)
          | (1ULL << SysyParser::LC)
          | (1ULL << SysyParser::MINUS)
          | (1ULL << SysyParser::NOT)
          | (1ULL << SysyParser::ADD)
          | (1ULL << SysyParser::INT_LIT)
          | (1ULL << SysyParser::FLOAT_LIT)
          | (1ULL << SysyParser::ID))) != 0)) {
          setState(106);
          constInitVal();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysyParser::COMMA) {
            setState(107);
            match(SysyParser::COMMA);
            setState(108);
            constInitVal();
            setState(113);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(116);
        match(SysyParser::RC);
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

//----------------- VarDeclContext ------------------------------------------------------------------

SysyParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::VarDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::VarDefContext *> SysyParser::VarDeclContext::varDef() {
  return getRuleContexts<SysyParser::VarDefContext>();
}

SysyParser::VarDefContext* SysyParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<SysyParser::VarDefContext>(i);
}

tree::TerminalNode* SysyParser::VarDeclContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> SysyParser::VarDeclContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::VarDeclContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}


size_t SysyParser::VarDeclContext::getRuleIndex() const {
  return SysyParser::RuleVarDecl;
}

void SysyParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void SysyParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


antlrcpp::Any SysyParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::VarDeclContext* SysyParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SysyParser::RuleVarDecl);
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
    setState(119);
    bType();
    setState(120);
    varDef();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::COMMA) {
      setState(121);
      match(SysyParser::COMMA);
      setState(122);
      varDef();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
    match(SysyParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

SysyParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::VarDefContext::getRuleIndex() const {
  return SysyParser::RuleVarDef;
}

void SysyParser::VarDefContext::copyFrom(VarDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UninitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::UninitVarDefContext::ID() {
  return getToken(SysyParser::ID, 0);
}

std::vector<tree::TerminalNode *> SysyParser::UninitVarDefContext::LB() {
  return getTokens(SysyParser::LB);
}

tree::TerminalNode* SysyParser::UninitVarDefContext::LB(size_t i) {
  return getToken(SysyParser::LB, i);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::UninitVarDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::UninitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::UninitVarDefContext::RB() {
  return getTokens(SysyParser::RB);
}

tree::TerminalNode* SysyParser::UninitVarDefContext::RB(size_t i) {
  return getToken(SysyParser::RB, i);
}

SysyParser::UninitVarDefContext::UninitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }

void SysyParser::UninitVarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUninitVarDef(this);
}
void SysyParser::UninitVarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUninitVarDef(this);
}

antlrcpp::Any SysyParser::UninitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUninitVarDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::InitVarDefContext::ID() {
  return getToken(SysyParser::ID, 0);
}

tree::TerminalNode* SysyParser::InitVarDefContext::ASSIGN() {
  return getToken(SysyParser::ASSIGN, 0);
}

SysyParser::InitValContext* SysyParser::InitVarDefContext::initVal() {
  return getRuleContext<SysyParser::InitValContext>(0);
}

std::vector<tree::TerminalNode *> SysyParser::InitVarDefContext::LB() {
  return getTokens(SysyParser::LB);
}

tree::TerminalNode* SysyParser::InitVarDefContext::LB(size_t i) {
  return getToken(SysyParser::LB, i);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::InitVarDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::InitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::InitVarDefContext::RB() {
  return getTokens(SysyParser::RB);
}

tree::TerminalNode* SysyParser::InitVarDefContext::RB(size_t i) {
  return getToken(SysyParser::RB, i);
}

SysyParser::InitVarDefContext::InitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }

void SysyParser::InitVarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitVarDef(this);
}
void SysyParser::InitVarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitVarDef(this);
}

antlrcpp::Any SysyParser::InitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitInitVarDef(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::VarDefContext* SysyParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 14, SysyParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDefContext *>(_tracker.createInstance<SysyParser::UninitVarDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(130);
      match(SysyParser::ID);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::LB) {
        setState(131);
        match(SysyParser::LB);
        setState(132);
        constExp();
        setState(133);
        match(SysyParser::RB);
        setState(139);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDefContext *>(_tracker.createInstance<SysyParser::InitVarDefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(140);
      match(SysyParser::ID);
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::LB) {
        setState(141);
        match(SysyParser::LB);
        setState(142);
        constExp();
        setState(143);
        match(SysyParser::RB);
        setState(149);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(150);
      match(SysyParser::ASSIGN);
      setState(151);
      initVal();
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

//----------------- InitValContext ------------------------------------------------------------------

SysyParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::InitValContext::getRuleIndex() const {
  return SysyParser::RuleInitVal;
}

void SysyParser::InitValContext::copyFrom(InitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ScalarInitValContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::ScalarInitValContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ScalarInitValContext::ScalarInitValContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::ScalarInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarInitVal(this);
}
void SysyParser::ScalarInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarInitVal(this);
}

antlrcpp::Any SysyParser::ScalarInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitScalarInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListInitvalContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ListInitvalContext::LC() {
  return getToken(SysyParser::LC, 0);
}

tree::TerminalNode* SysyParser::ListInitvalContext::RC() {
  return getToken(SysyParser::RC, 0);
}

std::vector<SysyParser::InitValContext *> SysyParser::ListInitvalContext::initVal() {
  return getRuleContexts<SysyParser::InitValContext>();
}

SysyParser::InitValContext* SysyParser::ListInitvalContext::initVal(size_t i) {
  return getRuleContext<SysyParser::InitValContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::ListInitvalContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::ListInitvalContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}

SysyParser::ListInitvalContext::ListInitvalContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::ListInitvalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListInitval(this);
}
void SysyParser::ListInitvalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListInitval(this);
}

antlrcpp::Any SysyParser::ListInitvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitListInitval(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::InitValContext* SysyParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 16, SysyParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::LP:
      case SysyParser::MINUS:
      case SysyParser::NOT:
      case SysyParser::ADD:
      case SysyParser::INT_LIT:
      case SysyParser::FLOAT_LIT:
      case SysyParser::ID: {
        _localctx = dynamic_cast<InitValContext *>(_tracker.createInstance<SysyParser::ScalarInitValContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(154);
        exp();
        break;
      }

      case SysyParser::LC: {
        _localctx = dynamic_cast<InitValContext *>(_tracker.createInstance<SysyParser::ListInitvalContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(155);
        match(SysyParser::LC);
        setState(164);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::LP)
          | (1ULL << SysyParser::LC)
          | (1ULL << SysyParser::MINUS)
          | (1ULL << SysyParser::NOT)
          | (1ULL << SysyParser::ADD)
          | (1ULL << SysyParser::INT_LIT)
          | (1ULL << SysyParser::FLOAT_LIT)
          | (1ULL << SysyParser::ID))) != 0)) {
          setState(156);
          initVal();
          setState(161);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysyParser::COMMA) {
            setState(157);
            match(SysyParser::COMMA);
            setState(158);
            initVal();
            setState(163);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(166);
        match(SysyParser::RC);
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

//----------------- FuncDefContext ------------------------------------------------------------------

SysyParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::FuncTypeContext* SysyParser::FuncDefContext::funcType() {
  return getRuleContext<SysyParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysyParser::FuncDefContext::ID() {
  return getToken(SysyParser::ID, 0);
}

tree::TerminalNode* SysyParser::FuncDefContext::LP() {
  return getToken(SysyParser::LP, 0);
}

tree::TerminalNode* SysyParser::FuncDefContext::RP() {
  return getToken(SysyParser::RP, 0);
}

SysyParser::BlockContext* SysyParser::FuncDefContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::FuncFParamsContext* SysyParser::FuncDefContext::funcFParams() {
  return getRuleContext<SysyParser::FuncFParamsContext>(0);
}


size_t SysyParser::FuncDefContext::getRuleIndex() const {
  return SysyParser::RuleFuncDef;
}

void SysyParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void SysyParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


antlrcpp::Any SysyParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncDefContext* SysyParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, SysyParser::RuleFuncDef);
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
    setState(169);
    funcType();
    setState(170);
    match(SysyParser::ID);
    setState(171);
    match(SysyParser::LP);
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::INT

    || _la == SysyParser::FLOAT) {
      setState(172);
      funcFParams();
    }
    setState(175);
    match(SysyParser::RP);
    setState(176);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysyParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::FuncTypeContext::VOID() {
  return getToken(SysyParser::VOID, 0);
}

tree::TerminalNode* SysyParser::FuncTypeContext::INT() {
  return getToken(SysyParser::INT, 0);
}

tree::TerminalNode* SysyParser::FuncTypeContext::FLOAT() {
  return getToken(SysyParser::FLOAT, 0);
}


size_t SysyParser::FuncTypeContext::getRuleIndex() const {
  return SysyParser::RuleFuncType;
}

void SysyParser::FuncTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncType(this);
}

void SysyParser::FuncTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncType(this);
}


antlrcpp::Any SysyParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncTypeContext* SysyParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, SysyParser::RuleFuncType);
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
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::INT)
      | (1ULL << SysyParser::FLOAT)
      | (1ULL << SysyParser::VOID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

SysyParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::FuncFParamContext *> SysyParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<SysyParser::FuncFParamContext>();
}

SysyParser::FuncFParamContext* SysyParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<SysyParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::FuncFParamsContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::FuncFParamsContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}


size_t SysyParser::FuncFParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParams;
}

void SysyParser::FuncFParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParams(this);
}

void SysyParser::FuncFParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParams(this);
}


antlrcpp::Any SysyParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncFParamsContext* SysyParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, SysyParser::RuleFuncFParams);
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
    setState(180);
    funcFParam();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::COMMA) {
      setState(181);
      match(SysyParser::COMMA);
      setState(182);
      funcFParam();
      setState(187);
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

//----------------- FuncFParamContext ------------------------------------------------------------------

SysyParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::FuncFParamContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

tree::TerminalNode* SysyParser::FuncFParamContext::ID() {
  return getToken(SysyParser::ID, 0);
}

std::vector<tree::TerminalNode *> SysyParser::FuncFParamContext::LB() {
  return getTokens(SysyParser::LB);
}

tree::TerminalNode* SysyParser::FuncFParamContext::LB(size_t i) {
  return getToken(SysyParser::LB, i);
}

std::vector<tree::TerminalNode *> SysyParser::FuncFParamContext::RB() {
  return getTokens(SysyParser::RB);
}

tree::TerminalNode* SysyParser::FuncFParamContext::RB(size_t i) {
  return getToken(SysyParser::RB, i);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::FuncFParamContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::FuncFParamContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}


size_t SysyParser::FuncFParamContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParam;
}

void SysyParser::FuncFParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParam(this);
}

void SysyParser::FuncFParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParam(this);
}


antlrcpp::Any SysyParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncFParamContext* SysyParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SysyParser::RuleFuncFParam);
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
    setState(188);
    bType();
    setState(189);
    match(SysyParser::ID);
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::LB) {
      setState(190);
      match(SysyParser::LB);
      setState(191);
      match(SysyParser::RB);
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::LB) {
        setState(192);
        match(SysyParser::LB);
        setState(193);
        constExp();
        setState(194);
        match(SysyParser::RB);
        setState(200);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SysyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::BlockContext::LC() {
  return getToken(SysyParser::LC, 0);
}

tree::TerminalNode* SysyParser::BlockContext::RC() {
  return getToken(SysyParser::RC, 0);
}

std::vector<SysyParser::BlockItemContext *> SysyParser::BlockContext::blockItem() {
  return getRuleContexts<SysyParser::BlockItemContext>();
}

SysyParser::BlockItemContext* SysyParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysyParser::BlockItemContext>(i);
}


size_t SysyParser::BlockContext::getRuleIndex() const {
  return SysyParser::RuleBlock;
}

void SysyParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SysyParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any SysyParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BlockContext* SysyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, SysyParser::RuleBlock);
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
    setState(203);
    match(SysyParser::LC);
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::INT)
      | (1ULL << SysyParser::FLOAT)
      | (1ULL << SysyParser::CONST)
      | (1ULL << SysyParser::RETURN)
      | (1ULL << SysyParser::IF)
      | (1ULL << SysyParser::WHILE)
      | (1ULL << SysyParser::BREAK)
      | (1ULL << SysyParser::CONTINUE)
      | (1ULL << SysyParser::LP)
      | (1ULL << SysyParser::LC)
      | (1ULL << SysyParser::SEMICOLON)
      | (1ULL << SysyParser::MINUS)
      | (1ULL << SysyParser::NOT)
      | (1ULL << SysyParser::ADD)
      | (1ULL << SysyParser::INT_LIT)
      | (1ULL << SysyParser::FLOAT_LIT)
      | (1ULL << SysyParser::ID))) != 0)) {
      setState(204);
      blockItem();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(210);
    match(SysyParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysyParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::DeclContext* SysyParser::BlockItemContext::decl() {
  return getRuleContext<SysyParser::DeclContext>(0);
}

SysyParser::StmtContext* SysyParser::BlockItemContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}


size_t SysyParser::BlockItemContext::getRuleIndex() const {
  return SysyParser::RuleBlockItem;
}

void SysyParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void SysyParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any SysyParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BlockItemContext* SysyParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 28, SysyParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::INT:
      case SysyParser::FLOAT:
      case SysyParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        decl();
        break;
      }

      case SysyParser::RETURN:
      case SysyParser::IF:
      case SysyParser::WHILE:
      case SysyParser::BREAK:
      case SysyParser::CONTINUE:
      case SysyParser::LP:
      case SysyParser::LC:
      case SysyParser::SEMICOLON:
      case SysyParser::MINUS:
      case SysyParser::NOT:
      case SysyParser::ADD:
      case SysyParser::INT_LIT:
      case SysyParser::FLOAT_LIT:
      case SysyParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(213);
        stmt();
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

//----------------- StmtContext ------------------------------------------------------------------

SysyParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::StmtContext::getRuleIndex() const {
  return SysyParser::RuleStmt;
}

void SysyParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::WhileStmtContext::WHILE() {
  return getToken(SysyParser::WHILE, 0);
}

tree::TerminalNode* SysyParser::WhileStmtContext::LP() {
  return getToken(SysyParser::LP, 0);
}

SysyParser::CondContext* SysyParser::WhileStmtContext::cond() {
  return getRuleContext<SysyParser::CondContext>(0);
}

tree::TerminalNode* SysyParser::WhileStmtContext::RP() {
  return getToken(SysyParser::RP, 0);
}

SysyParser::StmtContext* SysyParser::WhileStmtContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}

SysyParser::WhileStmtContext::WhileStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}
void SysyParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

antlrcpp::Any SysyParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

SysyParser::BlockContext* SysyParser::BlockStmtContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::BlockStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStmt(this);
}
void SysyParser::BlockStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStmt(this);
}

antlrcpp::Any SysyParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentContext ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::AssignmentContext::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

tree::TerminalNode* SysyParser::AssignmentContext::ASSIGN() {
  return getToken(SysyParser::ASSIGN, 0);
}

SysyParser::ExpContext* SysyParser::AssignmentContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

tree::TerminalNode* SysyParser::AssignmentContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

SysyParser::AssignmentContext::AssignmentContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}
void SysyParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

antlrcpp::Any SysyParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmt1Context ------------------------------------------------------------------

tree::TerminalNode* SysyParser::IfStmt1Context::IF() {
  return getToken(SysyParser::IF, 0);
}

tree::TerminalNode* SysyParser::IfStmt1Context::LP() {
  return getToken(SysyParser::LP, 0);
}

SysyParser::CondContext* SysyParser::IfStmt1Context::cond() {
  return getRuleContext<SysyParser::CondContext>(0);
}

tree::TerminalNode* SysyParser::IfStmt1Context::RP() {
  return getToken(SysyParser::RP, 0);
}

SysyParser::StmtContext* SysyParser::IfStmt1Context::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}

SysyParser::IfStmt1Context::IfStmt1Context(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::IfStmt1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt1(this);
}
void SysyParser::IfStmt1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt1(this);
}

antlrcpp::Any SysyParser::IfStmt1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitIfStmt1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::BreakStmtContext::BREAK() {
  return getToken(SysyParser::BREAK, 0);
}

tree::TerminalNode* SysyParser::BreakStmtContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

SysyParser::BreakStmtContext::BreakStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}
void SysyParser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}

antlrcpp::Any SysyParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ExpStmtContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

SysyParser::ExpContext* SysyParser::ExpStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ExpStmtContext::ExpStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ExpStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpStmt(this);
}
void SysyParser::ExpStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpStmt(this);
}

antlrcpp::Any SysyParser::ExpStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitExpStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmt2Context ------------------------------------------------------------------

tree::TerminalNode* SysyParser::IfStmt2Context::IF() {
  return getToken(SysyParser::IF, 0);
}

tree::TerminalNode* SysyParser::IfStmt2Context::LP() {
  return getToken(SysyParser::LP, 0);
}

SysyParser::CondContext* SysyParser::IfStmt2Context::cond() {
  return getRuleContext<SysyParser::CondContext>(0);
}

tree::TerminalNode* SysyParser::IfStmt2Context::RP() {
  return getToken(SysyParser::RP, 0);
}

std::vector<SysyParser::StmtContext *> SysyParser::IfStmt2Context::stmt() {
  return getRuleContexts<SysyParser::StmtContext>();
}

SysyParser::StmtContext* SysyParser::IfStmt2Context::stmt(size_t i) {
  return getRuleContext<SysyParser::StmtContext>(i);
}

tree::TerminalNode* SysyParser::IfStmt2Context::ELSE() {
  return getToken(SysyParser::ELSE, 0);
}

SysyParser::IfStmt2Context::IfStmt2Context(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::IfStmt2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt2(this);
}
void SysyParser::IfStmt2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt2(this);
}

antlrcpp::Any SysyParser::IfStmt2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitIfStmt2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ReturnStmtContext::RETURN() {
  return getToken(SysyParser::RETURN, 0);
}

tree::TerminalNode* SysyParser::ReturnStmtContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

SysyParser::ExpContext* SysyParser::ReturnStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ReturnStmtContext::ReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}
void SysyParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

antlrcpp::Any SysyParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ContinueStmtContext::CONTINUE() {
  return getToken(SysyParser::CONTINUE, 0);
}

tree::TerminalNode* SysyParser::ContinueStmtContext::SEMICOLON() {
  return getToken(SysyParser::SEMICOLON, 0);
}

SysyParser::ContinueStmtContext::ContinueStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ContinueStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStmt(this);
}
void SysyParser::ContinueStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStmt(this);
}

antlrcpp::Any SysyParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::StmtContext* SysyParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SysyParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::AssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(216);
      lVal();
      setState(217);
      match(SysyParser::ASSIGN);
      setState(218);
      exp();
      setState(219);
      match(SysyParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::ExpStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(222);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::LP)
        | (1ULL << SysyParser::MINUS)
        | (1ULL << SysyParser::NOT)
        | (1ULL << SysyParser::ADD)
        | (1ULL << SysyParser::INT_LIT)
        | (1ULL << SysyParser::FLOAT_LIT)
        | (1ULL << SysyParser::ID))) != 0)) {
        setState(221);
        exp();
      }
      setState(224);
      match(SysyParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::BlockStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(225);
      block();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::IfStmt1Context>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(226);
      match(SysyParser::IF);
      setState(227);
      match(SysyParser::LP);
      setState(228);
      cond();
      setState(229);
      match(SysyParser::RP);
      setState(230);
      stmt();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::IfStmt2Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(232);
      match(SysyParser::IF);
      setState(233);
      match(SysyParser::LP);
      setState(234);
      cond();
      setState(235);
      match(SysyParser::RP);
      setState(236);
      stmt();
      setState(237);
      match(SysyParser::ELSE);
      setState(238);
      stmt();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::WhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(240);
      match(SysyParser::WHILE);
      setState(241);
      match(SysyParser::LP);
      setState(242);
      cond();
      setState(243);
      match(SysyParser::RP);
      setState(244);
      stmt();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::BreakStmtContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(246);
      match(SysyParser::BREAK);
      setState(247);
      match(SysyParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::ContinueStmtContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(248);
      match(SysyParser::CONTINUE);
      setState(249);
      match(SysyParser::SEMICOLON);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::ReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(250);
      match(SysyParser::RETURN);
      setState(252);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::LP)
        | (1ULL << SysyParser::MINUS)
        | (1ULL << SysyParser::NOT)
        | (1ULL << SysyParser::ADD)
        | (1ULL << SysyParser::INT_LIT)
        | (1ULL << SysyParser::FLOAT_LIT)
        | (1ULL << SysyParser::ID))) != 0)) {
        setState(251);
        exp();
      }
      setState(254);
      match(SysyParser::SEMICOLON);
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

//----------------- ExpContext ------------------------------------------------------------------

SysyParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::AddExpContext* SysyParser::ExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}


size_t SysyParser::ExpContext::getRuleIndex() const {
  return SysyParser::RuleExp;
}

void SysyParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void SysyParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


antlrcpp::Any SysyParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ExpContext* SysyParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 32, SysyParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

SysyParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::LOrExpContext* SysyParser::CondContext::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}


size_t SysyParser::CondContext::getRuleIndex() const {
  return SysyParser::RuleCond;
}

void SysyParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void SysyParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


antlrcpp::Any SysyParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::CondContext* SysyParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 34, SysyParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysyParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::LValContext::ID() {
  return getToken(SysyParser::ID, 0);
}

std::vector<tree::TerminalNode *> SysyParser::LValContext::LB() {
  return getTokens(SysyParser::LB);
}

tree::TerminalNode* SysyParser::LValContext::LB(size_t i) {
  return getToken(SysyParser::LB, i);
}

std::vector<SysyParser::ExpContext *> SysyParser::LValContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::LValContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::LValContext::RB() {
  return getTokens(SysyParser::RB);
}

tree::TerminalNode* SysyParser::LValContext::RB(size_t i) {
  return getToken(SysyParser::RB, i);
}


size_t SysyParser::LValContext::getRuleIndex() const {
  return SysyParser::RuleLVal;
}

void SysyParser::LValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLVal(this);
}

void SysyParser::LValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLVal(this);
}


antlrcpp::Any SysyParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LValContext* SysyParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 36, SysyParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(SysyParser::ID);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(262);
        match(SysyParser::LB);
        setState(263);
        exp();
        setState(264);
        match(SysyParser::RB); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysyParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::PrimaryExpContext::getRuleIndex() const {
  return SysyParser::RulePrimaryExp;
}

void SysyParser::PrimaryExpContext::copyFrom(PrimaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimaryExp2Context ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::PrimaryExp2Context::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

SysyParser::PrimaryExp2Context::PrimaryExp2Context(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::PrimaryExp2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExp2(this);
}
void SysyParser::PrimaryExp2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExp2(this);
}

antlrcpp::Any SysyParser::PrimaryExp2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryExp1Context ------------------------------------------------------------------

tree::TerminalNode* SysyParser::PrimaryExp1Context::LP() {
  return getToken(SysyParser::LP, 0);
}

SysyParser::ExpContext* SysyParser::PrimaryExp1Context::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

tree::TerminalNode* SysyParser::PrimaryExp1Context::RP() {
  return getToken(SysyParser::RP, 0);
}

SysyParser::PrimaryExp1Context::PrimaryExp1Context(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::PrimaryExp1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExp1(this);
}
void SysyParser::PrimaryExp1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExp1(this);
}

antlrcpp::Any SysyParser::PrimaryExp1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryExp3Context ------------------------------------------------------------------

SysyParser::NumberContext* SysyParser::PrimaryExp3Context::number() {
  return getRuleContext<SysyParser::NumberContext>(0);
}

SysyParser::PrimaryExp3Context::PrimaryExp3Context(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::PrimaryExp3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExp3(this);
}
void SysyParser::PrimaryExp3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExp3(this);
}

antlrcpp::Any SysyParser::PrimaryExp3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp3(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::PrimaryExpContext* SysyParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 38, SysyParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::LP: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::PrimaryExp1Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(271);
        match(SysyParser::LP);
        setState(272);
        exp();
        setState(273);
        match(SysyParser::RP);
        break;
      }

      case SysyParser::ID: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::PrimaryExp2Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(275);
        lVal();
        break;
      }

      case SysyParser::INT_LIT:
      case SysyParser::FLOAT_LIT: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::PrimaryExp3Context>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(276);
        number();
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

//----------------- NumberContext ------------------------------------------------------------------

SysyParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::NumberContext::INT_LIT() {
  return getToken(SysyParser::INT_LIT, 0);
}

tree::TerminalNode* SysyParser::NumberContext::FLOAT_LIT() {
  return getToken(SysyParser::FLOAT_LIT, 0);
}


size_t SysyParser::NumberContext::getRuleIndex() const {
  return SysyParser::RuleNumber;
}

void SysyParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void SysyParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any SysyParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::NumberContext* SysyParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 40, SysyParser::RuleNumber);
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
    setState(279);
    _la = _input->LA(1);
    if (!(_la == SysyParser::INT_LIT

    || _la == SysyParser::FLOAT_LIT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

SysyParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::UnaryExpContext::getRuleIndex() const {
  return SysyParser::RuleUnaryExp;
}

void SysyParser::UnaryExpContext::copyFrom(UnaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Unary1Context ------------------------------------------------------------------

SysyParser::PrimaryExpContext* SysyParser::Unary1Context::primaryExp() {
  return getRuleContext<SysyParser::PrimaryExpContext>(0);
}

SysyParser::Unary1Context::Unary1Context(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Unary1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary1(this);
}
void SysyParser::Unary1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary1(this);
}

antlrcpp::Any SysyParser::Unary1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnary1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary2Context ------------------------------------------------------------------

tree::TerminalNode* SysyParser::Unary2Context::ID() {
  return getToken(SysyParser::ID, 0);
}

tree::TerminalNode* SysyParser::Unary2Context::LP() {
  return getToken(SysyParser::LP, 0);
}

tree::TerminalNode* SysyParser::Unary2Context::RP() {
  return getToken(SysyParser::RP, 0);
}

SysyParser::FuncRParamsContext* SysyParser::Unary2Context::funcRParams() {
  return getRuleContext<SysyParser::FuncRParamsContext>(0);
}

SysyParser::Unary2Context::Unary2Context(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Unary2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary2(this);
}
void SysyParser::Unary2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary2(this);
}

antlrcpp::Any SysyParser::Unary2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnary2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary3Context ------------------------------------------------------------------

SysyParser::UnaryOpContext* SysyParser::Unary3Context::unaryOp() {
  return getRuleContext<SysyParser::UnaryOpContext>(0);
}

SysyParser::UnaryExpContext* SysyParser::Unary3Context::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::Unary3Context::Unary3Context(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Unary3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary3(this);
}
void SysyParser::Unary3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary3(this);
}

antlrcpp::Any SysyParser::Unary3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnary3(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::UnaryExpContext* SysyParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 42, SysyParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::Unary1Context>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(281);
      primaryExp();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::Unary2Context>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(282);
      match(SysyParser::ID);
      setState(283);
      match(SysyParser::LP);
      setState(285);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::LP)
        | (1ULL << SysyParser::MINUS)
        | (1ULL << SysyParser::NOT)
        | (1ULL << SysyParser::ADD)
        | (1ULL << SysyParser::INT_LIT)
        | (1ULL << SysyParser::FLOAT_LIT)
        | (1ULL << SysyParser::ID)
        | (1ULL << SysyParser::STRING))) != 0)) {
        setState(284);
        funcRParams();
      }
      setState(287);
      match(SysyParser::RP);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::Unary3Context>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(288);
      unaryOp();
      setState(289);
      unaryExp();
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

//----------------- UnaryOpContext ------------------------------------------------------------------

SysyParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::UnaryOpContext::ADD() {
  return getToken(SysyParser::ADD, 0);
}

tree::TerminalNode* SysyParser::UnaryOpContext::MINUS() {
  return getToken(SysyParser::MINUS, 0);
}

tree::TerminalNode* SysyParser::UnaryOpContext::NOT() {
  return getToken(SysyParser::NOT, 0);
}


size_t SysyParser::UnaryOpContext::getRuleIndex() const {
  return SysyParser::RuleUnaryOp;
}

void SysyParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}

void SysyParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}


antlrcpp::Any SysyParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::UnaryOpContext* SysyParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 44, SysyParser::RuleUnaryOp);
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
    setState(293);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::MINUS)
      | (1ULL << SysyParser::NOT)
      | (1ULL << SysyParser::ADD))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

SysyParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::FuncRParamContext *> SysyParser::FuncRParamsContext::funcRParam() {
  return getRuleContexts<SysyParser::FuncRParamContext>();
}

SysyParser::FuncRParamContext* SysyParser::FuncRParamsContext::funcRParam(size_t i) {
  return getRuleContext<SysyParser::FuncRParamContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::FuncRParamsContext::COMMA() {
  return getTokens(SysyParser::COMMA);
}

tree::TerminalNode* SysyParser::FuncRParamsContext::COMMA(size_t i) {
  return getToken(SysyParser::COMMA, i);
}


size_t SysyParser::FuncRParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncRParams;
}

void SysyParser::FuncRParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRParams(this);
}

void SysyParser::FuncRParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRParams(this);
}


antlrcpp::Any SysyParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncRParamsContext* SysyParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 46, SysyParser::RuleFuncRParams);
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
    setState(295);
    funcRParam();
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::COMMA) {
      setState(296);
      match(SysyParser::COMMA);
      setState(297);
      funcRParam();
      setState(302);
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

//----------------- FuncRParamContext ------------------------------------------------------------------

SysyParser::FuncRParamContext::FuncRParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::FuncRParamContext::getRuleIndex() const {
  return SysyParser::RuleFuncRParam;
}

void SysyParser::FuncRParamContext::copyFrom(FuncRParamContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringAsRParamContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::StringAsRParamContext::STRING() {
  return getToken(SysyParser::STRING, 0);
}

SysyParser::StringAsRParamContext::StringAsRParamContext(FuncRParamContext *ctx) { copyFrom(ctx); }

void SysyParser::StringAsRParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringAsRParam(this);
}
void SysyParser::StringAsRParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringAsRParam(this);
}

antlrcpp::Any SysyParser::StringAsRParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitStringAsRParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAsRParamContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::ExpAsRParamContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ExpAsRParamContext::ExpAsRParamContext(FuncRParamContext *ctx) { copyFrom(ctx); }

void SysyParser::ExpAsRParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAsRParam(this);
}
void SysyParser::ExpAsRParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAsRParam(this);
}

antlrcpp::Any SysyParser::ExpAsRParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitExpAsRParam(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::FuncRParamContext* SysyParser::funcRParam() {
  FuncRParamContext *_localctx = _tracker.createInstance<FuncRParamContext>(_ctx, getState());
  enterRule(_localctx, 48, SysyParser::RuleFuncRParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::LP:
      case SysyParser::MINUS:
      case SysyParser::NOT:
      case SysyParser::ADD:
      case SysyParser::INT_LIT:
      case SysyParser::FLOAT_LIT:
      case SysyParser::ID: {
        _localctx = dynamic_cast<FuncRParamContext *>(_tracker.createInstance<SysyParser::ExpAsRParamContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(303);
        exp();
        break;
      }

      case SysyParser::STRING: {
        _localctx = dynamic_cast<FuncRParamContext *>(_tracker.createInstance<SysyParser::StringAsRParamContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(304);
        match(SysyParser::STRING);
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

//----------------- MulExpContext ------------------------------------------------------------------

SysyParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::MulExpContext::getRuleIndex() const {
  return SysyParser::RuleMulExp;
}

void SysyParser::MulExpContext::copyFrom(MulExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Mul2Context ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::Mul2Context::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::UnaryExpContext* SysyParser::Mul2Context::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

tree::TerminalNode* SysyParser::Mul2Context::MUL() {
  return getToken(SysyParser::MUL, 0);
}

tree::TerminalNode* SysyParser::Mul2Context::DIV() {
  return getToken(SysyParser::DIV, 0);
}

tree::TerminalNode* SysyParser::Mul2Context::MOD() {
  return getToken(SysyParser::MOD, 0);
}

SysyParser::Mul2Context::Mul2Context(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Mul2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul2(this);
}
void SysyParser::Mul2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul2(this);
}

antlrcpp::Any SysyParser::Mul2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMul2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul1Context ------------------------------------------------------------------

SysyParser::UnaryExpContext* SysyParser::Mul1Context::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::Mul1Context::Mul1Context(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Mul1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul1(this);
}
void SysyParser::Mul1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul1(this);
}

antlrcpp::Any SysyParser::Mul1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMul1(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::MulExpContext* SysyParser::mulExp() {
   return mulExp(0);
}

SysyParser::MulExpContext* SysyParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  SysyParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, SysyParser::RuleMulExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Mul1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(308);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Mul2Context>(_tracker.createInstance<MulExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleMulExp);
        setState(310);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(311);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::MUL)
          | (1ULL << SysyParser::DIV)
          | (1ULL << SysyParser::MOD))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(312);
        unaryExp(); 
      }
      setState(317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

SysyParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::AddExpContext::getRuleIndex() const {
  return SysyParser::RuleAddExp;
}

void SysyParser::AddExpContext::copyFrom(AddExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Add2Context ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::Add2Context::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::MulExpContext* SysyParser::Add2Context::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

tree::TerminalNode* SysyParser::Add2Context::ADD() {
  return getToken(SysyParser::ADD, 0);
}

tree::TerminalNode* SysyParser::Add2Context::MINUS() {
  return getToken(SysyParser::MINUS, 0);
}

SysyParser::Add2Context::Add2Context(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Add2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd2(this);
}
void SysyParser::Add2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd2(this);
}

antlrcpp::Any SysyParser::Add2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAdd2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add1Context ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::Add1Context::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::Add1Context::Add1Context(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Add1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd1(this);
}
void SysyParser::Add1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd1(this);
}

antlrcpp::Any SysyParser::Add1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAdd1(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::AddExpContext* SysyParser::addExp() {
   return addExp(0);
}

SysyParser::AddExpContext* SysyParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  SysyParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, SysyParser::RuleAddExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Add1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(319);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(326);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Add2Context>(_tracker.createInstance<AddExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAddExp);
        setState(321);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(322);
        _la = _input->LA(1);
        if (!(_la == SysyParser::MINUS

        || _la == SysyParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(323);
        mulExp(0); 
      }
      setState(328);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

SysyParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::RelExpContext::getRuleIndex() const {
  return SysyParser::RuleRelExp;
}

void SysyParser::RelExpContext::copyFrom(RelExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Rel2Context ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::Rel2Context::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::AddExpContext* SysyParser::Rel2Context::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

tree::TerminalNode* SysyParser::Rel2Context::LT() {
  return getToken(SysyParser::LT, 0);
}

tree::TerminalNode* SysyParser::Rel2Context::GT() {
  return getToken(SysyParser::GT, 0);
}

tree::TerminalNode* SysyParser::Rel2Context::LE() {
  return getToken(SysyParser::LE, 0);
}

tree::TerminalNode* SysyParser::Rel2Context::GE() {
  return getToken(SysyParser::GE, 0);
}

SysyParser::Rel2Context::Rel2Context(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Rel2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel2(this);
}
void SysyParser::Rel2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel2(this);
}

antlrcpp::Any SysyParser::Rel2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitRel2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rel1Context ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::Rel1Context::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::Rel1Context::Rel1Context(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Rel1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel1(this);
}
void SysyParser::Rel1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel1(this);
}

antlrcpp::Any SysyParser::Rel1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitRel1(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::RelExpContext* SysyParser::relExp() {
   return relExp(0);
}

SysyParser::RelExpContext* SysyParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  SysyParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, SysyParser::RuleRelExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Rel1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(330);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(337);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Rel2Context>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleRelExp);
        setState(332);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(333);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::LT)
          | (1ULL << SysyParser::LE)
          | (1ULL << SysyParser::GT)
          | (1ULL << SysyParser::GE))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(334);
        addExp(0); 
      }
      setState(339);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

SysyParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::EqExpContext::getRuleIndex() const {
  return SysyParser::RuleEqExp;
}

void SysyParser::EqExpContext::copyFrom(EqExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Eq1Context ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::Eq1Context::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::Eq1Context::Eq1Context(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Eq1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEq1(this);
}
void SysyParser::Eq1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEq1(this);
}

antlrcpp::Any SysyParser::Eq1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitEq1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Eq2Context ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::Eq2Context::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::RelExpContext* SysyParser::Eq2Context::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

tree::TerminalNode* SysyParser::Eq2Context::EQ() {
  return getToken(SysyParser::EQ, 0);
}

tree::TerminalNode* SysyParser::Eq2Context::NEQ() {
  return getToken(SysyParser::NEQ, 0);
}

SysyParser::Eq2Context::Eq2Context(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::Eq2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEq2(this);
}
void SysyParser::Eq2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEq2(this);
}

antlrcpp::Any SysyParser::Eq2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitEq2(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::EqExpContext* SysyParser::eqExp() {
   return eqExp(0);
}

SysyParser::EqExpContext* SysyParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  SysyParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, SysyParser::RuleEqExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Eq1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(341);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(348);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Eq2Context>(_tracker.createInstance<EqExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleEqExp);
        setState(343);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(344);
        _la = _input->LA(1);
        if (!(_la == SysyParser::EQ

        || _la == SysyParser::NEQ)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(345);
        relExp(0); 
      }
      setState(350);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

SysyParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LAndExpContext::getRuleIndex() const {
  return SysyParser::RuleLAndExp;
}

void SysyParser::LAndExpContext::copyFrom(LAndExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LAnd2Context ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::LAnd2Context::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

tree::TerminalNode* SysyParser::LAnd2Context::AND() {
  return getToken(SysyParser::AND, 0);
}

SysyParser::EqExpContext* SysyParser::LAnd2Context::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::LAnd2Context::LAnd2Context(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LAnd2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAnd2(this);
}
void SysyParser::LAnd2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAnd2(this);
}

antlrcpp::Any SysyParser::LAnd2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLAnd2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LAnd1Context ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::LAnd1Context::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::LAnd1Context::LAnd1Context(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LAnd1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAnd1(this);
}
void SysyParser::LAnd1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAnd1(this);
}

antlrcpp::Any SysyParser::LAnd1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLAnd1(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LAndExpContext* SysyParser::lAndExp() {
   return lAndExp(0);
}

SysyParser::LAndExpContext* SysyParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  SysyParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, SysyParser::RuleLAndExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<LAnd1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(352);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(359);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LAnd2Context>(_tracker.createInstance<LAndExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLAndExp);
        setState(354);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(355);
        match(SysyParser::AND);
        setState(356);
        eqExp(0); 
      }
      setState(361);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

SysyParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LOrExpContext::getRuleIndex() const {
  return SysyParser::RuleLOrExp;
}

void SysyParser::LOrExpContext::copyFrom(LOrExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LOr1Context ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::LOr1Context::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::LOr1Context::LOr1Context(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LOr1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLOr1(this);
}
void SysyParser::LOr1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLOr1(this);
}

antlrcpp::Any SysyParser::LOr1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLOr1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LOr2Context ------------------------------------------------------------------

SysyParser::LOrExpContext* SysyParser::LOr2Context::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}

tree::TerminalNode* SysyParser::LOr2Context::OR() {
  return getToken(SysyParser::OR, 0);
}

SysyParser::LAndExpContext* SysyParser::LOr2Context::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::LOr2Context::LOr2Context(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LOr2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLOr2(this);
}
void SysyParser::LOr2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLOr2(this);
}

antlrcpp::Any SysyParser::LOr2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLOr2(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LOrExpContext* SysyParser::lOrExp() {
   return lOrExp(0);
}

SysyParser::LOrExpContext* SysyParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  SysyParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, SysyParser::RuleLOrExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<LOr1Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(363);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(370);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LOr2Context>(_tracker.createInstance<LOrExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLOrExp);
        setState(365);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(366);
        match(SysyParser::OR);
        setState(367);
        lAndExp(0); 
      }
      setState(372);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

SysyParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::AddExpContext* SysyParser::ConstExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}


size_t SysyParser::ConstExpContext::getRuleIndex() const {
  return SysyParser::RuleConstExp;
}

void SysyParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}

void SysyParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}


antlrcpp::Any SysyParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstExpContext* SysyParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 62, SysyParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SysyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 25: return mulExpSempred(dynamic_cast<MulExpContext *>(context), predicateIndex);
    case 26: return addExpSempred(dynamic_cast<AddExpContext *>(context), predicateIndex);
    case 27: return relExpSempred(dynamic_cast<RelExpContext *>(context), predicateIndex);
    case 28: return eqExpSempred(dynamic_cast<EqExpContext *>(context), predicateIndex);
    case 29: return lAndExpSempred(dynamic_cast<LAndExpContext *>(context), predicateIndex);
    case 30: return lOrExpSempred(dynamic_cast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SysyParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SysyParser::_decisionToDFA;
atn::PredictionContextCache SysyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SysyParser::_atn;
std::vector<uint16_t> SysyParser::_serializedATN;

std::vector<std::string> SysyParser::_ruleNames = {
  "compUnit", "decl", "constDecl", "bType", "constDef", "constInitVal", 
  "varDecl", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
  "funcFParam", "block", "blockItem", "stmt", "exp", "cond", "lVal", "primaryExp", 
  "number", "unaryExp", "unaryOp", "funcRParams", "funcRParam", "mulExp", 
  "addExp", "relExp", "eqExp", "lAndExp", "lOrExp", "constExp"
};

std::vector<std::string> SysyParser::_literalNames = {
  "", "'int'", "'float'", "'void'", "'const'", "'return'", "'if'", "'else'", 
  "'while'", "'break'", "'continue'", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "','", "';'", "'\u003F'", "':'", "'-'", "'!'", "'='", "'+'", "'*'", 
  "'/'", "'%'", "'&&'", "'||'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> SysyParser::_symbolicNames = {
  "", "INT", "FLOAT", "VOID", "CONST", "RETURN", "IF", "ELSE", "WHILE", 
  "BREAK", "CONTINUE", "LP", "RP", "LB", "RB", "LC", "RC", "COMMA", "SEMICOLON", 
  "QUESTION", "COLON", "MINUS", "NOT", "ASSIGN", "ADD", "MUL", "DIV", "MOD", 
  "AND", "OR", "EQ", "NEQ", "LT", "LE", "GT", "GE", "INT_LIT", "FLOAT_LIT", 
  "ID", "STRING", "WS", "LINE_COMMENT", "BLOCK_COMMENT"
};

dfa::Vocabulary SysyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SysyParser::_tokenNames;

SysyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x2c, 0x17a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x45, 
       0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x48, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4e, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x55, 0xa, 0x4, 0xc, 0x4, 
       0xe, 0x4, 0x58, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x63, 
       0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x66, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
       0x7, 0x70, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x73, 0xb, 0x7, 0x5, 0x7, 
       0x75, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x78, 0xa, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x7e, 0xa, 0x8, 0xc, 0x8, 0xe, 
       0x8, 0x81, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x8a, 0xa, 0x9, 0xc, 0x9, 0xe, 
       0x9, 0x8d, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x7, 0x9, 0x94, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x97, 0xb, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x9b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xa2, 0xa, 0xa, 0xc, 0xa, 
       0xe, 0xa, 0xa5, 0xb, 0xa, 0x5, 0xa, 0xa7, 0xa, 0xa, 0x3, 0xa, 0x5, 
       0xa, 0xaa, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
       0xb, 0xb0, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xba, 0xa, 0xd, 0xc, 
       0xd, 0xe, 0xd, 0xbd, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc7, 0xa, 
       0xe, 0xc, 0xe, 0xe, 0xe, 0xca, 0xb, 0xe, 0x5, 0xe, 0xcc, 0xa, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd0, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
       0xd3, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
       0xd9, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0xe1, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xff, 0xa, 0x11, 0x3, 0x11, 0x5, 
       0x11, 0x102, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
       0x10d, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x110, 0xb, 0x14, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0x118, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x120, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x126, 0xa, 0x17, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x12d, 0xa, 0x19, 
       0xc, 0x19, 0xe, 0x19, 0x130, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
       0x1a, 0x134, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x13c, 0xa, 0x1b, 0xc, 0x1b, 0xe, 
       0x1b, 0x13f, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x147, 0xa, 0x1c, 0xc, 0x1c, 0xe, 
       0x1c, 0x14a, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x152, 0xa, 0x1d, 0xc, 0x1d, 0xe, 
       0x1d, 0x155, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x15d, 0xa, 0x1e, 0xc, 0x1e, 0xe, 
       0x1e, 0x160, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x168, 0xa, 0x1f, 0xc, 0x1f, 0xe, 
       0x1f, 0x16b, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x173, 0xa, 0x20, 0xc, 0x20, 0xe, 
       0x20, 0x176, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x2, 0x8, 
       0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x22, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x2, 0xa, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x3, 
       0x5, 0x3, 0x2, 0x26, 0x27, 0x4, 0x2, 0x17, 0x18, 0x1a, 0x1a, 0x3, 
       0x2, 0x1b, 0x1d, 0x4, 0x2, 0x17, 0x17, 0x1a, 0x1a, 0x3, 0x2, 0x22, 
       0x25, 0x3, 0x2, 0x20, 0x21, 0x2, 0x186, 0x2, 0x46, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4f, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0xe, 0x79, 0x3, 0x2, 0x2, 0x2, 0x10, 0x9a, 
       0x3, 0x2, 0x2, 0x2, 0x12, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x14, 0xab, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb6, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcd, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x20, 0x101, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x103, 0x3, 0x2, 0x2, 0x2, 0x24, 0x105, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x107, 0x3, 0x2, 0x2, 0x2, 0x28, 0x117, 0x3, 0x2, 0x2, 
       0x2, 0x2a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x125, 0x3, 0x2, 0x2, 
       0x2, 0x2e, 0x127, 0x3, 0x2, 0x2, 0x2, 0x30, 0x129, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x133, 0x3, 0x2, 0x2, 0x2, 0x34, 0x135, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x140, 0x3, 0x2, 0x2, 0x2, 0x38, 0x14b, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x156, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x161, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x177, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x45, 0x5, 0x4, 0x3, 0x2, 0x43, 0x45, 0x5, 0x14, 0xb, 
       0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 
       0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 
       0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x2, 0x2, 0x3, 0x4a, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x4b, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4c, 0x4e, 0x5, 0xe, 
       0x8, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x6, 0x2, 0x2, 
       0x50, 0x51, 0x5, 0x8, 0x5, 0x2, 0x51, 0x56, 0x5, 0xa, 0x6, 0x2, 0x52, 
       0x53, 0x7, 0x13, 0x2, 0x2, 0x53, 0x55, 0x5, 0xa, 0x6, 0x2, 0x54, 
       0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 
       0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x3, 
       0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x14, 
       0x2, 0x2, 0x5a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x9, 0x2, 0x2, 
       0x2, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x64, 0x7, 0x28, 0x2, 0x2, 
       0x5e, 0x5f, 0x7, 0xf, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x40, 0x21, 0x2, 
       0x60, 0x61, 0x7, 0x10, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 
       0x19, 0x2, 0x2, 0x68, 0x69, 0x5, 0xc, 0x7, 0x2, 0x69, 0xb, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x78, 0x5, 0x40, 0x21, 0x2, 0x6b, 0x74, 0x7, 0x11, 
       0x2, 0x2, 0x6c, 0x71, 0x5, 0xc, 0x7, 0x2, 0x6d, 0x6e, 0x7, 0x13, 
       0x2, 0x2, 0x6e, 0x70, 0x5, 0xc, 0x7, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 
       0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 
       0x12, 0x2, 0x2, 0x77, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x77, 0x6b, 0x3, 
       0x2, 0x2, 0x2, 0x78, 0xd, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x8, 
       0x5, 0x2, 0x7a, 0x7f, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x7c, 0x7, 0x13, 
       0x2, 0x2, 0x7c, 0x7e, 0x5, 0x10, 0x9, 0x2, 0x7d, 0x7b, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 
       0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 
       0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x14, 0x2, 0x2, 
       0x83, 0xf, 0x3, 0x2, 0x2, 0x2, 0x84, 0x8b, 0x7, 0x28, 0x2, 0x2, 0x85, 
       0x86, 0x7, 0xf, 0x2, 0x2, 0x86, 0x87, 0x5, 0x40, 0x21, 0x2, 0x87, 
       0x88, 0x7, 0x10, 0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x95, 0x7, 0x28, 
       0x2, 0x2, 0x8f, 0x90, 0x7, 0xf, 0x2, 0x2, 0x90, 0x91, 0x5, 0x40, 
       0x21, 0x2, 0x91, 0x92, 0x7, 0x10, 0x2, 0x2, 0x92, 0x94, 0x3, 0x2, 
       0x2, 0x2, 0x93, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 
       0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 
       0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x99, 0x7, 0x19, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x12, 0xa, 0x2, 0x9a, 
       0x84, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x9c, 0xaa, 0x5, 0x22, 0x12, 0x2, 0x9d, 0xa6, 
       0x7, 0x11, 0x2, 0x2, 0x9e, 0xa3, 0x5, 0x12, 0xa, 0x2, 0x9f, 0xa0, 
       0x7, 0x13, 0x2, 0x2, 0xa0, 0xa2, 0x5, 0x12, 0xa, 0x2, 0xa1, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 
       0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 0x3, 0x2, 
       0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x9e, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
       0xa8, 0xaa, 0x7, 0x12, 0x2, 0x2, 0xa9, 0x9c, 0x3, 0x2, 0x2, 0x2, 
       0xa9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x13, 0x3, 0x2, 0x2, 0x2, 0xab, 
       0xac, 0x5, 0x16, 0xc, 0x2, 0xac, 0xad, 0x7, 0x28, 0x2, 0x2, 0xad, 
       0xaf, 0x7, 0xd, 0x2, 0x2, 0xae, 0xb0, 0x5, 0x18, 0xd, 0x2, 0xaf, 
       0xae, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0xe, 0x2, 0x2, 0xb2, 0xb3, 0x5, 
       0x1c, 0xf, 0x2, 0xb3, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x9, 
       0x3, 0x2, 0x2, 0xb5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xbb, 0x5, 0x1a, 
       0xe, 0x2, 0xb7, 0xb8, 0x7, 0x13, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x1a, 
       0xe, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 
       0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 
       0xbc, 0x19, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 
       0xbf, 0x5, 0x8, 0x5, 0x2, 0xbf, 0xcb, 0x7, 0x28, 0x2, 0x2, 0xc0, 
       0xc1, 0x7, 0xf, 0x2, 0x2, 0xc1, 0xc8, 0x7, 0x10, 0x2, 0x2, 0xc2, 
       0xc3, 0x7, 0xf, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x40, 0x21, 0x2, 0xc4, 
       0xc5, 0x7, 0x10, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 
       0xc2, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 
       0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x3, 
       0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc0, 0x3, 0x2, 
       0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0xcd, 0xd1, 0x7, 0x11, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x1e, 0x10, 
       0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 
       0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 
       0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
       0x7, 0x12, 0x2, 0x2, 0xd5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd9, 
       0x5, 0x4, 0x3, 0x2, 0xd7, 0xd9, 0x5, 0x20, 0x11, 0x2, 0xd8, 0xd6, 
       0x3, 0x2, 0x2, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x26, 0x14, 0x2, 0xdb, 0xdc, 0x7, 
       0x19, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x22, 0x12, 0x2, 0xdd, 0xde, 0x7, 
       0x14, 0x2, 0x2, 0xde, 0x102, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe1, 0x5, 
       0x22, 0x12, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 
       0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x102, 0x7, 
       0x14, 0x2, 0x2, 0xe3, 0x102, 0x5, 0x1c, 0xf, 0x2, 0xe4, 0xe5, 0x7, 
       0x8, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0xd, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x24, 
       0x13, 0x2, 0xe7, 0xe8, 0x7, 0xe, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x20, 
       0x11, 0x2, 0xe9, 0x102, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x8, 
       0x2, 0x2, 0xeb, 0xec, 0x7, 0xd, 0x2, 0x2, 0xec, 0xed, 0x5, 0x24, 
       0x13, 0x2, 0xed, 0xee, 0x7, 0xe, 0x2, 0x2, 0xee, 0xef, 0x5, 0x20, 
       0x11, 0x2, 0xef, 0xf0, 0x7, 0x9, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x20, 
       0x11, 0x2, 0xf1, 0x102, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0xa, 
       0x2, 0x2, 0xf3, 0xf4, 0x7, 0xd, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x24, 
       0x13, 0x2, 0xf5, 0xf6, 0x7, 0xe, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x20, 
       0x11, 0x2, 0xf7, 0x102, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0xb, 
       0x2, 0x2, 0xf9, 0x102, 0x7, 0x14, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0xc, 
       0x2, 0x2, 0xfb, 0x102, 0x7, 0x14, 0x2, 0x2, 0xfc, 0xfe, 0x7, 0x7, 
       0x2, 0x2, 0xfd, 0xff, 0x5, 0x22, 0x12, 0x2, 0xfe, 0xfd, 0x3, 0x2, 
       0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 
       0x2, 0x2, 0x100, 0x102, 0x7, 0x14, 0x2, 0x2, 0x101, 0xda, 0x3, 0x2, 
       0x2, 0x2, 0x101, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x101, 0xe3, 0x3, 0x2, 
       0x2, 0x2, 0x101, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x101, 0xea, 0x3, 0x2, 
       0x2, 0x2, 0x101, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x101, 0xf8, 0x3, 0x2, 
       0x2, 0x2, 0x101, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfc, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0x21, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x5, 0x36, 
       0x1c, 0x2, 0x104, 0x23, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 0x3e, 
       0x20, 0x2, 0x106, 0x25, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10e, 0x7, 0x28, 
       0x2, 0x2, 0x108, 0x109, 0x7, 0xf, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x22, 
       0x12, 0x2, 0x10a, 0x10b, 0x7, 0x10, 0x2, 0x2, 0x10b, 0x10d, 0x3, 
       0x2, 0x2, 0x2, 0x10c, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 
       0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 
       0x2, 0x2, 0x2, 0x10f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 
       0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0xd, 0x2, 0x2, 0x112, 0x113, 0x5, 
       0x22, 0x12, 0x2, 0x113, 0x114, 0x7, 0xe, 0x2, 0x2, 0x114, 0x118, 
       0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 0x5, 0x26, 0x14, 0x2, 0x116, 0x118, 
       0x5, 0x2a, 0x16, 0x2, 0x117, 0x111, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x9, 0x4, 0x2, 0x2, 0x11a, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x126, 0x5, 0x28, 0x15, 0x2, 0x11c, 0x11d, 
       0x7, 0x28, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0xd, 0x2, 0x2, 0x11e, 0x120, 
       0x5, 0x30, 0x19, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x126, 
       0x7, 0xe, 0x2, 0x2, 0x122, 0x123, 0x5, 0x2e, 0x18, 0x2, 0x123, 0x124, 
       0x5, 0x2c, 0x17, 0x2, 0x124, 0x126, 0x3, 0x2, 0x2, 0x2, 0x125, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x125, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x126, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
       0x9, 0x5, 0x2, 0x2, 0x128, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12e, 
       0x5, 0x32, 0x1a, 0x2, 0x12a, 0x12b, 0x7, 0x13, 0x2, 0x2, 0x12b, 0x12d, 
       0x5, 0x32, 0x1a, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x5, 0x22, 0x12, 0x2, 0x132, 0x134, 
       0x7, 0x29, 0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x132, 
       0x3, 0x2, 0x2, 0x2, 0x134, 0x33, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
       0x8, 0x1b, 0x1, 0x2, 0x136, 0x137, 0x5, 0x2c, 0x17, 0x2, 0x137, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0xc, 0x3, 0x2, 0x2, 0x139, 0x13a, 
       0x9, 0x6, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x2c, 0x17, 0x2, 0x13b, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
       0x8, 0x1c, 0x1, 0x2, 0x141, 0x142, 0x5, 0x34, 0x1b, 0x2, 0x142, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0xc, 0x3, 0x2, 0x2, 0x144, 0x145, 
       0x9, 0x7, 0x2, 0x2, 0x145, 0x147, 0x5, 0x34, 0x1b, 0x2, 0x146, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 
       0x8, 0x1d, 0x1, 0x2, 0x14c, 0x14d, 0x5, 0x36, 0x1c, 0x2, 0x14d, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0xc, 0x3, 0x2, 0x2, 0x14f, 0x150, 
       0x9, 0x8, 0x2, 0x2, 0x150, 0x152, 0x5, 0x36, 0x1c, 0x2, 0x151, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
       0x8, 0x1e, 0x1, 0x2, 0x157, 0x158, 0x5, 0x38, 0x1d, 0x2, 0x158, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0xc, 0x3, 0x2, 0x2, 0x15a, 0x15b, 
       0x9, 0x9, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x38, 0x1d, 0x2, 0x15c, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 
       0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 
       0x8, 0x1f, 0x1, 0x2, 0x162, 0x163, 0x5, 0x3a, 0x1e, 0x2, 0x163, 0x169, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0xc, 0x3, 0x2, 0x2, 0x165, 0x166, 
       0x7, 0x1e, 0x2, 0x2, 0x166, 0x168, 0x5, 0x3a, 0x1e, 0x2, 0x167, 0x164, 
       0x3, 0x2, 0x2, 0x2, 0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 
       0x8, 0x20, 0x1, 0x2, 0x16d, 0x16e, 0x5, 0x3c, 0x1f, 0x2, 0x16e, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0xc, 0x3, 0x2, 0x2, 0x170, 0x171, 
       0x7, 0x1f, 0x2, 0x2, 0x171, 0x173, 0x5, 0x3c, 0x1f, 0x2, 0x172, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x176, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 
       0x5, 0x36, 0x1c, 0x2, 0x178, 0x41, 0x3, 0x2, 0x2, 0x2, 0x26, 0x44, 
       0x46, 0x4d, 0x56, 0x64, 0x71, 0x74, 0x77, 0x7f, 0x8b, 0x95, 0x9a, 
       0xa3, 0xa6, 0xa9, 0xaf, 0xbb, 0xc8, 0xcb, 0xd1, 0xd8, 0xe0, 0xfe, 
       0x101, 0x10e, 0x117, 0x11f, 0x125, 0x12e, 0x133, 0x13d, 0x148, 0x153, 
       0x15e, 0x169, 0x174, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SysyParser::Initializer SysyParser::_init;
