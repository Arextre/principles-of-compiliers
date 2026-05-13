
// Generated from Sysy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SysyVisitor.h"


/**
 * This class provides an empty implementation of SysyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SysyBaseVisitor : public SysyVisitor {
public:

  virtual antlrcpp::Any visitCompUnit(SysyParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(SysyParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDecl(SysyParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBType(SysyParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDef(SysyParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarConstInitVal(SysyParser::ScalarConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListConstInitVal(SysyParser::ListConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(SysyParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninitVarDef(SysyParser::UninitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitVarDef(SysyParser::InitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarInitVal(SysyParser::ScalarInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListInitval(SysyParser::ListInitvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(SysyParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncType(SysyParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncFParams(SysyParser::FuncFParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncFParam(SysyParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(SysyParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockItem(SysyParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(SysyParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpStmt(SysyParser::ExpStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStmt(SysyParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt1(SysyParser::IfStmt1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt2(SysyParser::IfStmt2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(SysyParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(SysyParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(SysyParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(SysyParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(SysyParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond(SysyParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLVal(SysyParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExp1(SysyParser::PrimaryExp1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExp2(SysyParser::PrimaryExp2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExp3(SysyParser::PrimaryExp3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(SysyParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary1(SysyParser::Unary1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary2(SysyParser::Unary2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary3(SysyParser::Unary3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOp(SysyParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncRParams(SysyParser::FuncRParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpAsRParam(SysyParser::ExpAsRParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringAsRParam(SysyParser::StringAsRParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul2(SysyParser::Mul2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul1(SysyParser::Mul1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd2(SysyParser::Add2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd1(SysyParser::Add1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel2(SysyParser::Rel2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel1(SysyParser::Rel1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEq1(SysyParser::Eq1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEq2(SysyParser::Eq2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLAnd2(SysyParser::LAnd2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLAnd1(SysyParser::LAnd1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLOr1(SysyParser::LOr1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLOr2(SysyParser::LOr2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExp(SysyParser::ConstExpContext *ctx) override {
    return visitChildren(ctx);
  }


};

