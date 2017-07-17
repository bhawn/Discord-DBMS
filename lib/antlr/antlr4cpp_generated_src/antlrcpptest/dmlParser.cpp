
// Generated from /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/dml.g4 by ANTLR 4.7


#include "dmlVisitor.h"

#include "dmlParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

dmlParser::dmlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

dmlParser::~dmlParser() {
  delete _interpreter;
}

std::string dmlParser::getGrammarFileName() const {
  return "dml.g4";
}

const std::vector<std::string>& dmlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& dmlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

dmlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::QueryContext *> dmlParser::ProgramContext::query() {
  return getRuleContexts<dmlParser::QueryContext>();
}

dmlParser::QueryContext* dmlParser::ProgramContext::query(size_t i) {
  return getRuleContext<dmlParser::QueryContext>(i);
}

std::vector<dmlParser::CommandContext *> dmlParser::ProgramContext::command() {
  return getRuleContexts<dmlParser::CommandContext>();
}

dmlParser::CommandContext* dmlParser::ProgramContext::command(size_t i) {
  return getRuleContext<dmlParser::CommandContext>(i);
}


size_t dmlParser::ProgramContext::getRuleIndex() const {
  return dmlParser::RuleProgram;
}

antlrcpp::Any dmlParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ProgramContext* dmlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, dmlParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(74);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case dmlParser::ALPHA: {
          setState(72);
          query();
          break;
        }

        case dmlParser::T__15:
        case dmlParser::T__16:
        case dmlParser::T__17:
        case dmlParser::T__18:
        case dmlParser::T__19:
        case dmlParser::T__20:
        case dmlParser::T__22:
        case dmlParser::T__26:
        case dmlParser::T__29:
        case dmlParser::T__30: {
          setState(73);
          command();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(76); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::T__15)
      | (1ULL << dmlParser::T__16)
      | (1ULL << dmlParser::T__17)
      | (1ULL << dmlParser::T__18)
      | (1ULL << dmlParser::T__19)
      | (1ULL << dmlParser::T__20)
      | (1ULL << dmlParser::T__22)
      | (1ULL << dmlParser::T__26)
      | (1ULL << dmlParser::T__29)
      | (1ULL << dmlParser::T__30)
      | (1ULL << dmlParser::ALPHA))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

dmlParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::QueryContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::ExprContext* dmlParser::QueryContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}


size_t dmlParser::QueryContext::getRuleIndex() const {
  return dmlParser::RuleQuery;
}

antlrcpp::Any dmlParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::QueryContext* dmlParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 2, dmlParser::RuleQuery);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    relation_name();
    setState(79);
    match(dmlParser::T__0);
    setState(80);
    expr();
    setState(81);
    match(dmlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relation_nameContext ------------------------------------------------------------------

dmlParser::Relation_nameContext::Relation_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IdentifierContext* dmlParser::Relation_nameContext::identifier() {
  return getRuleContext<dmlParser::IdentifierContext>(0);
}


size_t dmlParser::Relation_nameContext::getRuleIndex() const {
  return dmlParser::RuleRelation_name;
}

antlrcpp::Any dmlParser::Relation_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitRelation_name(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Relation_nameContext* dmlParser::relation_name() {
  Relation_nameContext *_localctx = _tracker.createInstance<Relation_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, dmlParser::RuleRelation_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

dmlParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dmlParser::IdentifierContext::ALPHA() {
  return getTokens(dmlParser::ALPHA);
}

tree::TerminalNode* dmlParser::IdentifierContext::ALPHA(size_t i) {
  return getToken(dmlParser::ALPHA, i);
}

std::vector<tree::TerminalNode *> dmlParser::IdentifierContext::DIGIT() {
  return getTokens(dmlParser::DIGIT);
}

tree::TerminalNode* dmlParser::IdentifierContext::DIGIT(size_t i) {
  return getToken(dmlParser::DIGIT, i);
}


size_t dmlParser::IdentifierContext::getRuleIndex() const {
  return dmlParser::RuleIdentifier;
}

antlrcpp::Any dmlParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::IdentifierContext* dmlParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 6, dmlParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(dmlParser::ALPHA);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::T__2)
      | (1ULL << dmlParser::ALPHA)
      | (1ULL << dmlParser::DIGIT))) != 0)) {
      setState(86);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << dmlParser::T__2)
        | (1ULL << dmlParser::ALPHA)
        | (1ULL << dmlParser::DIGIT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(91);
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

//----------------- ExprContext ------------------------------------------------------------------

dmlParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Atomic_exprContext* dmlParser::ExprContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}

dmlParser::SelectionContext* dmlParser::ExprContext::selection() {
  return getRuleContext<dmlParser::SelectionContext>(0);
}

dmlParser::ProjectionContext* dmlParser::ExprContext::projection() {
  return getRuleContext<dmlParser::ProjectionContext>(0);
}

dmlParser::RenamingContext* dmlParser::ExprContext::renaming() {
  return getRuleContext<dmlParser::RenamingContext>(0);
}

dmlParser::Union1Context* dmlParser::ExprContext::union1() {
  return getRuleContext<dmlParser::Union1Context>(0);
}

dmlParser::DifferenceContext* dmlParser::ExprContext::difference() {
  return getRuleContext<dmlParser::DifferenceContext>(0);
}

dmlParser::ProductContext* dmlParser::ExprContext::product() {
  return getRuleContext<dmlParser::ProductContext>(0);
}

dmlParser::Natural_joinContext* dmlParser::ExprContext::natural_join() {
  return getRuleContext<dmlParser::Natural_joinContext>(0);
}


size_t dmlParser::ExprContext::getRuleIndex() const {
  return dmlParser::RuleExpr;
}

antlrcpp::Any dmlParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ExprContext* dmlParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 8, dmlParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      atomic_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(93);
      selection();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      projection();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(95);
      renaming();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(96);
      union1();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(97);
      difference();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(98);
      product();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(99);
      natural_join();
      break;
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

