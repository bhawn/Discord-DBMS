#include <string>
#include <antlr4-runtime.h>
#include "dmlParser.h"
#include "dmlLexer.h"
#include "dmlBaseVisitor.h"
#include "db_engine.h"
using namespace antlrcpptest;
using namespace antlr4;

class parseTreeVisitor : public dmlBaseVisitor {
  public :
    db_engine Engine;
  private :

  virtual antlrcpp::Any visitQuery(dmlParser::QueryContext *ctx) override;

  virtual antlrcpp::Any visitExpr(dmlParser::ExprContext *ctx) override;

  virtual antlrcpp::Any visitAtomicRelationName(dmlParser::AtomicRelationNameContext *ctx) override;

  virtual antlrcpp::Any visitAtomicParens(dmlParser::AtomicParensContext *ctx) override;

  virtual antlrcpp::Any visitSelection(dmlParser::SelectionContext *ctx) override;

  virtual antlrcpp::Any visitCondition(dmlParser::ConditionContext *ctx) override;

  virtual antlrcpp::Any visitConjunction(dmlParser::ConjunctionContext *ctx) override;
  
  virtual antlrcpp::Any visitComparisonOperation(dmlParser::ComparisonOperationContext *ctx) override;
  
  virtual antlrcpp::Any visitComparisonParens(dmlParser::ComparisonParensContext *ctx) override;

  virtual antlrcpp::Any visitProjection(dmlParser::ProjectionContext *ctx) override;
  
  virtual antlrcpp::Any visitAttribute_list(dmlParser::Attribute_listContext *ctx) override;

  virtual antlrcpp::Any visitRenaming(dmlParser::RenamingContext *ctx) override;
  
  virtual antlrcpp::Any visitUnion1(dmlParser::Union1Context *ctx) override;

  virtual antlrcpp::Any visitDifference(dmlParser::DifferenceContext *ctx) override;

  virtual antlrcpp::Any visitProduct(dmlParser::ProductContext *ctx) override;

  virtual antlrcpp::Any visitNatural_join(dmlParser::Natural_joinContext *ctx) override;

  virtual antlrcpp::Any visitOpen_cmd(dmlParser::Open_cmdContext *ctx) override;

  virtual antlrcpp::Any visitClose_cmd(dmlParser::Close_cmdContext *ctx) override;
  
  virtual antlrcpp::Any visitWrite_cmd(dmlParser::Write_cmdContext *ctx) override;

  virtual antlrcpp::Any visitExit_cmd(dmlParser::Exit_cmdContext *ctx) override;

  virtual antlrcpp::Any visitShow_cmd(dmlParser::Show_cmdContext *ctx) override;

  virtual antlrcpp::Any visitCreate_cmd(dmlParser::Create_cmdContext *ctx) override;
  
  virtual antlrcpp::Any visitUpdate_cmd(dmlParser::Update_cmdContext *ctx) override;

  virtual antlrcpp::Any visitInsert_cmd(dmlParser::Insert_cmdContext *ctx) override;

  virtual antlrcpp::Any visitDelete_cmd(dmlParser::Delete_cmdContext *ctx) override;
  
  virtual antlrcpp::Any visitList_cmd(dmlParser::List_cmdContext *ctx) override;

  virtual antlrcpp::Any visitTyped_attribute_list(dmlParser::Typed_attribute_listContext *ctx) override;

};
