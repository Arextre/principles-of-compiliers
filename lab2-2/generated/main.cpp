#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "SysyLexer.h"
#include "SysyParser.h"
#include "main.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        return 1;
    }

    std::ifstream stream;
    stream.open(argv[1]);
    if (!stream.is_open()) {
        return 1;
    }

    ANTLRInputStream input(stream);
    //ANTLRInputStream input(std::cin);
    SysyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
   
    for (auto token : tokens.getTokens()) {
        int type = token->getType();

        if (type == Token::EOF) {
            continue;
        }

        if (type == SysyLexer::LEX_ERR) {
            std::cout << "Lexical error - line " << token->getLine()
                      << " : " << token->getText() << std::endl;
            continue;
        }

        std::cout << token->getText() << " : " << tokenTypeName[type] << std::endl;
    }

    /* 语法分析
    SysyParser parser(&tokens);
    tree::ParseTree* tree = parser.compUnit();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
    */

    return 0;
}    
