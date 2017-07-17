
// Generated from /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/dml.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "dmlVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of dmlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  dmlBaseVisitor : public dmlVisitor {
public:

  virtual antlrcpp::Any visitProgram(dmlParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery(dmlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelation_name(dmlParser::Relation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(dmlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(dmlParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomicRelationName(dmlParser::AtomicRelationNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomicParens(dmlParser::AtomicParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelection(dmlParser::SelectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(dmlParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConjunction(dmlParser::ConjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperation(dmlParser::ComparisonOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonParens(dmlParser::ComparisonParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(dmlParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(dmlParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_name(dmlParser::Attribute_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(dmlParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProjection(dmlParser::ProjectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_list(dmlParser::Attribute_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenaming(dmlParser::RenamingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion1(dmlParser::Union1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDifference(dmlParser::DifferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProduct(dmlParser::ProductContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNatural_join(dmlParser::Natural_joinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(dmlParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_cmd(dmlParser::Open_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClose_cmd(dmlParser::Close_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_cmd(dmlParser::Write_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit_cmd(dmlParser::Exit_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_cmd(dmlParser::Show_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_cmd(dmlParser::Create_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_cmd(dmlParser::Update_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_cmd(dmlParser::Insert_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_cmd(dmlParser::Delete_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_cmd(dmlParser::List_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_type(dmlParser::List_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTyped_attribute_list(dmlParser::Typed_attribute_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(dmlParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(dmlParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
