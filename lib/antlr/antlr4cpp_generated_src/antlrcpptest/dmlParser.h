
// Generated from /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/dml.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  dmlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, WORD = 37, ALPHA = 38, 
    DIGIT = 39, EQUAL = 40, NOTEQUAL = 41, GREATERTHAN = 42, LESSTHAN = 43, 
    GREATERTHANOREQUAL = 44, LESSTHANOREQUAL = 45, WS = 46
  };

  enum {
    RuleProgram = 0, RuleQuery = 1, RuleRelation_name = 2, RuleIdentifier = 3, 
    RuleExpr = 4, RuleAtomic_expr = 5, RuleSelection = 6, RuleCondition = 7, 
    RuleConjunction = 8, RuleComparison = 9, RuleOp = 10, RuleOperand = 11, 
    RuleAttribute_name = 12, RuleLiteral = 13, RuleProjection = 14, RuleAttribute_list = 15, 
    RuleRenaming = 16, RuleUnion1 = 17, RuleDifference = 18, RuleProduct = 19, 
    RuleNatural_join = 20, RuleCommand = 21, RuleOpen_cmd = 22, RuleClose_cmd = 23, 
    RuleWrite_cmd = 24, RuleExit_cmd = 25, RuleShow_cmd = 26, RuleCreate_cmd = 27, 
    RuleUpdate_cmd = 28, RuleInsert_cmd = 29, RuleDelete_cmd = 30, RuleList_cmd = 31, 
    RuleList_type = 32, RuleTyped_attribute_list = 33, RuleType = 34, RuleInteger = 35
  };

  dmlParser(antlr4::TokenStream *input);
  ~dmlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class QueryContext;
  class Relation_nameContext;
  class IdentifierContext;
  class ExprContext;
  class Atomic_exprContext;
  class SelectionContext;
  class ConditionContext;
  class ConjunctionContext;
  class ComparisonContext;
  class OpContext;
  class OperandContext;
  class Attribute_nameContext;
  class LiteralContext;
  class ProjectionContext;
  class Attribute_listContext;
  class RenamingContext;
  class Union1Context;
  class DifferenceContext;
  class ProductContext;
  class Natural_joinContext;
  class CommandContext;
  class Open_cmdContext;
  class Close_cmdContext;
  class Write_cmdContext;
  class Exit_cmdContext;
  class Show_cmdContext;
  class Create_cmdContext;
  class Update_cmdContext;
  class Insert_cmdContext;
  class Delete_cmdContext;
  class List_cmdContext;
  class List_typeContext;
  class Typed_attribute_listContext;
  class TypeContext;
  class IntegerContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QueryContext *> query();
    QueryContext* query(size_t i);
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  Relation_nameContext : public antlr4::ParserRuleContext {
  public:
    Relation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_nameContext* relation_name();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHA();
    antlr4::tree::TerminalNode* ALPHA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_exprContext *atomic_expr();
    SelectionContext *selection();
    ProjectionContext *projection();
    RenamingContext *renaming();
    Union1Context *union1();
    DifferenceContext *difference();
    ProductContext *product();
    Natural_joinContext *natural_join();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Atomic_exprContext : public antlr4::ParserRuleContext {
  public:
    Atomic_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Atomic_exprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Atomic_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AtomicParensContext : public Atomic_exprContext {
  public:
    AtomicParensContext(Atomic_exprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomicRelationNameContext : public Atomic_exprContext {
  public:
    AtomicRelationNameContext(Atomic_exprContext *ctx);

    Relation_nameContext *relation_name();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Atomic_exprContext* atomic_expr();

  class  SelectionContext : public antlr4::ParserRuleContext {
  public:
    SelectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    Atomic_exprContext *atomic_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionContext* selection();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConjunctionContext *> conjunction();
    ConjunctionContext* conjunction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ConjunctionContext : public antlr4::ParserRuleContext {
  public:
    ConjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConjunctionContext* conjunction();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ComparisonContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ComparisonContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComparisonParensContext : public ComparisonContext {
  public:
    ComparisonParensContext(ComparisonContext *ctx);

    ConditionContext *condition();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonOperationContext : public ComparisonContext {
  public:
    ComparisonOperationContext(ComparisonContext *ctx);

    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    OpContext *op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ComparisonContext* comparison();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_nameContext *attribute_name();
    LiteralContext *literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  Attribute_nameContext : public antlr4::ParserRuleContext {
  public:
    Attribute_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_nameContext* attribute_name();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORD();
    IntegerContext *integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  ProjectionContext : public antlr4::ParserRuleContext {
  public:
    ProjectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_listContext *attribute_list();
    Atomic_exprContext *atomic_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProjectionContext* projection();

  class  Attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_listContext* attribute_list();

  class  RenamingContext : public antlr4::ParserRuleContext {
  public:
    RenamingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_listContext *attribute_list();
    Atomic_exprContext *atomic_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenamingContext* renaming();

  class  Union1Context : public antlr4::ParserRuleContext {
  public:
    Union1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atomic_exprContext *> atomic_expr();
    Atomic_exprContext* atomic_expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union1Context* union1();

  class  DifferenceContext : public antlr4::ParserRuleContext {
  public:
    DifferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atomic_exprContext *> atomic_expr();
    Atomic_exprContext* atomic_expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DifferenceContext* difference();

  class  ProductContext : public antlr4::ParserRuleContext {
  public:
    ProductContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atomic_exprContext *> atomic_expr();
    Atomic_exprContext* atomic_expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProductContext* product();

  class  Natural_joinContext : public antlr4::ParserRuleContext {
  public:
    Natural_joinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atomic_exprContext *> atomic_expr();
    Atomic_exprContext* atomic_expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Natural_joinContext* natural_join();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_cmdContext *open_cmd();
    Close_cmdContext *close_cmd();
    Write_cmdContext *write_cmd();
    Exit_cmdContext *exit_cmd();
    Show_cmdContext *show_cmd();
    Create_cmdContext *create_cmd();
    Update_cmdContext *update_cmd();
    Insert_cmdContext *insert_cmd();
    Delete_cmdContext *delete_cmd();
    List_cmdContext *list_cmd();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommandContext* command();

  class  Open_cmdContext : public antlr4::ParserRuleContext {
  public:
    Open_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_cmdContext* open_cmd();

  class  Close_cmdContext : public antlr4::ParserRuleContext {
  public:
    Close_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_cmdContext* close_cmd();

  class  Write_cmdContext : public antlr4::ParserRuleContext {
  public:
    Write_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_cmdContext* write_cmd();

  class  Exit_cmdContext : public antlr4::ParserRuleContext {
  public:
    Exit_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exit_cmdContext* exit_cmd();

  class  Show_cmdContext : public antlr4::ParserRuleContext {
  public:
    Show_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_exprContext *atomic_expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_cmdContext* show_cmd();

  class  Create_cmdContext : public antlr4::ParserRuleContext {
  public:
    Create_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    Typed_attribute_listContext *typed_attribute_list();
    Attribute_listContext *attribute_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_cmdContext* create_cmd();

  class  Update_cmdContext : public antlr4::ParserRuleContext {
  public:
    Update_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_cmdContext* update_cmd();

  class  Insert_cmdContext : public antlr4::ParserRuleContext {
  public:
    Insert_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_cmdContext* insert_cmd();

  class  Delete_cmdContext : public antlr4::ParserRuleContext {
  public:
    Delete_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_cmdContext* delete_cmd();

  class  List_cmdContext : public antlr4::ParserRuleContext {
  public:
    List_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_typeContext *list_type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_cmdContext* list_cmd();

  class  List_typeContext : public antlr4::ParserRuleContext {
  public:
    List_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_typeContext* list_type();

  class  Typed_attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Typed_attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_attribute_listContext* typed_attribute_list();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
