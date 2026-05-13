
// Generated from Sysy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SysyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SysyParser.
 */
class  SysyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompUnit(SysyParser::CompUnitContext *ctx) = 0;
  virtual void exitCompUnit(SysyParser::CompUnitContext *ctx) = 0;

  virtual void enterDecl(SysyParser::DeclContext *ctx) = 0;
  virtual void exitDecl(SysyParser::DeclContext *ctx) = 0;

  virtual void enterConstDecl(SysyParser::ConstDeclContext *ctx) = 0;
  virtual void exitConstDecl(SysyParser::ConstDeclContext *ctx) = 0;

  virtual void enterBType(SysyParser::BTypeContext *ctx) = 0;
  virtual void exitBType(SysyParser::BTypeContext *ctx) = 0;

  virtual void enterConstDef(SysyParser::ConstDefContext *ctx) = 0;
  virtual void exitConstDef(SysyParser::ConstDefContext *ctx) = 0;

  virtual void enterScalarConstInitVal(SysyParser::ScalarConstInitValContext *ctx) = 0;
  virtual void exitScalarConstInitVal(SysyParser::ScalarConstInitValContext *ctx) = 0;

  virtual void enterListConstInitVal(SysyParser::ListConstInitValContext *ctx) = 0;
  virtual void exitListConstInitVal(SysyParser::ListConstInitValContext *ctx) = 0;

  virtual void enterVarDecl(SysyParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(SysyParser::VarDeclContext *ctx) = 0;

  virtual void enterUninitVarDef(SysyParser::UninitVarDefContext *ctx) = 0;
  virtual void exitUninitVarDef(SysyParser::UninitVarDefContext *ctx) = 0;

  virtual void enterInitVarDef(SysyParser::InitVarDefContext *ctx) = 0;
  virtual void exitInitVarDef(SysyParser::InitVarDefContext *ctx) = 0;

  virtual void enterScalarInitVal(SysyParser::ScalarInitValContext *ctx) = 0;
  virtual void exitScalarInitVal(SysyParser::ScalarInitValContext *ctx) = 0;

  virtual void enterListInitval(SysyParser::ListInitvalContext *ctx) = 0;
  virtual void exitListInitval(SysyParser::ListInitvalContext *ctx) = 0;

  virtual void enterFuncDef(SysyParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(SysyParser::FuncDefContext *ctx) = 0;

  virtual void enterFuncType(SysyParser::FuncTypeContext *ctx) = 0;
  virtual void exitFuncType(SysyParser::FuncTypeContext *ctx) = 0;

  virtual void enterFuncFParams(SysyParser::FuncFParamsContext *ctx) = 0;
  virtual void exitFuncFParams(SysyParser::FuncFParamsContext *ctx) = 0;

  virtual void enterFuncFParam(SysyParser::FuncFParamContext *ctx) = 0;
  virtual void exitFuncFParam(SysyParser::FuncFParamContext *ctx) = 0;

  virtual void enterBlock(SysyParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SysyParser::BlockContext *ctx) = 0;

  virtual void enterBlockItem(SysyParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(SysyParser::BlockItemContext *ctx) = 0;

  virtual void enterAssignment(SysyParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(SysyParser::AssignmentContext *ctx) = 0;

  virtual void enterExpStmt(SysyParser::ExpStmtContext *ctx) = 0;
  virtual void exitExpStmt(SysyParser::ExpStmtContext *ctx) = 0;

  virtual void enterBlockStmt(SysyParser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(SysyParser::BlockStmtContext *ctx) = 0;

  virtual void enterIfStmt1(SysyParser::IfStmt1Context *ctx) = 0;
  virtual void exitIfStmt1(SysyParser::IfStmt1Context *ctx) = 0;

  virtual void enterIfStmt2(SysyParser::IfStmt2Context *ctx) = 0;
  virtual void exitIfStmt2(SysyParser::IfStmt2Context *ctx) = 0;

  virtual void enterWhileStmt(SysyParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(SysyParser::WhileStmtContext *ctx) = 0;

  virtual void enterBreakStmt(SysyParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(SysyParser::BreakStmtContext *ctx) = 0;

  virtual void enterContinueStmt(SysyParser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(SysyParser::ContinueStmtContext *ctx) = 0;

  virtual void enterReturnStmt(SysyParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(SysyParser::ReturnStmtContext *ctx) = 0;

  virtual void enterExp(SysyParser::ExpContext *ctx) = 0;
  virtual void exitExp(SysyParser::ExpContext *ctx) = 0;

  virtual void enterCond(SysyParser::CondContext *ctx) = 0;
  virtual void exitCond(SysyParser::CondContext *ctx) = 0;

  virtual void enterLVal(SysyParser::LValContext *ctx) = 0;
  virtual void exitLVal(SysyParser::LValContext *ctx) = 0;

  virtual void enterPrimaryExp1(SysyParser::PrimaryExp1Context *ctx) = 0;
  virtual void exitPrimaryExp1(SysyParser::PrimaryExp1Context *ctx) = 0;

  virtual void enterPrimaryExp2(SysyParser::PrimaryExp2Context *ctx) = 0;
  virtual void exitPrimaryExp2(SysyParser::PrimaryExp2Context *ctx) = 0;

  virtual void enterPrimaryExp3(SysyParser::PrimaryExp3Context *ctx) = 0;
  virtual void exitPrimaryExp3(SysyParser::PrimaryExp3Context *ctx) = 0;

  virtual void enterNumber(SysyParser::NumberContext *ctx) = 0;
  virtual void exitNumber(SysyParser::NumberContext *ctx) = 0;

  virtual void enterUnary1(SysyParser::Unary1Context *ctx) = 0;
  virtual void exitUnary1(SysyParser::Unary1Context *ctx) = 0;

  virtual void enterUnary2(SysyParser::Unary2Context *ctx) = 0;
  virtual void exitUnary2(SysyParser::Unary2Context *ctx) = 0;

  virtual void enterUnary3(SysyParser::Unary3Context *ctx) = 0;
  virtual void exitUnary3(SysyParser::Unary3Context *ctx) = 0;

  virtual void enterUnaryOp(SysyParser::UnaryOpContext *ctx) = 0;
  virtual void exitUnaryOp(SysyParser::UnaryOpContext *ctx) = 0;

  virtual void enterFuncRParams(SysyParser::FuncRParamsContext *ctx) = 0;
  virtual void exitFuncRParams(SysyParser::FuncRParamsContext *ctx) = 0;

  virtual void enterExpAsRParam(SysyParser::ExpAsRParamContext *ctx) = 0;
  virtual void exitExpAsRParam(SysyParser::ExpAsRParamContext *ctx) = 0;

  virtual void enterStringAsRParam(SysyParser::StringAsRParamContext *ctx) = 0;
  virtual void exitStringAsRParam(SysyParser::StringAsRParamContext *ctx) = 0;

  virtual void enterMul2(SysyParser::Mul2Context *ctx) = 0;
  virtual void exitMul2(SysyParser::Mul2Context *ctx) = 0;

  virtual void enterMul1(SysyParser::Mul1Context *ctx) = 0;
  virtual void exitMul1(SysyParser::Mul1Context *ctx) = 0;

  virtual void enterAdd2(SysyParser::Add2Context *ctx) = 0;
  virtual void exitAdd2(SysyParser::Add2Context *ctx) = 0;

  virtual void enterAdd1(SysyParser::Add1Context *ctx) = 0;
  virtual void exitAdd1(SysyParser::Add1Context *ctx) = 0;

  virtual void enterRel2(SysyParser::Rel2Context *ctx) = 0;
  virtual void exitRel2(SysyParser::Rel2Context *ctx) = 0;

  virtual void enterRel1(SysyParser::Rel1Context *ctx) = 0;
  virtual void exitRel1(SysyParser::Rel1Context *ctx) = 0;

  virtual void enterEq1(SysyParser::Eq1Context *ctx) = 0;
  virtual void exitEq1(SysyParser::Eq1Context *ctx) = 0;

  virtual void enterEq2(SysyParser::Eq2Context *ctx) = 0;
  virtual void exitEq2(SysyParser::Eq2Context *ctx) = 0;

  virtual void enterLAnd2(SysyParser::LAnd2Context *ctx) = 0;
  virtual void exitLAnd2(SysyParser::LAnd2Context *ctx) = 0;

  virtual void enterLAnd1(SysyParser::LAnd1Context *ctx) = 0;
  virtual void exitLAnd1(SysyParser::LAnd1Context *ctx) = 0;

  virtual void enterLOr1(SysyParser::LOr1Context *ctx) = 0;
  virtual void exitLOr1(SysyParser::LOr1Context *ctx) = 0;

  virtual void enterLOr2(SysyParser::LOr2Context *ctx) = 0;
  virtual void exitLOr2(SysyParser::LOr2Context *ctx) = 0;

  virtual void enterConstExp(SysyParser::ConstExpContext *ctx) = 0;
  virtual void exitConstExp(SysyParser::ConstExpContext *ctx) = 0;


};

