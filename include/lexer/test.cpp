#include "lexer.hpp"
int main() {
    std::string source = "while (true) a= .5; \nbreak; continue; A*B; for a in 4..5..-1 { continue; }";
    std::vector<Lexeme> lexemes = maximal_munch(source);
    for (Lexeme lex: lexemes) {
        std::cout << source.substr(lex.start, lex.length) <<  " "  << token_names[static_cast<int>(lex.tok)] << "\n";
    }
} 
