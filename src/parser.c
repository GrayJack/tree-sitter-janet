#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_str_literal_token1 = 4,
  anon_sym_BQUOTE_BQUOTE = 5,
  aux_sym_long_str_literal_token1 = 6,
  anon_sym_AT_DQUOTE = 7,
  anon_sym_AT_BQUOTE_BQUOTE = 8,
  aux_sym_number_literal_token1 = 9,
  aux_sym_number_literal_token2 = 10,
  aux_sym_number_literal_token3 = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_nil_literal = 14,
  sym_escape_sequence = 15,
  sym_keyword = 16,
  sym_symbol = 17,
  sym_source_file = 18,
  sym__anything = 19,
  sym__s_expr = 20,
  sym__literals = 21,
  sym_str_literal = 22,
  sym_long_str_literal = 23,
  sym_buffer_literal = 24,
  sym_long_buffer_literal = 25,
  sym_number_literal = 26,
  sym_bool_literal = 27,
  sym__identifier = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_str_literal_repeat1 = 30,
  aux_sym_long_str_literal_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [aux_sym_long_str_literal_token1] = "long_str_literal_token1",
  [anon_sym_AT_DQUOTE] = "@\"",
  [anon_sym_AT_BQUOTE_BQUOTE] = "@``",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [aux_sym_number_literal_token2] = "number_literal_token2",
  [aux_sym_number_literal_token3] = "number_literal_token3",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil_literal] = "nil_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [sym_source_file] = "source_file",
  [sym__anything] = "_anything",
  [sym__s_expr] = "_s_expr",
  [sym__literals] = "_literals",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_number_literal] = "number_literal",
  [sym_bool_literal] = "bool_literal",
  [sym__identifier] = "_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_literal_token1] = aux_sym_str_literal_token1,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [aux_sym_long_str_literal_token1] = aux_sym_long_str_literal_token1,
  [anon_sym_AT_DQUOTE] = anon_sym_AT_DQUOTE,
  [anon_sym_AT_BQUOTE_BQUOTE] = anon_sym_AT_BQUOTE_BQUOTE,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [aux_sym_number_literal_token2] = aux_sym_number_literal_token2,
  [aux_sym_number_literal_token3] = aux_sym_number_literal_token3,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil_literal] = sym_nil_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [sym_source_file] = sym_source_file,
  [sym__anything] = sym__anything,
  [sym__s_expr] = sym__s_expr,
  [sym__literals] = sym__literals,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym__identifier] = sym__identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_long_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym__s_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_nil_literal);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(62);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [aux_sym_number_literal_token3] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__anything] = STATE(2),
    [sym__s_expr] = STATE(2),
    [sym__literals] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_number_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym__identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_AT_DQUOTE] = ACTIONS(11),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(13),
    [aux_sym_number_literal_token1] = ACTIONS(15),
    [aux_sym_number_literal_token2] = ACTIONS(15),
    [aux_sym_number_literal_token3] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil_literal] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [sym_symbol] = ACTIONS(19),
  },
  [2] = {
    [sym__anything] = STATE(3),
    [sym__s_expr] = STATE(3),
    [sym__literals] = STATE(3),
    [sym_str_literal] = STATE(3),
    [sym_long_str_literal] = STATE(3),
    [sym_buffer_literal] = STATE(3),
    [sym_long_buffer_literal] = STATE(3),
    [sym_number_literal] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym__identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_AT_DQUOTE] = ACTIONS(11),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(13),
    [aux_sym_number_literal_token1] = ACTIONS(15),
    [aux_sym_number_literal_token2] = ACTIONS(15),
    [aux_sym_number_literal_token3] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil_literal] = ACTIONS(25),
    [sym_keyword] = ACTIONS(27),
    [sym_symbol] = ACTIONS(25),
  },
  [3] = {
    [sym__anything] = STATE(3),
    [sym__s_expr] = STATE(3),
    [sym__literals] = STATE(3),
    [sym_str_literal] = STATE(3),
    [sym_long_str_literal] = STATE(3),
    [sym_buffer_literal] = STATE(3),
    [sym_long_buffer_literal] = STATE(3),
    [sym_number_literal] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym__identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_AT_DQUOTE] = ACTIONS(40),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(43),
    [aux_sym_number_literal_token1] = ACTIONS(46),
    [aux_sym_number_literal_token2] = ACTIONS(46),
    [aux_sym_number_literal_token3] = ACTIONS(46),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [sym_nil_literal] = ACTIONS(52),
    [sym_keyword] = ACTIONS(55),
    [sym_symbol] = ACTIONS(52),
  },
  [4] = {
    [sym__anything] = STATE(26),
    [sym__s_expr] = STATE(26),
    [sym__literals] = STATE(26),
    [sym_str_literal] = STATE(26),
    [sym_long_str_literal] = STATE(26),
    [sym_buffer_literal] = STATE(26),
    [sym_long_buffer_literal] = STATE(26),
    [sym_number_literal] = STATE(26),
    [sym_bool_literal] = STATE(26),
    [sym__identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_AT_DQUOTE] = ACTIONS(11),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(13),
    [aux_sym_number_literal_token1] = ACTIONS(15),
    [aux_sym_number_literal_token2] = ACTIONS(15),
    [aux_sym_number_literal_token3] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil_literal] = ACTIONS(58),
    [sym_keyword] = ACTIONS(60),
    [sym_symbol] = ACTIONS(58),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(64), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [20] = 2,
    ACTIONS(68), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [40] = 2,
    ACTIONS(72), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [60] = 2,
    ACTIONS(76), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [80] = 2,
    ACTIONS(80), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [100] = 2,
    ACTIONS(84), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [120] = 2,
    ACTIONS(88), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [140] = 2,
    ACTIONS(92), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [160] = 2,
    ACTIONS(96), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [180] = 2,
    ACTIONS(100), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [200] = 2,
    ACTIONS(104), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [220] = 3,
    ACTIONS(106), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(24), 1,
      aux_sym_long_str_literal_repeat1,
    ACTIONS(108), 2,
      aux_sym_long_str_literal_token1,
      sym_escape_sequence,
  [231] = 3,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(112), 2,
      aux_sym_str_literal_token1,
      sym_escape_sequence,
  [242] = 3,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(116), 2,
      aux_sym_str_literal_token1,
      sym_escape_sequence,
  [253] = 3,
    ACTIONS(118), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(24), 1,
      aux_sym_long_str_literal_repeat1,
    ACTIONS(108), 2,
      aux_sym_long_str_literal_token1,
      sym_escape_sequence,
  [264] = 3,
    ACTIONS(120), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(16), 1,
      aux_sym_long_str_literal_repeat1,
    ACTIONS(122), 2,
      aux_sym_long_str_literal_token1,
      sym_escape_sequence,
  [275] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(126), 2,
      aux_sym_str_literal_token1,
      sym_escape_sequence,
  [286] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(112), 2,
      aux_sym_str_literal_token1,
      sym_escape_sequence,
  [297] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(132), 2,
      aux_sym_str_literal_token1,
      sym_escape_sequence,
  [308] = 3,
    ACTIONS(135), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(24), 1,
      aux_sym_long_str_literal_repeat1,
    ACTIONS(137), 2,
      aux_sym_long_str_literal_token1,
      sym_escape_sequence,
  [319] = 3,
    ACTIONS(140), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(19), 1,
      aux_sym_long_str_literal_repeat1,
    ACTIONS(142), 2,
      aux_sym_long_str_literal_token1,
      sym_escape_sequence,
  [330] = 1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 220,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 330,
  [SMALL_STATE(27)] = 334,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(18),
  [9] = {.count = 1, .reusable = true}, SHIFT(20),
  [11] = {.count = 1, .reusable = true}, SHIFT(21),
  [13] = {.count = 1, .reusable = true}, SHIFT(25),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false}, SHIFT(2),
  [21] = {.count = 1, .reusable = true}, SHIFT(2),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(3),
  [27] = {.count = 1, .reusable = true}, SHIFT(3),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [46] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.count = 1, .reusable = false}, SHIFT(26),
  [60] = {.count = 1, .reusable = true}, SHIFT(26),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [106] = {.count = 1, .reusable = false}, SHIFT(11),
  [108] = {.count = 1, .reusable = true}, SHIFT(24),
  [110] = {.count = 1, .reusable = false}, SHIFT(10),
  [112] = {.count = 1, .reusable = true}, SHIFT(23),
  [114] = {.count = 1, .reusable = false}, SHIFT(12),
  [116] = {.count = 1, .reusable = true}, SHIFT(22),
  [118] = {.count = 1, .reusable = false}, SHIFT(7),
  [120] = {.count = 1, .reusable = false}, SHIFT(5),
  [122] = {.count = 1, .reusable = true}, SHIFT(16),
  [124] = {.count = 1, .reusable = false}, SHIFT(15),
  [126] = {.count = 1, .reusable = true}, SHIFT(17),
  [128] = {.count = 1, .reusable = false}, SHIFT(13),
  [130] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(23),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(24),
  [140] = {.count = 1, .reusable = false}, SHIFT(14),
  [142] = {.count = 1, .reusable = true}, SHIFT(19),
  [144] = {.count = 1, .reusable = true}, SHIFT(6),
  [146] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_janet(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
