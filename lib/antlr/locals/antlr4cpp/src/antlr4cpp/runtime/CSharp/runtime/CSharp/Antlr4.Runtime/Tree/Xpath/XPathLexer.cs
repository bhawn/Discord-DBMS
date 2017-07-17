//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.7
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591
// Ambiguous reference in cref attribute
#pragma warning disable 419

using System;
using System.Text;
using Antlr4.Runtime;
using Antlr4.Runtime.Atn;
using Antlr4.Runtime.Misc;
using DFA = Antlr4.Runtime.Dfa.DFA;

[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.7")]
[System.CLSCompliant(false)]
public partial class XPathLexer : Lexer
{
    protected static DFA[] decisionToDFA;
    protected static PredictionContextCache sharedContextCache = new PredictionContextCache();
    public const int
        TokenRef = 1, RuleRef = 2, Anywhere = 3, Root = 4, Wildcard = 5, Bang = 6, ID = 7, String = 8;
    public static string[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

    public static string[] modeNames = {
		"DEFAULT_MODE"
	};

    public static readonly string[] ruleNames = {
		"Anywhere", "Root", "Wildcard", "Bang", "ID", "NameChar", "NameStartChar", 
		"String"
	};


    public XPathLexer(ICharStream input)
        : base(input)
    {
        Interpreter = new LexerATNSimulator(this, _ATN, decisionToDFA, sharedContextCache);
    }

    private static readonly string[] _LiteralNames = {
		null, null, null, "'//'", "'/'", "'*'", "'!'"
	};
    private static readonly string[] _SymbolicNames = {
		null, "TokenRef", "RuleRef", "Anywhere", "Root", "Wildcard", "Bang", "ID", 
		"String"
	};
    public static readonly IVocabulary DefaultVocabulary = new Vocabulary(_LiteralNames, _SymbolicNames);

    [NotNull]
    public override IVocabulary Vocabulary
    {
        get
        {
            return DefaultVocabulary;
        }
    }

    public override string GrammarFileName { get { return "XPathLexer.g4"; } }

    public override string[] RuleNames { get { return ruleNames; } }

    public override string[] ChannelNames { get { return channelNames; } }

    public override string[] ModeNames { get { return modeNames; } }

    public override string SerializedAtn { get { return _serializedATN; } }

    static XPathLexer()
    {
        decisionToDFA = new DFA[_ATN.NumberOfDecisions];
        for (int i = 0; i < _ATN.NumberOfDecisions; i++)
        {
            decisionToDFA[i] = new DFA(_ATN.GetDecisionState(i), i);
        }
    }
    public override void Action(RuleContext _localctx, int ruleIndex, int actionIndex)
    {
        switch (ruleIndex)
        {
            case 4: ID_action(_localctx, actionIndex); break;
        }
    }
    private void ID_action(RuleContext _localctx, int actionIndex)
    {
        switch (actionIndex)
        {
            case 0:
                String text = Text;
                if (Char.IsUpper(text[0]))
                    Type = TokenRef;
                else
                    Type = RuleRef;
                break;
        }
    }

    private static string _serializedATN = _serializeATN();
    private static string _serializeATN()
    {
        StringBuilder sb = new StringBuilder();
        sb.Append("\x3\x430\xD6D1\x8206\xAD2D\x4417\xAEF1\x8D80\xAADD\x2\n\x34");
        sb.Append("\b\x1\x4\x2\t\x2\x4\x3\t\x3\x4\x4\t\x4\x4\x5\t\x5\x4\x6\t\x6");
        sb.Append("\x4\a\t\a\x4\b\t\b\x4\t\t\t\x3\x2\x3\x2\x3\x2\x3\x3\x3\x3\x3");
        sb.Append("\x4\x3\x4\x3\x5\x3\x5\x3\x6\x3\x6\a\x6\x1F\n\x6\f\x6\xE\x6\"");
        sb.Append("\v\x6\x3\x6\x3\x6\x3\a\x3\a\x5\a(\n\a\x3\b\x3\b\x3\t\x3\t\a");
        sb.Append("\t.\n\t\f\t\xE\t\x31\v\t\x3\t\x3\t\x3/\x2\n\x3\x5\x5\x6\a\a");
        sb.Append("\t\b\v\t\r\x2\xF\x2\x11\n\x3\x2\x4\a\x2\x32;\x61\x61\xB9\xB9");
        sb.Append("\x302\x371\x2041\x2042\xF\x2\x43\\\x63|\xC2\xD8\xDA\xF8\xFA");
        sb.Append("\x301\x372\x37F\x381\x2001\x200E\x200F\x2072\x2191\x2C02\x2FF1");
        sb.Append("\x3003\xD801\xF902\xFDD1\xFDF2\xFFFF\x34\x2\x3\x3\x2\x2\x2\x2");
        sb.Append("\x5\x3\x2\x2\x2\x2\a\x3\x2\x2\x2\x2\t\x3\x2\x2\x2\x2\v\x3\x2");
        sb.Append("\x2\x2\x2\x11\x3\x2\x2\x2\x3\x13\x3\x2\x2\x2\x5\x16\x3\x2\x2");
        sb.Append("\x2\a\x18\x3\x2\x2\x2\t\x1A\x3\x2\x2\x2\v\x1C\x3\x2\x2\x2\r");
        sb.Append("\'\x3\x2\x2\x2\xF)\x3\x2\x2\x2\x11+\x3\x2\x2\x2\x13\x14\a\x31");
        sb.Append("\x2\x2\x14\x15\a\x31\x2\x2\x15\x4\x3\x2\x2\x2\x16\x17\a\x31");
        sb.Append("\x2\x2\x17\x6\x3\x2\x2\x2\x18\x19\a,\x2\x2\x19\b\x3\x2\x2\x2");
        sb.Append("\x1A\x1B\a#\x2\x2\x1B\n\x3\x2\x2\x2\x1C \x5\xF\b\x2\x1D\x1F");
        sb.Append("\x5\r\a\x2\x1E\x1D\x3\x2\x2\x2\x1F\"\x3\x2\x2\x2 \x1E\x3\x2");
        sb.Append("\x2\x2 !\x3\x2\x2\x2!#\x3\x2\x2\x2\" \x3\x2\x2\x2#$\b\x6\x2");
        sb.Append("\x2$\f\x3\x2\x2\x2%(\x5\xF\b\x2&(\t\x2\x2\x2\'%\x3\x2\x2\x2");
        sb.Append("\'&\x3\x2\x2\x2(\xE\x3\x2\x2\x2)*\t\x3\x2\x2*\x10\x3\x2\x2\x2");
        sb.Append("+/\a)\x2\x2,.\v\x2\x2\x2-,\x3\x2\x2\x2.\x31\x3\x2\x2\x2/\x30");
        sb.Append("\x3\x2\x2\x2/-\x3\x2\x2\x2\x30\x32\x3\x2\x2\x2\x31/\x3\x2\x2");
        sb.Append("\x2\x32\x33\a)\x2\x2\x33\x12\x3\x2\x2\x2\x6\x2 \'/\x3\x3\x6");
        sb.Append("\x2");
        return sb.ToString();
    }

    public static readonly ATN _ATN =
        new ATNDeserializer().Deserialize(_serializedATN.ToCharArray());


}
