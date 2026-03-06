#pragma once
#include "token.hpp"
struct Lexeme {
    int start;
    int length;
    Token tok;
    Lexeme(int start, int length, Token tok): start(start), length(length), tok(tok) {}
};