//----------------- Atomic_exprContext ------------------------------------------------------------------

dmlParser::Atomic_exprContext::Atomic_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::Atomic_exprContext::getRuleIndex() const {
  return dmlParser::RuleAtomic_expr;
}

void dmlParser::Atomic_exprContext::copyFrom(Atomic_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicParensContext ------------------------------------------------------------------

dmlParser::ExprContext* dmlParser::AtomicParensContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}

dmlParser::AtomicParensContext::AtomicParensContext(Atomic_exprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any dmlParser::AtomicParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitAtomicParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomicRelationNameContext ------------------------------------------------------------------

dmlParser::Relation_nameContext* dmlParser::AtomicRelationNameContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::AtomicRelationNameContext::AtomicRelationNameContext(Atomic_exprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any dmlParser::AtomicRelationNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitAtomicRelationName(this);
  else
    return visitor->visitChildren(this);
}
dmlParser::Atomic_exprContext* dmlParser::atomic_expr() {
  Atomic_exprContext *_localctx = _tracker.createInstance<Atomic_exprContext>(_ctx, getState());
  enterRule(_localctx, 10, dmlParser::RuleAtomic_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::ALPHA: {
        _localctx = dynamic_cast<Atomic_exprContext *>(_tracker.createInstance<dmlParser::AtomicRelationNameContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(102);
        relation_name();
        break;
      }

      case dmlParser::T__3: {
        _localctx = dynamic_cast<Atomic_exprContext *>(_tracker.createInstance<dmlParser::AtomicParensContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(103);
        match(dmlParser::T__3);
        setState(104);
        expr();
        setState(105);
        match(dmlParser::T__4);
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

//----------------- SelectionContext ------------------------------------------------------------------

dmlParser::SelectionContext::SelectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::ConditionContext* dmlParser::SelectionContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::SelectionContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::SelectionContext::getRuleIndex() const {
  return dmlParser::RuleSelection;
}

antlrcpp::Any dmlParser::SelectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitSelection(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::SelectionContext* dmlParser::selection() {
  SelectionContext *_localctx = _tracker.createInstance<SelectionContext>(_ctx, getState());
  enterRule(_localctx, 12, dmlParser::RuleSelection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(dmlParser::T__5);
    setState(110);
    match(dmlParser::T__3);
    setState(111);
    condition();
    setState(112);
    match(dmlParser::T__4);
    setState(113);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

dmlParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::ConjunctionContext *> dmlParser::ConditionContext::conjunction() {
  return getRuleContexts<dmlParser::ConjunctionContext>();
}

dmlParser::ConjunctionContext* dmlParser::ConditionContext::conjunction(size_t i) {
  return getRuleContext<dmlParser::ConjunctionContext>(i);
}


size_t dmlParser::ConditionContext::getRuleIndex() const {
  return dmlParser::RuleCondition;
}

antlrcpp::Any dmlParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ConditionContext* dmlParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 14, dmlParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    conjunction();
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__6) {
      setState(116);
      match(dmlParser::T__6);
      setState(117);
      conjunction();
      setState(122);
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

//----------------- ConjunctionContext ------------------------------------------------------------------

dmlParser::ConjunctionContext::ConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::ComparisonContext *> dmlParser::ConjunctionContext::comparison() {
  return getRuleContexts<dmlParser::ComparisonContext>();
}

dmlParser::ComparisonContext* dmlParser::ConjunctionContext::comparison(size_t i) {
  return getRuleContext<dmlParser::ComparisonContext>(i);
}


size_t dmlParser::ConjunctionContext::getRuleIndex() const {
  return dmlParser::RuleConjunction;
}

antlrcpp::Any dmlParser::ConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitConjunction(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ConjunctionContext* dmlParser::conjunction() {
  ConjunctionContext *_localctx = _tracker.createInstance<ConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 16, dmlParser::RuleConjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    comparison();
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__7) {
      setState(124);
      match(dmlParser::T__7);
      setState(125);
      comparison();
      setState(130);
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

//----------------- ComparisonContext ------------------------------------------------------------------

dmlParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::ComparisonContext::getRuleIndex() const {
  return dmlParser::RuleComparison;
}

void dmlParser::ComparisonContext::copyFrom(ComparisonContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ComparisonParensContext ------------------------------------------------------------------

dmlParser::ConditionContext* dmlParser::ComparisonParensContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}

dmlParser::ComparisonParensContext::ComparisonParensContext(ComparisonContext *ctx) { copyFrom(ctx); }

antlrcpp::Any dmlParser::ComparisonParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitComparisonParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonOperationContext ------------------------------------------------------------------

std::vector<dmlParser::OperandContext *> dmlParser::ComparisonOperationContext::operand() {
  return getRuleContexts<dmlParser::OperandContext>();
}

dmlParser::OperandContext* dmlParser::ComparisonOperationContext::operand(size_t i) {
  return getRuleContext<dmlParser::OperandContext>(i);
}

dmlParser::OpContext* dmlParser::ComparisonOperationContext::op() {
  return getRuleContext<dmlParser::OpContext>(0);
}

dmlParser::ComparisonOperationContext::ComparisonOperationContext(ComparisonContext *ctx) { copyFrom(ctx); }

antlrcpp::Any dmlParser::ComparisonOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitComparisonOperation(this);
  else
    return visitor->visitChildren(this);
}
dmlParser::ComparisonContext* dmlParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 18, dmlParser::RuleComparison);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::WORD:
      case dmlParser::ALPHA:
      case dmlParser::DIGIT: {
        _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<dmlParser::ComparisonOperationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(131);
        operand();
        setState(132);
        op();
        setState(133);
        operand();
        break;
      }

      case dmlParser::T__3: {
        _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<dmlParser::ComparisonParensContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(135);
        match(dmlParser::T__3);
        setState(136);
        condition();
        setState(137);
        match(dmlParser::T__4);
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

//----------------- OpContext ------------------------------------------------------------------

dmlParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::OpContext::getRuleIndex() const {
  return dmlParser::RuleOp;
}

antlrcpp::Any dmlParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::OpContext* dmlParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 20, dmlParser::RuleOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::EQUAL)
      | (1ULL << dmlParser::NOTEQUAL)
      | (1ULL << dmlParser::GREATERTHAN)
      | (1ULL << dmlParser::LESSTHAN)
      | (1ULL << dmlParser::GREATERTHANOREQUAL)
      | (1ULL << dmlParser::LESSTHANOREQUAL))) != 0))) {
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

//----------------- OperandContext ------------------------------------------------------------------

dmlParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_nameContext* dmlParser::OperandContext::attribute_name() {
  return getRuleContext<dmlParser::Attribute_nameContext>(0);
}

dmlParser::LiteralContext* dmlParser::OperandContext::literal() {
  return getRuleContext<dmlParser::LiteralContext>(0);
}


size_t dmlParser::OperandContext::getRuleIndex() const {
  return dmlParser::RuleOperand;
}

antlrcpp::Any dmlParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::OperandContext* dmlParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 22, dmlParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::ALPHA: {
        enterOuterAlt(_localctx, 1);
        setState(143);
        attribute_name();
        break;
      }

      case dmlParser::WORD:
      case dmlParser::DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(144);
        literal();
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

//----------------- Attribute_nameContext ------------------------------------------------------------------

dmlParser::Attribute_nameContext::Attribute_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IdentifierContext* dmlParser::Attribute_nameContext::identifier() {
  return getRuleContext<dmlParser::IdentifierContext>(0);
}


size_t dmlParser::Attribute_nameContext::getRuleIndex() const {
  return dmlParser::RuleAttribute_name;
}

antlrcpp::Any dmlParser::Attribute_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitAttribute_name(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Attribute_nameContext* dmlParser::attribute_name() {
  Attribute_nameContext *_localctx = _tracker.createInstance<Attribute_nameContext>(_ctx, getState());
  enterRule(_localctx, 24, dmlParser::RuleAttribute_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

dmlParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dmlParser::LiteralContext::WORD() {
  return getToken(dmlParser::WORD, 0);
}

dmlParser::IntegerContext* dmlParser::LiteralContext::integer() {
  return getRuleContext<dmlParser::IntegerContext>(0);
}


size_t dmlParser::LiteralContext::getRuleIndex() const {
  return dmlParser::RuleLiteral;
}

antlrcpp::Any dmlParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::LiteralContext* dmlParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, dmlParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::WORD: {
        enterOuterAlt(_localctx, 1);
        setState(149);
        match(dmlParser::WORD);
        break;
      }

      case dmlParser::DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        integer();
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

//----------------- ProjectionContext ------------------------------------------------------------------

dmlParser::ProjectionContext::ProjectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_listContext* dmlParser::ProjectionContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::ProjectionContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::ProjectionContext::getRuleIndex() const {
  return dmlParser::RuleProjection;
}

antlrcpp::Any dmlParser::ProjectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitProjection(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ProjectionContext* dmlParser::projection() {
  ProjectionContext *_localctx = _tracker.createInstance<ProjectionContext>(_ctx, getState());
  enterRule(_localctx, 28, dmlParser::RuleProjection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(dmlParser::T__8);
    setState(154);
    match(dmlParser::T__3);
    setState(155);
    attribute_list();
    setState(156);
    match(dmlParser::T__4);
    setState(157);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

dmlParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Attribute_listContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Attribute_listContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}


size_t dmlParser::Attribute_listContext::getRuleIndex() const {
  return dmlParser::RuleAttribute_list;
}

antlrcpp::Any dmlParser::Attribute_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitAttribute_list(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Attribute_listContext* dmlParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 30, dmlParser::RuleAttribute_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    attribute_name();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__9) {
      setState(160);
      match(dmlParser::T__9);
      setState(161);
      attribute_name();
      setState(166);
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

//----------------- RenamingContext ------------------------------------------------------------------

dmlParser::RenamingContext::RenamingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Attribute_listContext* dmlParser::RenamingContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}

dmlParser::Atomic_exprContext* dmlParser::RenamingContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::RenamingContext::getRuleIndex() const {
  return dmlParser::RuleRenaming;
}

antlrcpp::Any dmlParser::RenamingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitRenaming(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::RenamingContext* dmlParser::renaming() {
  RenamingContext *_localctx = _tracker.createInstance<RenamingContext>(_ctx, getState());
  enterRule(_localctx, 32, dmlParser::RuleRenaming);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(dmlParser::T__10);
    setState(168);
    match(dmlParser::T__3);
    setState(169);
    attribute_list();
    setState(170);
    match(dmlParser::T__4);
    setState(171);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Union1Context ------------------------------------------------------------------

dmlParser::Union1Context::Union1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::Union1Context::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::Union1Context::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::Union1Context::getRuleIndex() const {
  return dmlParser::RuleUnion1;
}

antlrcpp::Any dmlParser::Union1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitUnion1(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Union1Context* dmlParser::union1() {
  Union1Context *_localctx = _tracker.createInstance<Union1Context>(_ctx, getState());
  enterRule(_localctx, 34, dmlParser::RuleUnion1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    atomic_expr();
    setState(174);
    match(dmlParser::T__11);
    setState(175);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DifferenceContext ------------------------------------------------------------------

dmlParser::DifferenceContext::DifferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::DifferenceContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::DifferenceContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::DifferenceContext::getRuleIndex() const {
  return dmlParser::RuleDifference;
}

antlrcpp::Any dmlParser::DifferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitDifference(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::DifferenceContext* dmlParser::difference() {
  DifferenceContext *_localctx = _tracker.createInstance<DifferenceContext>(_ctx, getState());
  enterRule(_localctx, 36, dmlParser::RuleDifference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    atomic_expr();
    setState(178);
    match(dmlParser::T__12);
    setState(179);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProductContext ------------------------------------------------------------------

dmlParser::ProductContext::ProductContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::ProductContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::ProductContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::ProductContext::getRuleIndex() const {
  return dmlParser::RuleProduct;
}

antlrcpp::Any dmlParser::ProductContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitProduct(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::ProductContext* dmlParser::product() {
  ProductContext *_localctx = _tracker.createInstance<ProductContext>(_ctx, getState());
  enterRule(_localctx, 38, dmlParser::RuleProduct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    atomic_expr();
    setState(182);
    match(dmlParser::T__13);
    setState(183);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Natural_joinContext ------------------------------------------------------------------

dmlParser::Natural_joinContext::Natural_joinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Atomic_exprContext *> dmlParser::Natural_joinContext::atomic_expr() {
  return getRuleContexts<dmlParser::Atomic_exprContext>();
}

dmlParser::Atomic_exprContext* dmlParser::Natural_joinContext::atomic_expr(size_t i) {
  return getRuleContext<dmlParser::Atomic_exprContext>(i);
}


size_t dmlParser::Natural_joinContext::getRuleIndex() const {
  return dmlParser::RuleNatural_join;
}

antlrcpp::Any dmlParser::Natural_joinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitNatural_join(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Natural_joinContext* dmlParser::natural_join() {
  Natural_joinContext *_localctx = _tracker.createInstance<Natural_joinContext>(_ctx, getState());
  enterRule(_localctx, 40, dmlParser::RuleNatural_join);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    atomic_expr();
    setState(186);
    match(dmlParser::T__14);
    setState(187);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

dmlParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Open_cmdContext* dmlParser::CommandContext::open_cmd() {
  return getRuleContext<dmlParser::Open_cmdContext>(0);
}

dmlParser::Close_cmdContext* dmlParser::CommandContext::close_cmd() {
  return getRuleContext<dmlParser::Close_cmdContext>(0);
}

dmlParser::Write_cmdContext* dmlParser::CommandContext::write_cmd() {
  return getRuleContext<dmlParser::Write_cmdContext>(0);
}

dmlParser::Exit_cmdContext* dmlParser::CommandContext::exit_cmd() {
  return getRuleContext<dmlParser::Exit_cmdContext>(0);
}

dmlParser::Show_cmdContext* dmlParser::CommandContext::show_cmd() {
  return getRuleContext<dmlParser::Show_cmdContext>(0);
}

dmlParser::Create_cmdContext* dmlParser::CommandContext::create_cmd() {
  return getRuleContext<dmlParser::Create_cmdContext>(0);
}

dmlParser::Update_cmdContext* dmlParser::CommandContext::update_cmd() {
  return getRuleContext<dmlParser::Update_cmdContext>(0);
}

dmlParser::Insert_cmdContext* dmlParser::CommandContext::insert_cmd() {
  return getRuleContext<dmlParser::Insert_cmdContext>(0);
}

dmlParser::Delete_cmdContext* dmlParser::CommandContext::delete_cmd() {
  return getRuleContext<dmlParser::Delete_cmdContext>(0);
}

dmlParser::List_cmdContext* dmlParser::CommandContext::list_cmd() {
  return getRuleContext<dmlParser::List_cmdContext>(0);
}


size_t dmlParser::CommandContext::getRuleIndex() const {
  return dmlParser::RuleCommand;
}

antlrcpp::Any dmlParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::CommandContext* dmlParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 42, dmlParser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::T__15: {
        setState(189);
        open_cmd();
        break;
      }

      case dmlParser::T__16: {
        setState(190);
        close_cmd();
        break;
      }

      case dmlParser::T__17: {
        setState(191);
        write_cmd();
        break;
      }

      case dmlParser::T__18: {
        setState(192);
        exit_cmd();
        break;
      }

      case dmlParser::T__19: {
        setState(193);
        show_cmd();
        break;
      }

      case dmlParser::T__20: {
        setState(194);
        create_cmd();
        break;
      }

      case dmlParser::T__22: {
        setState(195);
        update_cmd();
        break;
      }

      case dmlParser::T__26: {
        setState(196);
        insert_cmd();
        break;
      }

      case dmlParser::T__29: {
        setState(197);
        delete_cmd();
        break;
      }

      case dmlParser::T__30: {
        setState(198);
        list_cmd();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(201);
    match(dmlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Open_cmdContext ------------------------------------------------------------------

dmlParser::Open_cmdContext::Open_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Open_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Open_cmdContext::getRuleIndex() const {
  return dmlParser::RuleOpen_cmd;
}

antlrcpp::Any dmlParser::Open_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitOpen_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Open_cmdContext* dmlParser::open_cmd() {
  Open_cmdContext *_localctx = _tracker.createInstance<Open_cmdContext>(_ctx, getState());
  enterRule(_localctx, 44, dmlParser::RuleOpen_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(dmlParser::T__15);
    setState(204);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Close_cmdContext ------------------------------------------------------------------

dmlParser::Close_cmdContext::Close_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Close_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Close_cmdContext::getRuleIndex() const {
  return dmlParser::RuleClose_cmd;
}

antlrcpp::Any dmlParser::Close_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitClose_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Close_cmdContext* dmlParser::close_cmd() {
  Close_cmdContext *_localctx = _tracker.createInstance<Close_cmdContext>(_ctx, getState());
  enterRule(_localctx, 46, dmlParser::RuleClose_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(dmlParser::T__16);
    setState(207);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_cmdContext ------------------------------------------------------------------

dmlParser::Write_cmdContext::Write_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Write_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}


size_t dmlParser::Write_cmdContext::getRuleIndex() const {
  return dmlParser::RuleWrite_cmd;
}

antlrcpp::Any dmlParser::Write_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitWrite_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Write_cmdContext* dmlParser::write_cmd() {
  Write_cmdContext *_localctx = _tracker.createInstance<Write_cmdContext>(_ctx, getState());
  enterRule(_localctx, 48, dmlParser::RuleWrite_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(dmlParser::T__17);
    setState(210);
    relation_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exit_cmdContext ------------------------------------------------------------------

dmlParser::Exit_cmdContext::Exit_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::Exit_cmdContext::getRuleIndex() const {
  return dmlParser::RuleExit_cmd;
}

antlrcpp::Any dmlParser::Exit_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitExit_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Exit_cmdContext* dmlParser::exit_cmd() {
  Exit_cmdContext *_localctx = _tracker.createInstance<Exit_cmdContext>(_ctx, getState());
  enterRule(_localctx, 50, dmlParser::RuleExit_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(dmlParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Show_cmdContext ------------------------------------------------------------------

dmlParser::Show_cmdContext::Show_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Atomic_exprContext* dmlParser::Show_cmdContext::atomic_expr() {
  return getRuleContext<dmlParser::Atomic_exprContext>(0);
}


size_t dmlParser::Show_cmdContext::getRuleIndex() const {
  return dmlParser::RuleShow_cmd;
}

antlrcpp::Any dmlParser::Show_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitShow_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Show_cmdContext* dmlParser::show_cmd() {
  Show_cmdContext *_localctx = _tracker.createInstance<Show_cmdContext>(_ctx, getState());
  enterRule(_localctx, 52, dmlParser::RuleShow_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(dmlParser::T__19);
    setState(215);
    atomic_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_cmdContext ------------------------------------------------------------------

dmlParser::Create_cmdContext::Create_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Create_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::Typed_attribute_listContext* dmlParser::Create_cmdContext::typed_attribute_list() {
  return getRuleContext<dmlParser::Typed_attribute_listContext>(0);
}

dmlParser::Attribute_listContext* dmlParser::Create_cmdContext::attribute_list() {
  return getRuleContext<dmlParser::Attribute_listContext>(0);
}


size_t dmlParser::Create_cmdContext::getRuleIndex() const {
  return dmlParser::RuleCreate_cmd;
}

antlrcpp::Any dmlParser::Create_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitCreate_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Create_cmdContext* dmlParser::create_cmd() {
  Create_cmdContext *_localctx = _tracker.createInstance<Create_cmdContext>(_ctx, getState());
  enterRule(_localctx, 54, dmlParser::RuleCreate_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(dmlParser::T__20);
    setState(218);
    relation_name();
    setState(219);
    match(dmlParser::T__3);
    setState(220);
    typed_attribute_list();
    setState(221);
    match(dmlParser::T__4);
    setState(222);
    match(dmlParser::T__21);
    setState(223);
    match(dmlParser::T__3);
    setState(224);
    attribute_list();
    setState(225);
    match(dmlParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update_cmdContext ------------------------------------------------------------------

dmlParser::Update_cmdContext::Update_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Update_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Update_cmdContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Update_cmdContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}

std::vector<dmlParser::LiteralContext *> dmlParser::Update_cmdContext::literal() {
  return getRuleContexts<dmlParser::LiteralContext>();
}

dmlParser::LiteralContext* dmlParser::Update_cmdContext::literal(size_t i) {
  return getRuleContext<dmlParser::LiteralContext>(i);
}

dmlParser::ConditionContext* dmlParser::Update_cmdContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}


size_t dmlParser::Update_cmdContext::getRuleIndex() const {
  return dmlParser::RuleUpdate_cmd;
}

antlrcpp::Any dmlParser::Update_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitUpdate_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Update_cmdContext* dmlParser::update_cmd() {
  Update_cmdContext *_localctx = _tracker.createInstance<Update_cmdContext>(_ctx, getState());
  enterRule(_localctx, 56, dmlParser::RuleUpdate_cmd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(dmlParser::T__22);
    setState(228);
    relation_name();
    setState(229);
    match(dmlParser::T__23);
    setState(230);
    attribute_name();
    setState(231);
    match(dmlParser::T__24);
    setState(232);
    literal();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__9) {
      setState(233);
      match(dmlParser::T__9);
      setState(234);
      attribute_name();
      setState(235);
      match(dmlParser::T__24);
      setState(236);
      literal();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(dmlParser::T__25);
    setState(244);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Insert_cmdContext ------------------------------------------------------------------

dmlParser::Insert_cmdContext::Insert_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Insert_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

std::vector<dmlParser::LiteralContext *> dmlParser::Insert_cmdContext::literal() {
  return getRuleContexts<dmlParser::LiteralContext>();
}

dmlParser::LiteralContext* dmlParser::Insert_cmdContext::literal(size_t i) {
  return getRuleContext<dmlParser::LiteralContext>(i);
}

dmlParser::ExprContext* dmlParser::Insert_cmdContext::expr() {
  return getRuleContext<dmlParser::ExprContext>(0);
}


size_t dmlParser::Insert_cmdContext::getRuleIndex() const {
  return dmlParser::RuleInsert_cmd;
}

antlrcpp::Any dmlParser::Insert_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitInsert_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Insert_cmdContext* dmlParser::insert_cmd() {
  Insert_cmdContext *_localctx = _tracker.createInstance<Insert_cmdContext>(_ctx, getState());
  enterRule(_localctx, 58, dmlParser::RuleInsert_cmd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      match(dmlParser::T__26);
      setState(247);
      relation_name();
      setState(248);
      match(dmlParser::T__27);
      setState(249);
      match(dmlParser::T__3);
      setState(250);
      literal();
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dmlParser::T__9) {
        setState(251);
        match(dmlParser::T__9);
        setState(252);
        literal();
        setState(257);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(258);
      match(dmlParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(260);
      match(dmlParser::T__26);
      setState(261);
      relation_name();
      setState(262);
      match(dmlParser::T__28);
      setState(263);
      expr();
      break;
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

//----------------- Delete_cmdContext ------------------------------------------------------------------

dmlParser::Delete_cmdContext::Delete_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::Relation_nameContext* dmlParser::Delete_cmdContext::relation_name() {
  return getRuleContext<dmlParser::Relation_nameContext>(0);
}

dmlParser::ConditionContext* dmlParser::Delete_cmdContext::condition() {
  return getRuleContext<dmlParser::ConditionContext>(0);
}


size_t dmlParser::Delete_cmdContext::getRuleIndex() const {
  return dmlParser::RuleDelete_cmd;
}

antlrcpp::Any dmlParser::Delete_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitDelete_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Delete_cmdContext* dmlParser::delete_cmd() {
  Delete_cmdContext *_localctx = _tracker.createInstance<Delete_cmdContext>(_ctx, getState());
  enterRule(_localctx, 60, dmlParser::RuleDelete_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(dmlParser::T__29);
    setState(268);
    relation_name();
    setState(269);
    match(dmlParser::T__25);
    setState(270);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_cmdContext ------------------------------------------------------------------

dmlParser::List_cmdContext::List_cmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::List_typeContext* dmlParser::List_cmdContext::list_type() {
  return getRuleContext<dmlParser::List_typeContext>(0);
}


size_t dmlParser::List_cmdContext::getRuleIndex() const {
  return dmlParser::RuleList_cmd;
}

antlrcpp::Any dmlParser::List_cmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitList_cmd(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::List_cmdContext* dmlParser::list_cmd() {
  List_cmdContext *_localctx = _tracker.createInstance<List_cmdContext>(_ctx, getState());
  enterRule(_localctx, 62, dmlParser::RuleList_cmd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(dmlParser::T__30);
    setState(273);
    list_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_typeContext ------------------------------------------------------------------

dmlParser::List_typeContext::List_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t dmlParser::List_typeContext::getRuleIndex() const {
  return dmlParser::RuleList_type;
}

antlrcpp::Any dmlParser::List_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitList_type(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::List_typeContext* dmlParser::list_type() {
  List_typeContext *_localctx = _tracker.createInstance<List_typeContext>(_ctx, getState());
  enterRule(_localctx, 64, dmlParser::RuleList_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << dmlParser::T__31)
      | (1ULL << dmlParser::T__32)
      | (1ULL << dmlParser::T__33))) != 0))) {
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

//----------------- Typed_attribute_listContext ------------------------------------------------------------------

dmlParser::Typed_attribute_listContext::Typed_attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dmlParser::Attribute_nameContext *> dmlParser::Typed_attribute_listContext::attribute_name() {
  return getRuleContexts<dmlParser::Attribute_nameContext>();
}

dmlParser::Attribute_nameContext* dmlParser::Typed_attribute_listContext::attribute_name(size_t i) {
  return getRuleContext<dmlParser::Attribute_nameContext>(i);
}

std::vector<dmlParser::TypeContext *> dmlParser::Typed_attribute_listContext::type() {
  return getRuleContexts<dmlParser::TypeContext>();
}

dmlParser::TypeContext* dmlParser::Typed_attribute_listContext::type(size_t i) {
  return getRuleContext<dmlParser::TypeContext>(i);
}


size_t dmlParser::Typed_attribute_listContext::getRuleIndex() const {
  return dmlParser::RuleTyped_attribute_list;
}

antlrcpp::Any dmlParser::Typed_attribute_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitTyped_attribute_list(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::Typed_attribute_listContext* dmlParser::typed_attribute_list() {
  Typed_attribute_listContext *_localctx = _tracker.createInstance<Typed_attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 66, dmlParser::RuleTyped_attribute_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    attribute_name();
    setState(278);
    type();
    setState(285);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dmlParser::T__9) {
      setState(279);
      match(dmlParser::T__9);
      setState(280);
      attribute_name();
      setState(281);
      type();
      setState(287);
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

//----------------- TypeContext ------------------------------------------------------------------

dmlParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dmlParser::IntegerContext* dmlParser::TypeContext::integer() {
  return getRuleContext<dmlParser::IntegerContext>(0);
}


size_t dmlParser::TypeContext::getRuleIndex() const {
  return dmlParser::RuleType;
}

antlrcpp::Any dmlParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::TypeContext* dmlParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 68, dmlParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dmlParser::T__34: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        match(dmlParser::T__34);
        setState(289);
        match(dmlParser::T__3);
        setState(290);
        integer();
        setState(291);
        match(dmlParser::T__4);
        break;
      }

      case dmlParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(293);
        match(dmlParser::T__35);
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

//----------------- IntegerContext ------------------------------------------------------------------

dmlParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dmlParser::IntegerContext::DIGIT() {
  return getTokens(dmlParser::DIGIT);
}

tree::TerminalNode* dmlParser::IntegerContext::DIGIT(size_t i) {
  return getToken(dmlParser::DIGIT, i);
}


size_t dmlParser::IntegerContext::getRuleIndex() const {
  return dmlParser::RuleInteger;
}

antlrcpp::Any dmlParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<dmlVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

dmlParser::IntegerContext* dmlParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 70, dmlParser::RuleInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(296);
      match(dmlParser::DIGIT);
      setState(299); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dmlParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> dmlParser::_decisionToDFA;
atn::PredictionContextCache dmlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN dmlParser::_atn;
std::vector<uint16_t> dmlParser::_serializedATN;

std::vector<std::string> dmlParser::_ruleNames = {
  "program", "query", "relation_name", "identifier", "expr", "atomic_expr", 
  "selection", "condition", "conjunction", "comparison", "op", "operand", 
  "attribute_name", "literal", "projection", "attribute_list", "renaming", 
  "union1", "difference", "product", "natural_join", "command", "open_cmd", 
  "close_cmd", "write_cmd", "exit_cmd", "show_cmd", "create_cmd", "update_cmd", 
  "insert_cmd", "delete_cmd", "list_cmd", "list_type", "typed_attribute_list", 
  "type", "integer"
};

std::vector<std::string> dmlParser::_literalNames = {
  "", "' <- '", "';'", "'_'", "'('", "')'", "'select'", "' || '", "' && '", 
  "'project'", "','", "'rename'", "'+'", "'-'", "'*'", "'&'", "'OPEN'", 
  "'CLOSE'", "'WRITE'", "'EXIT'", "'SHOW'", "'CREATE TABLE'", "'PRIMARY KEY'", 
  "'UPDATE'", "'SET'", "'='", "'WHERE'", "'INSERT INTO'", "'VALUES FROM'", 
  "'VALUES FROM RELATION'", "'DELETE FROM'", "'LIST'", "'TABLES'", "'VIEWS'", 
  "'ALL'", "'VARCHAR'", "'INTEGER'", "", "", "", "'=='", "'!='", "'>'", 
  "'<'", "'<='", "'>='"
};

std::vector<std::string> dmlParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "WORD", "ALPHA", "DIGIT", "EQUAL", "NOTEQUAL", "GREATERTHAN", "LESSTHAN", 
  "GREATERTHANOREQUAL", "LESSTHANOREQUAL", "WS"
};

dfa::Vocabulary dmlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> dmlParser::_tokenNames;

dmlParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x30, 0x130, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x4d, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x4e, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x5a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x5d, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x67, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6e, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x79, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7c, 0xb, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x81, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0x84, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x8e, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x94, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x9a, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0xa5, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa8, 0xb, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0xca, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 
    0x1e, 0xf1, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0xf4, 0xb, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x100, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0x103, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x10c, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x11e, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x121, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x129, 0xa, 0x24, 0x3, 0x25, 0x6, 0x25, 0x12c, 
    0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 0x12d, 0x3, 0x25, 0x2, 0x2, 0x26, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x2, 0x5, 
    0x4, 0x2, 0x5, 0x5, 0x28, 0x29, 0x3, 0x2, 0x2a, 0x2f, 0x3, 0x2, 0x22, 
    0x24, 0x2, 0x12b, 0x2, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x55, 0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x66, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x93, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x30, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x34, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x38, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x112, 0x3, 0x2, 0x2, 0x2, 0x42, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x117, 0x3, 0x2, 0x2, 0x2, 0x46, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x5, 0x4, 
    0x3, 0x2, 0x4b, 0x4d, 0x5, 0x2c, 0x17, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0x6, 0x4, 0x2, 0x51, 0x52, 
    0x7, 0x3, 0x2, 0x2, 0x52, 0x53, 0x5, 0xa, 0x6, 0x2, 0x53, 0x54, 0x7, 
    0x4, 0x2, 0x2, 0x54, 0x5, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0x8, 
    0x5, 0x2, 0x56, 0x7, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5b, 0x7, 0x28, 0x2, 
    0x2, 0x58, 0x5a, 0x9, 0x2, 0x2, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x67, 0x5, 0xc, 0x7, 0x2, 0x5f, 0x67, 0x5, 
    0xe, 0x8, 0x2, 0x60, 0x67, 0x5, 0x1e, 0x10, 0x2, 0x61, 0x67, 0x5, 0x22, 
    0x12, 0x2, 0x62, 0x67, 0x5, 0x24, 0x13, 0x2, 0x63, 0x67, 0x5, 0x26, 
    0x14, 0x2, 0x64, 0x67, 0x5, 0x28, 0x15, 0x2, 0x65, 0x67, 0x5, 0x2a, 
    0x16, 0x2, 0x66, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x60, 0x3, 0x2, 0x2, 0x2, 0x66, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6e, 0x5, 0x6, 0x4, 0x2, 0x69, 0x6a, 0x7, 
    0x6, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0xa, 0x6, 0x2, 0x6b, 0x6c, 0x7, 0x7, 
    0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6e, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x8, 0x2, 0x2, 0x70, 0x71, 0x7, 0x6, 0x2, 0x2, 0x71, 
    0x72, 0x5, 0x10, 0x9, 0x2, 0x72, 0x73, 0x7, 0x7, 0x2, 0x2, 0x73, 0x74, 
    0x5, 0xc, 0x7, 0x2, 0x74, 0xf, 0x3, 0x2, 0x2, 0x2, 0x75, 0x7a, 0x5, 
    0x12, 0xa, 0x2, 0x76, 0x77, 0x7, 0x9, 0x2, 0x2, 0x77, 0x79, 0x5, 0x12, 
    0xa, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x82, 0x5, 0x14, 0xb, 0x2, 0x7e, 0x7f, 0x7, 0xa, 0x2, 0x2, 0x7f, 0x81, 
    0x5, 0x14, 0xb, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x13, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x5, 0x18, 0xd, 0x2, 0x86, 0x87, 0x5, 0x16, 0xc, 0x2, 
    0x87, 0x88, 0x5, 0x18, 0xd, 0x2, 0x88, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8a, 0x7, 0x6, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x10, 0x9, 0x2, 0x8b, 0x8c, 
    0x7, 0x7, 0x2, 0x2, 0x8c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x90, 0x9, 0x3, 0x2, 0x2, 0x90, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x94, 0x5, 0x1a, 0xe, 0x2, 0x92, 0x94, 0x5, 0x1c, 0xf, 0x2, 
    0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x5, 0x8, 0x5, 0x2, 0x96, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x7, 0x27, 0x2, 0x2, 0x98, 0x9a, 0x5, 
    0x48, 0x25, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0xb, 0x2, 
    0x2, 0x9c, 0x9d, 0x7, 0x6, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x20, 0x11, 0x2, 
    0x9e, 0x9f, 0x7, 0x7, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0xc, 0x7, 0x2, 0xa0, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0xa3, 
    0x7, 0xc, 0x2, 0x2, 0xa3, 0xa5, 0x5, 0x1a, 0xe, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0xd, 0x2, 0x2, 
    0xaa, 0xab, 0x7, 0x6, 0x2, 0x2, 0xab, 0xac, 0x5, 0x20, 0x11, 0x2, 0xac, 
    0xad, 0x7, 0x7, 0x2, 0x2, 0xad, 0xae, 0x5, 0xc, 0x7, 0x2, 0xae, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0xc, 0x7, 0x2, 0xb0, 0xb1, 0x7, 
    0xe, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0xc, 0x7, 0x2, 0xb2, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb4, 0xb5, 0x7, 0xf, 0x2, 
    0x2, 0xb5, 0xb6, 0x5, 0xc, 0x7, 0x2, 0xb6, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x5, 0xc, 0x7, 0x2, 0xb8, 0xb9, 0x7, 0x10, 0x2, 0x2, 0xb9, 
    0xba, 0x5, 0xc, 0x7, 0x2, 0xba, 0x29, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
    0x5, 0xc, 0x7, 0x2, 0xbc, 0xbd, 0x7, 0x11, 0x2, 0x2, 0xbd, 0xbe, 0x5, 
    0xc, 0x7, 0x2, 0xbe, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xca, 0x5, 0x2e, 
    0x18, 0x2, 0xc0, 0xca, 0x5, 0x30, 0x19, 0x2, 0xc1, 0xca, 0x5, 0x32, 
    0x1a, 0x2, 0xc2, 0xca, 0x5, 0x34, 0x1b, 0x2, 0xc3, 0xca, 0x5, 0x36, 
    0x1c, 0x2, 0xc4, 0xca, 0x5, 0x38, 0x1d, 0x2, 0xc5, 0xca, 0x5, 0x3a, 
    0x1e, 0x2, 0xc6, 0xca, 0x5, 0x3c, 0x1f, 0x2, 0xc7, 0xca, 0x5, 0x3e, 
    0x20, 0x2, 0xc8, 0xca, 0x5, 0x40, 0x21, 0x2, 0xc9, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x4, 
    0x2, 0x2, 0xcc, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x12, 0x2, 
    0x2, 0xce, 0xcf, 0x5, 0x6, 0x4, 0x2, 0xcf, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd1, 0x7, 0x13, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x6, 0x4, 0x2, 0xd2, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x14, 0x2, 0x2, 0xd4, 0xd5, 
    0x5, 0x6, 0x4, 0x2, 0xd5, 0x33, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 
    0x15, 0x2, 0x2, 0xd7, 0x35, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x16, 
    0x2, 0x2, 0xd9, 0xda, 0x5, 0xc, 0x7, 0x2, 0xda, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdc, 0x7, 0x17, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x6, 0x4, 0x2, 
    0xdd, 0xde, 0x7, 0x6, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x44, 0x23, 0x2, 0xdf, 
    0xe0, 0x7, 0x7, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x18, 0x2, 0x2, 0xe1, 0xe2, 
    0x7, 0x6, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x20, 0x11, 0x2, 0xe3, 0xe4, 0x7, 
    0x7, 0x2, 0x2, 0xe4, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x19, 
    0x2, 0x2, 0xe6, 0xe7, 0x5, 0x6, 0x4, 0x2, 0xe7, 0xe8, 0x7, 0x1a, 0x2, 
    0x2, 0xe8, 0xe9, 0x5, 0x1a, 0xe, 0x2, 0xe9, 0xea, 0x7, 0x1b, 0x2, 0x2, 
    0xea, 0xf2, 0x5, 0x1c, 0xf, 0x2, 0xeb, 0xec, 0x7, 0xc, 0x2, 0x2, 0xec, 
    0xed, 0x5, 0x1a, 0xe, 0x2, 0xed, 0xee, 0x7, 0x1b, 0x2, 0x2, 0xee, 0xef, 
    0x5, 0x1c, 0xf, 0x2, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x1c, 0x2, 0x2, 
    0xf6, 0xf7, 0x5, 0x10, 0x9, 0x2, 0xf7, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xf9, 0x7, 0x1d, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x6, 0x4, 0x2, 0xfa, 0xfb, 
    0x7, 0x1e, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x6, 0x2, 0x2, 0xfc, 0x101, 0x5, 
    0x1c, 0xf, 0x2, 0xfd, 0xfe, 0x7, 0xc, 0x2, 0x2, 0xfe, 0x100, 0x5, 0x1c, 
    0xf, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x104, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0x7, 0x7, 0x2, 0x2, 0x105, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x7, 0x1d, 0x2, 0x2, 0x107, 0x108, 0x5, 0x6, 0x4, 0x2, 
    0x108, 0x109, 0x7, 0x1f, 0x2, 0x2, 0x109, 0x10a, 0x5, 0xa, 0x6, 0x2, 
    0x10a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
    0x7, 0x20, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x6, 0x4, 0x2, 0x10f, 0x110, 
    0x7, 0x1c, 0x2, 0x2, 0x110, 0x111, 0x5, 0x10, 0x9, 0x2, 0x111, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x21, 0x2, 0x2, 0x113, 0x114, 
    0x5, 0x42, 0x22, 0x2, 0x114, 0x41, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
    0x9, 0x4, 0x2, 0x2, 0x116, 0x43, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x5, 
    0x1a, 0xe, 0x2, 0x118, 0x11f, 0x5, 0x46, 0x24, 0x2, 0x119, 0x11a, 0x7, 
    0xc, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x1a, 0xe, 0x2, 0x11b, 0x11c, 0x5, 
    0x46, 0x24, 0x2, 0x11c, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x25, 
    0x2, 0x2, 0x123, 0x124, 0x7, 0x6, 0x2, 0x2, 0x124, 0x125, 0x5, 0x48, 
    0x25, 0x2, 0x125, 0x126, 0x7, 0x7, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x129, 0x7, 0x26, 0x2, 0x2, 0x128, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12c, 0x7, 0x29, 0x2, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x4c, 0x4e, 0x5b, 0x66, 0x6d, 0x7a, 0x82, 0x8d, 0x93, 0x99, 0xa6, 
    0xc9, 0xf2, 0x101, 0x10b, 0x11f, 0x128, 0x12d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

dmlParser::Initializer dmlParser::_init;
