
// Generated from /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/dml.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "dmlParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by dmlParser.
 */
class  dmlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by dmlParser.
   */
    virtual antlrcpp::Any visitProgram(dmlParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitQuery(dmlParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitRelation_name(dmlParser::Relation_nameContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(dmlParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitExpr(dmlParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitAtomicRelationName(dmlParser::AtomicRelationNameContext *context) = 0;

    virtual antlrcpp::Any visitAtomicParens(dmlParser::AtomicParensContext *context) = 0;

    virtual antlrcpp::Any visitSelection(dmlParser::SelectionContext *context) = 0;

    virtual antlrcpp::Any visitCondition(dmlParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitConjunction(dmlParser::ConjunctionContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperation(dmlParser::ComparisonOperationContext *context) = 0;

    virtual antlrcpp::Any visitComparisonParens(dmlParser::ComparisonParensContext *context) = 0;

    virtual antlrcpp::Any visitOp(dmlParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitOperand(dmlParser::OperandContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_name(dmlParser::Attribute_nameContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(dmlParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitProjection(dmlParser::ProjectionContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_list(dmlParser::Attribute_listContext *context) = 0;

    virtual antlrcpp::Any visitRenaming(dmlParser::RenamingContext *context) = 0;

    virtual antlrcpp::Any visitUnion1(dmlParser::Union1Context *context) = 0;

    virtual antlrcpp::Any visitDifference(dmlParser::DifferenceContext *context) = 0;

    virtual antlrcpp::Any visitProduct(dmlParser::ProductContext *context) = 0;

    virtual antlrcpp::Any visitNatural_join(dmlParser::Natural_joinContext *context) = 0;

    virtual antlrcpp::Any visitCommand(dmlParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitOpen_cmd(dmlParser::Open_cmdContext *context) = 0;

    virtual antlrcpp::Any visitClose_cmd(dmlParser::Close_cmdContext *context) = 0;

    virtual antlrcpp::Any visitWrite_cmd(dmlParser::Write_cmdContext *context) = 0;

    virtual antlrcpp::Any visitExit_cmd(dmlParser::Exit_cmdContext *context) = 0;

    virtual antlrcpp::Any visitShow_cmd(dmlParser::Show_cmdContext *context) = 0;

    virtual antlrcpp::Any visitCreate_cmd(dmlParser::Create_cmdContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_cmd(dmlParser::Update_cmdContext *context) = 0;

    virtual antlrcpp::Any visitInsert_cmd(dmlParser::Insert_cmdContext *context) = 0;

    virtual antlrcpp::Any visitDelete_cmd(dmlParser::Delete_cmdContext *context) = 0;

    virtual antlrcpp::Any visitList_cmd(dmlParser::List_cmdContext *context) = 0;

    virtual antlrcpp::Any visitList_type(dmlParser::List_typeContext *context) = 0;

    virtual antlrcpp::Any visitTyped_attribute_list(dmlParser::Typed_attribute_listContext *context) = 0;

    virtual antlrcpp::Any visitType(dmlParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitInteger(dmlParser::IntegerContext *context) = 0;


};

}  // namespace antlrcpptest
