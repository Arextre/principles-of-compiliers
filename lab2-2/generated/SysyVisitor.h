
// Generated from Sysy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SysyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SysyParser.
 */
class  SysyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SysyParser.
   */
    virtual antlrcpp::Any visitCompUnit(SysyParser::CompUnitContext *context) = 0;

    virtual antlrcpp::Any visitDecl(SysyParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitConstDecl(SysyParser::ConstDeclContext *context) = 0;

    virtual antlrcpp::Any visitBType(SysyParser::BTypeContext *context) = 0;

    virtual antlrcpp::Any visitConstDef(SysyParser::ConstDefContext *context) = 0;

    virtual antlrcpp::Any visitScalarConstInitVal(SysyParser::ScalarConstInitValContext *context) = 0;

    virtual antlrcpp::Any visitListConstInitVal(SysyParser::ListConstInitValContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(SysyParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitUninitVarDef(SysyParser::UninitVarDefContext *context) = 0;

    virtual antlrcpp::Any visitInitVarDef(SysyParser::InitVarDefContext *context) = 0;

    virtual antlrcpp::Any visitScalarInitVal(SysyParser::ScalarInitValContext *context) = 0;

    virtual antlrcpp::Any visitListInitval(SysyParser::ListInitvalContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(SysyParser::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncType(SysyParser::FuncTypeContext *context) = 0;

    virtual antlrcpp::Any visitFuncFParams(SysyParser::FuncFParamsContext *context) = 0;

    virtual antlrcpp::Any visitFuncFParam(SysyParser::FuncFParamContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SysyParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(SysyParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(SysyParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitExpStmt(SysyParser::ExpStmtContext *context) = 0;

    virtual antlrcpp::Any visitBlockStmt(SysyParser::BlockStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt1(SysyParser::IfStmt1Context *context) = 0;

    virtual antlrcpp::Any visitIfStmt2(SysyParser::IfStmt2Context *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(SysyParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(SysyParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(SysyParser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(SysyParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitExp(SysyParser::ExpContext *context) = 0;

    virtual antlrcpp::Any visitCond(SysyParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitLVal(SysyParser::LValContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExp1(SysyParser::PrimaryExp1Context *context) = 0;

    virtual antlrcpp::Any visitPrimaryExp2(SysyParser::PrimaryExp2Context *context) = 0;

    virtual antlrcpp::Any visitPrimaryExp3(SysyParser::PrimaryExp3Context *context) = 0;

    virtual antlrcpp::Any visitNumber(SysyParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitUnary1(SysyParser::Unary1Context *context) = 0;

    virtual antlrcpp::Any visitUnary2(SysyParser::Unary2Context *context) = 0;

    virtual antlrcpp::Any visitUnary3(SysyParser::Unary3Context *context) = 0;

    virtual antlrcpp::Any visitUnaryOp(SysyParser::UnaryOpContext *context) = 0;

    virtual antlrcpp::Any visitFuncRParams(SysyParser::FuncRParamsContext *context) = 0;

    virtual antlrcpp::Any visitExpAsRParam(SysyParser::ExpAsRParamContext *context) = 0;

    virtual antlrcpp::Any visitStringAsRParam(SysyParser::StringAsRParamContext *context) = 0;

    virtual antlrcpp::Any visitMul2(SysyParser::Mul2Context *context) = 0;

    virtual antlrcpp::Any visitMul1(SysyParser::Mul1Context *context) = 0;

    virtual antlrcpp::Any visitAdd2(SysyParser::Add2Context *context) = 0;

    virtual antlrcpp::Any visitAdd1(SysyParser::Add1Context *context) = 0;

    virtual antlrcpp::Any visitRel2(SysyParser::Rel2Context *context) = 0;

    virtual antlrcpp::Any visitRel1(SysyParser::Rel1Context *context) = 0;

    virtual antlrcpp::Any visitEq1(SysyParser::Eq1Context *context) = 0;

    virtual antlrcpp::Any visitEq2(SysyParser::Eq2Context *context) = 0;

    virtual antlrcpp::Any visitLAnd2(SysyParser::LAnd2Context *context) = 0;

    virtual antlrcpp::Any visitLAnd1(SysyParser::LAnd1Context *context) = 0;

    virtual antlrcpp::Any visitLOr1(SysyParser::LOr1Context *context) = 0;

    virtual antlrcpp::Any visitLOr2(SysyParser::LOr2Context *context) = 0;

    virtual antlrcpp::Any visitConstExp(SysyParser::ConstExpContext *context) = 0;


};

