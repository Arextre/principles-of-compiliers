
// Generated from Sysy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SysyListener.h"


/**
 * This class provides an empty implementation of SysyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SysyBaseListener : public SysyListener {
public:

  virtual void enterCompUnit(SysyParser::CompUnitContext * /*ctx*/) override { }
  virtual void exitCompUnit(SysyParser::CompUnitContext * /*ctx*/) override { }

  virtual void enterDecl(SysyParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(SysyParser::DeclContext * /*ctx*/) override { }

  virtual void enterConstDecl(SysyParser::ConstDeclContext * /*ctx*/) override { }
  virtual void exitConstDecl(SysyParser::ConstDeclContext * /*ctx*/) override { }

  virtual void enterBType(SysyParser::BTypeContext * /*ctx*/) override { }
  virtual void exitBType(SysyParser::BTypeContext * /*ctx*/) override { }

  virtual void enterConstDef(SysyParser::ConstDefContext * /*ctx*/) override { }
  virtual void exitConstDef(SysyParser::ConstDefContext * /*ctx*/) override { }

  virtual void enterScalarConstInitVal(SysyParser::ScalarConstInitValContext * /*ctx*/) override { }
  virtual void exitScalarConstInitVal(SysyParser::ScalarConstInitValContext * /*ctx*/) override { }

  virtual void enterListConstInitVal(SysyParser::ListConstInitValContext * /*ctx*/) override { }
  virtual void exitListConstInitVal(SysyParser::ListConstInitValContext * /*ctx*/) override { }

  virtual void enterVarDecl(SysyParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(SysyParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterUninitVarDef(SysyParser::UninitVarDefContext * /*ctx*/) override { }
  virtual void exitUninitVarDef(SysyParser::UninitVarDefContext * /*ctx*/) override { }

  virtual void enterInitVarDef(SysyParser::InitVarDefContext * /*ctx*/) override { }
  virtual void exitInitVarDef(SysyParser::InitVarDefContext * /*ctx*/) override { }

  virtual void enterScalarInitVal(SysyParser::ScalarInitValContext * /*ctx*/) override { }
  virtual void exitScalarInitVal(SysyParser::ScalarInitValContext * /*ctx*/) override { }

  virtual void enterListInitval(SysyParser::ListInitvalContext * /*ctx*/) override { }
  virtual void exitListInitval(SysyParser::ListInitvalContext * /*ctx*/) override { }

  virtual void enterFuncDef(SysyParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(SysyParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterFuncType(SysyParser::FuncTypeContext * /*ctx*/) override { }
  virtual void exitFuncType(SysyParser::FuncTypeContext * /*ctx*/) override { }

  virtual void enterFuncFParams(SysyParser::FuncFParamsContext * /*ctx*/) override { }
  virtual void exitFuncFParams(SysyParser::FuncFParamsContext * /*ctx*/) override { }

  virtual void enterFuncFParam(SysyParser::FuncFParamContext * /*ctx*/) override { }
  virtual void exitFuncFParam(SysyParser::FuncFParamContext * /*ctx*/) override { }

  virtual void enterBlock(SysyParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SysyParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockItem(SysyParser::BlockItemContext * /*ctx*/) override { }
  virtual void exitBlockItem(SysyParser::BlockItemContext * /*ctx*/) override { }

  virtual void enterAssignment(SysyParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(SysyParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpStmt(SysyParser::ExpStmtContext * /*ctx*/) override { }
  virtual void exitExpStmt(SysyParser::ExpStmtContext * /*ctx*/) override { }

  virtual void enterBlockStmt(SysyParser::BlockStmtContext * /*ctx*/) override { }
  virtual void exitBlockStmt(SysyParser::BlockStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt1(SysyParser::IfStmt1Context * /*ctx*/) override { }
  virtual void exitIfStmt1(SysyParser::IfStmt1Context * /*ctx*/) override { }

  virtual void enterIfStmt2(SysyParser::IfStmt2Context * /*ctx*/) override { }
  virtual void exitIfStmt2(SysyParser::IfStmt2Context * /*ctx*/) override { }

  virtual void enterWhileStmt(SysyParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(SysyParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(SysyParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(SysyParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(SysyParser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(SysyParser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(SysyParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(SysyParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterExp(SysyParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(SysyParser::ExpContext * /*ctx*/) override { }

  virtual void enterCond(SysyParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(SysyParser::CondContext * /*ctx*/) override { }

  virtual void enterLVal(SysyParser::LValContext * /*ctx*/) override { }
  virtual void exitLVal(SysyParser::LValContext * /*ctx*/) override { }

  virtual void enterPrimaryExp1(SysyParser::PrimaryExp1Context * /*ctx*/) override { }
  virtual void exitPrimaryExp1(SysyParser::PrimaryExp1Context * /*ctx*/) override { }

  virtual void enterPrimaryExp2(SysyParser::PrimaryExp2Context * /*ctx*/) override { }
  virtual void exitPrimaryExp2(SysyParser::PrimaryExp2Context * /*ctx*/) override { }

  virtual void enterPrimaryExp3(SysyParser::PrimaryExp3Context * /*ctx*/) override { }
  virtual void exitPrimaryExp3(SysyParser::PrimaryExp3Context * /*ctx*/) override { }

  virtual void enterNumber(SysyParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(SysyParser::NumberContext * /*ctx*/) override { }

  virtual void enterUnary1(SysyParser::Unary1Context * /*ctx*/) override { }
  virtual void exitUnary1(SysyParser::Unary1Context * /*ctx*/) override { }

  virtual void enterUnary2(SysyParser::Unary2Context * /*ctx*/) override { }
  virtual void exitUnary2(SysyParser::Unary2Context * /*ctx*/) override { }

  virtual void enterUnary3(SysyParser::Unary3Context * /*ctx*/) override { }
  virtual void exitUnary3(SysyParser::Unary3Context * /*ctx*/) override { }

  virtual void enterUnaryOp(SysyParser::UnaryOpContext * /*ctx*/) override { }
  virtual void exitUnaryOp(SysyParser::UnaryOpContext * /*ctx*/) override { }

  virtual void enterFuncRParams(SysyParser::FuncRParamsContext * /*ctx*/) override { }
  virtual void exitFuncRParams(SysyParser::FuncRParamsContext * /*ctx*/) override { }

  virtual void enterExpAsRParam(SysyParser::ExpAsRParamContext * /*ctx*/) override { }
  virtual void exitExpAsRParam(SysyParser::ExpAsRParamContext * /*ctx*/) override { }

  virtual void enterStringAsRParam(SysyParser::StringAsRParamContext * /*ctx*/) override { }
  virtual void exitStringAsRParam(SysyParser::StringAsRParamContext * /*ctx*/) override { }

  virtual void enterMul2(SysyParser::Mul2Context * /*ctx*/) override { }
  virtual void exitMul2(SysyParser::Mul2Context * /*ctx*/) override { }

  virtual void enterMul1(SysyParser::Mul1Context * /*ctx*/) override { }
  virtual void exitMul1(SysyParser::Mul1Context * /*ctx*/) override { }

  virtual void enterAdd2(SysyParser::Add2Context * /*ctx*/) override { }
  virtual void exitAdd2(SysyParser::Add2Context * /*ctx*/) override { }

  virtual void enterAdd1(SysyParser::Add1Context * /*ctx*/) override { }
  virtual void exitAdd1(SysyParser::Add1Context * /*ctx*/) override { }

  virtual void enterRel2(SysyParser::Rel2Context * /*ctx*/) override { }
  virtual void exitRel2(SysyParser::Rel2Context * /*ctx*/) override { }

  virtual void enterRel1(SysyParser::Rel1Context * /*ctx*/) override { }
  virtual void exitRel1(SysyParser::Rel1Context * /*ctx*/) override { }

  virtual void enterEq1(SysyParser::Eq1Context * /*ctx*/) override { }
  virtual void exitEq1(SysyParser::Eq1Context * /*ctx*/) override { }

  virtual void enterEq2(SysyParser::Eq2Context * /*ctx*/) override { }
  virtual void exitEq2(SysyParser::Eq2Context * /*ctx*/) override { }

  virtual void enterLAnd2(SysyParser::LAnd2Context * /*ctx*/) override { }
  virtual void exitLAnd2(SysyParser::LAnd2Context * /*ctx*/) override { }

  virtual void enterLAnd1(SysyParser::LAnd1Context * /*ctx*/) override { }
  virtual void exitLAnd1(SysyParser::LAnd1Context * /*ctx*/) override { }

  virtual void enterLOr1(SysyParser::LOr1Context * /*ctx*/) override { }
  virtual void exitLOr1(SysyParser::LOr1Context * /*ctx*/) override { }

  virtual void enterLOr2(SysyParser::LOr2Context * /*ctx*/) override { }
  virtual void exitLOr2(SysyParser::LOr2Context * /*ctx*/) override { }

  virtual void enterConstExp(SysyParser::ConstExpContext * /*ctx*/) override { }
  virtual void exitConstExp(SysyParser::ConstExpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

