import java.io.IOException;

import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;


public class Main {

    public static void main(String[] args) throws IOException {

        final int EOF=-1,
                BREAK=1, CONST=2, CONTINUE=3, ELSE=4, FLOAT=5, IF=6, INT=7, RETURN=8,
                VOID=9, WHILE=10, ASSIGN=11, ADD=12, SUB=13, MUL=14, DIV=15, MOD=16, EQ=17,
                NE=18, LT=19, LE=20, GT=21, GE=22, LNOT=23, LAND=24, LOR=25, LP=26, RP=27,
                LB=28, RB=29, LC=30, RC=31, COMMA=32, SEMI=33, Ident=34, IntConst=35,
                FloatConst=36, Whitespace=37, Newline=38, BlockComment=39, LineComment=40,
                LEX_ERR=41;

        String[] tokenNames =  {
            null, "BREAK", "CONST", "CONTINUE", "ELSE", "FLOAT", "IF", "INT", "RETURN",
                    "VOID", "WHILE", "ASSIGN", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ", "NE",
                    "LT", "LE", "GT", "GE", "LNOT", "LAND", "LOR", "LP", "RP", "LB", "RB",
                    "LC", "RC", "COMMA", "SEMI", "Ident", "IntConst", "FloatConst", "Whitespace",
                    "Newline", "BlockComment", "LineComment"
        };

        if (args.length < 1) {
            System.out.println("Source file not given!\n");
            return;
        }
        /*
        Deprecated:
        InputStream stream = new FileInputStream(args[0]);
        ANTLRInputStream input = new ANTLRInputStream(stream);
        */
        CharStream input = CharStreams.fromFileName(args[0]);
        SysYLexer lexer = new SysYLexer(input);
        //CommonTokenStream tokens = new CommonTokenStream(lexer);
        BufferedTokenStream tokens = new BufferedTokenStream(lexer);

        tokens.fill();

        for (Token token : tokens.getTokens()) {





        }

        /* Parser:
        SysYParser parser = new SysYParser(tokens);
        ParseTree tree = parser.root(); // begin parsing at init rule
        System.out.println(tree.toStringTree(parser)); //output parser tree
        */
    }
}