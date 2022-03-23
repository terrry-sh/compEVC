#pragma once
#include <string>

enum class TokenKind {
  BOOLEAN = 0,
  BREAK = 1,
  CONTINUE = 2,
  ELSE = 3,
  FLOAT = 4,
  FOR = 5,
  IF = 6,
  INT = 7,
  RETURN = 8,
  VOID = 9,
  WHILE = 10,

  // operators
  PLUS = 11,
  MINUS = 12,
  MULT = 13,
  DIV = 14,
  NOT = 15,
  NOTEQ = 16,
  EQ = 17,
  EQEQ = 18,
  LT = 19,
  LTEQ = 20,
  GT = 21,
  GTEQ = 22,
  ANDAND = 23,
  OROR = 24,

  // separators
  LCURLY = 25,
  RCURLY = 26,
  LPAREN = 27,
  RPAREN = 28,
  LBRACKET = 29,
  RBRACKET = 30,
  SEMICOLON = 31,
  COMMA = 32,

  // identifiers
  ID = 33,

  // literals
  INTLITERAL = 34,
  FLOATLITERAL = 35,
  BOOLEANLITERAL = 36,
  STRINGLITERAL = 37,

  // special tokens...
  ERROR = 38,
  EVC_EOF = 39,
};

struct SourcePosition {
  int col_pos;
  int line_num;
};

struct SourceRange {
  SourcePosition start;
  SourcePosition end;
};

struct Token {
  TokenKind kind;
  std::string spelling; // the lexeme
  SourceRange span;
  std::string spell(TokenKind tk);
  std::string to_string(Token t);
};
