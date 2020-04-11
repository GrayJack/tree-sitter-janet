#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_line_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_AT_LPAREN = 6,
  anon_sym_AT_LBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_AT_LBRACE = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_str_literal_token1 = 12,
  anon_sym_BQUOTE_BQUOTE = 13,
  aux_sym_long_str_literal_token1 = 14,
  anon_sym_AT_DQUOTE = 15,
  anon_sym_AT_BQUOTE_BQUOTE = 16,
  aux_sym_number_literal_token1 = 17,
  aux_sym_number_literal_token2 = 18,
  aux_sym_number_literal_token3 = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_nil_literal = 22,
  sym_escape_sequence = 23,
  sym_keyword = 24,
  sym_symbol = 25,
  sym_source_file = 26,
  sym__expr = 27,
  sym_tuple = 28,
  sym_sqr_tuple = 29,
  sym_array = 30,
  sym_sqr_array = 31,
  sym_struct = 32,
  sym_table = 33,
  sym__struct_tables_commom = 34,
  sym__literals = 35,
  sym_str_literal = 36,
  sym_long_str_literal = 37,
  sym_buffer_literal = 38,
  sym_long_buffer_literal = 39,
  sym_number_literal = 40,
  sym_bool_literal = 41,
  sym__identifier = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_tuple_repeat1 = 44,
  aux_sym_struct_repeat1 = 45,
  aux_sym_str_literal_repeat1 = 46,
  aux_sym_long_str_literal_repeat1 = 47,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_AT_LBRACK] = "@[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
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
  [sym__expr] = "_expr",
  [sym_tuple] = "tuple",
  [sym_sqr_tuple] = "sqr_tuple",
  [sym_array] = "array",
  [sym_sqr_array] = "sqr_array",
  [sym_struct] = "struct",
  [sym_table] = "table",
  [sym__struct_tables_commom] = "_struct_tables_commom",
  [sym__literals] = "_literals",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_number_literal] = "number_literal",
  [sym_bool_literal] = "bool_literal",
  [sym__identifier] = "_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT_LPAREN] = anon_sym_AT_LPAREN,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
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
  [sym__expr] = sym__expr,
  [sym_tuple] = sym_tuple,
  [sym_sqr_tuple] = sym_sqr_tuple,
  [sym_array] = sym_array,
  [sym_sqr_array] = sym_sqr_array,
  [sym_struct] = sym_struct,
  [sym_table] = sym_table,
  [sym__struct_tables_commom] = sym__struct_tables_commom,
  [sym__literals] = sym__literals,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym__identifier] = sym__identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
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
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_array] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__struct_tables_commom] = {
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
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
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

enum {
  field_item = 1,
  field_key = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 0},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_item, 1, .inherited = true},
  [4] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [6] =
    {field_key, 0},
    {field_value, 1},
  [8] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [10] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(22)
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(22)
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(77);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(4);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 68:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 69:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 70:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 73:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '\\') ||
          ('^' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(97);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
      END_STATE();
    case 101:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(101);
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
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_AT_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(54),
    [sym__expr] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_sqr_tuple] = STATE(15),
    [sym_array] = STATE(15),
    [sym_sqr_array] = STATE(15),
    [sym_struct] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literals] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_long_str_literal] = STATE(15),
    [sym_buffer_literal] = STATE(15),
    [sym_long_buffer_literal] = STATE(15),
    [sym_number_literal] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(31),
    [sym_keyword] = ACTIONS(33),
    [sym_symbol] = ACTIONS(31),
  },
  [2] = {
    [sym__expr] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_sqr_tuple] = STATE(18),
    [sym_array] = STATE(18),
    [sym_sqr_array] = STATE(18),
    [sym_struct] = STATE(18),
    [sym_table] = STATE(18),
    [sym__struct_tables_commom] = STATE(42),
    [sym__literals] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_long_str_literal] = STATE(18),
    [sym_buffer_literal] = STATE(18),
    [sym_long_buffer_literal] = STATE(18),
    [sym_number_literal] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym__identifier] = STATE(18),
    [aux_sym_struct_repeat1] = STATE(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(37),
  },
  [3] = {
    [sym__expr] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_sqr_tuple] = STATE(18),
    [sym_array] = STATE(18),
    [sym_sqr_array] = STATE(18),
    [sym_struct] = STATE(18),
    [sym_table] = STATE(18),
    [sym__struct_tables_commom] = STATE(42),
    [sym__literals] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_long_str_literal] = STATE(18),
    [sym_buffer_literal] = STATE(18),
    [sym_long_buffer_literal] = STATE(18),
    [sym_number_literal] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym__identifier] = STATE(18),
    [aux_sym_struct_repeat1] = STATE(6),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(37),
  },
  [4] = {
    [sym__expr] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_sqr_tuple] = STATE(18),
    [sym_array] = STATE(18),
    [sym_sqr_array] = STATE(18),
    [sym_struct] = STATE(18),
    [sym_table] = STATE(18),
    [sym__struct_tables_commom] = STATE(42),
    [sym__literals] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_long_str_literal] = STATE(18),
    [sym_buffer_literal] = STATE(18),
    [sym_long_buffer_literal] = STATE(18),
    [sym_number_literal] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym__identifier] = STATE(18),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(46),
    [anon_sym_AT_LPAREN] = ACTIONS(49),
    [anon_sym_AT_LBRACK] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_AT_LBRACE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(66),
    [anon_sym_AT_DQUOTE] = ACTIONS(69),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(72),
    [aux_sym_number_literal_token1] = ACTIONS(75),
    [aux_sym_number_literal_token2] = ACTIONS(75),
    [aux_sym_number_literal_token3] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [sym_nil_literal] = ACTIONS(81),
    [sym_keyword] = ACTIONS(84),
    [sym_symbol] = ACTIONS(81),
  },
  [5] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_AT_LPAREN] = ACTIONS(95),
    [anon_sym_AT_LBRACK] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_AT_LBRACE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(110),
    [anon_sym_AT_DQUOTE] = ACTIONS(113),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(116),
    [aux_sym_number_literal_token1] = ACTIONS(119),
    [aux_sym_number_literal_token2] = ACTIONS(119),
    [aux_sym_number_literal_token3] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [sym_nil_literal] = ACTIONS(125),
    [sym_keyword] = ACTIONS(128),
    [sym_symbol] = ACTIONS(125),
  },
  [6] = {
    [sym__expr] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_sqr_tuple] = STATE(18),
    [sym_array] = STATE(18),
    [sym_sqr_array] = STATE(18),
    [sym_struct] = STATE(18),
    [sym_table] = STATE(18),
    [sym__struct_tables_commom] = STATE(42),
    [sym__literals] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_long_str_literal] = STATE(18),
    [sym_buffer_literal] = STATE(18),
    [sym_long_buffer_literal] = STATE(18),
    [sym_number_literal] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym__identifier] = STATE(18),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(37),
  },
  [7] = {
    [sym__expr] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_sqr_tuple] = STATE(18),
    [sym_array] = STATE(18),
    [sym_sqr_array] = STATE(18),
    [sym_struct] = STATE(18),
    [sym_table] = STATE(18),
    [sym__struct_tables_commom] = STATE(42),
    [sym__literals] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_long_str_literal] = STATE(18),
    [sym_buffer_literal] = STATE(18),
    [sym_long_buffer_literal] = STATE(18),
    [sym_number_literal] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym__identifier] = STATE(18),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(37),
  },
  [8] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [9] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [10] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(14),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [11] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(16),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [12] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [13] = {
    [sym__expr] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_sqr_tuple] = STATE(13),
    [sym_array] = STATE(13),
    [sym_sqr_array] = STATE(13),
    [sym_struct] = STATE(13),
    [sym_table] = STATE(13),
    [sym__literals] = STATE(13),
    [sym_str_literal] = STATE(13),
    [sym_long_str_literal] = STATE(13),
    [sym_buffer_literal] = STATE(13),
    [sym_long_buffer_literal] = STATE(13),
    [sym_number_literal] = STATE(13),
    [sym_bool_literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_AT_LPAREN] = ACTIONS(157),
    [anon_sym_AT_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_AT_LBRACE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(172),
    [anon_sym_AT_DQUOTE] = ACTIONS(175),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(178),
    [aux_sym_number_literal_token1] = ACTIONS(181),
    [aux_sym_number_literal_token2] = ACTIONS(181),
    [aux_sym_number_literal_token3] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(184),
    [anon_sym_false] = ACTIONS(184),
    [sym_nil_literal] = ACTIONS(187),
    [sym_keyword] = ACTIONS(190),
    [sym_symbol] = ACTIONS(187),
  },
  [14] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [15] = {
    [sym__expr] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_sqr_tuple] = STATE(13),
    [sym_array] = STATE(13),
    [sym_sqr_array] = STATE(13),
    [sym_struct] = STATE(13),
    [sym_table] = STATE(13),
    [sym__literals] = STATE(13),
    [sym_str_literal] = STATE(13),
    [sym_long_str_literal] = STATE(13),
    [sym_buffer_literal] = STATE(13),
    [sym_long_buffer_literal] = STATE(13),
    [sym_number_literal] = STATE(13),
    [sym_bool_literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(197),
    [sym_keyword] = ACTIONS(199),
    [sym_symbol] = ACTIONS(197),
  },
  [16] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [17] = {
    [sym__expr] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_sqr_tuple] = STATE(41),
    [sym_array] = STATE(41),
    [sym_sqr_array] = STATE(41),
    [sym_struct] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_long_str_literal] = STATE(41),
    [sym_buffer_literal] = STATE(41),
    [sym_long_buffer_literal] = STATE(41),
    [sym_number_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym__identifier] = STATE(41),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(137),
    [sym_keyword] = ACTIONS(139),
    [sym_symbol] = ACTIONS(137),
  },
  [18] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(205),
    [sym_keyword] = ACTIONS(207),
    [sym_symbol] = ACTIONS(205),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(209), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [30] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(213), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [60] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [90] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(221), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [120] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(233), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(237), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(241), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [270] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(249), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [330] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(253), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [360] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [390] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(261), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(265), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(269), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(273), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [510] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(277), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [540] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(281), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(285), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [600] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(289), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [630] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(293), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [660] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(297), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(301), 12,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(305), 12,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [742] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_str_literal_token1,
    ACTIONS(315), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_str_literal_repeat1,
  [758] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(319), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(321), 1,
      sym_escape_sequence,
    STATE(46), 1,
      aux_sym_long_str_literal_repeat1,
  [774] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(327), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_long_str_literal_repeat1,
  [790] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(333), 1,
      sym_escape_sequence,
    STATE(52), 1,
      aux_sym_long_str_literal_repeat1,
  [806] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_str_literal_token1,
    ACTIONS(339), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym_str_literal_repeat1,
  [822] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_str_literal_token1,
    ACTIONS(346), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_str_literal_repeat1,
  [838] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_str_literal_token1,
    ACTIONS(353), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_str_literal_repeat1,
  [854] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(357), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(360), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_long_str_literal_repeat1,
  [870] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(327), 1,
      sym_escape_sequence,
    ACTIONS(363), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(51), 1,
      aux_sym_long_str_literal_repeat1,
  [886] = 5,
    ACTIONS(309), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      aux_sym_str_literal_token1,
    ACTIONS(353), 1,
      sym_escape_sequence,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_str_literal_repeat1,
  [902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 30,
  [SMALL_STATE(21)] = 60,
  [SMALL_STATE(22)] = 90,
  [SMALL_STATE(23)] = 120,
  [SMALL_STATE(24)] = 150,
  [SMALL_STATE(25)] = 180,
  [SMALL_STATE(26)] = 210,
  [SMALL_STATE(27)] = 240,
  [SMALL_STATE(28)] = 270,
  [SMALL_STATE(29)] = 300,
  [SMALL_STATE(30)] = 330,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 390,
  [SMALL_STATE(33)] = 420,
  [SMALL_STATE(34)] = 450,
  [SMALL_STATE(35)] = 480,
  [SMALL_STATE(36)] = 510,
  [SMALL_STATE(37)] = 540,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 600,
  [SMALL_STATE(40)] = 630,
  [SMALL_STATE(41)] = 660,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 715,
  [SMALL_STATE(44)] = 742,
  [SMALL_STATE(45)] = 758,
  [SMALL_STATE(46)] = 774,
  [SMALL_STATE(47)] = 790,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 822,
  [SMALL_STATE(50)] = 838,
  [SMALL_STATE(51)] = 854,
  [SMALL_STATE(52)] = 870,
  [SMALL_STATE(53)] = 886,
  [SMALL_STATE(54)] = 902,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(9),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = true}, SHIFT(11),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(2),
  [17] = {.count = 1, .reusable = true}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(44),
  [21] = {.count = 1, .reusable = true}, SHIFT(47),
  [23] = {.count = 1, .reusable = true}, SHIFT(48),
  [25] = {.count = 1, .reusable = true}, SHIFT(45),
  [27] = {.count = 1, .reusable = false}, SHIFT(30),
  [29] = {.count = 1, .reusable = false}, SHIFT(28),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(29),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(10),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(11),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(12),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(2),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(3),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(44),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(48),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(45),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(30),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(28),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(9),
  [90] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(11),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(12),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(2),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(3),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(44),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(47),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(48),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(45),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(30),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(28),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(41),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 4), SHIFT_REPEAT(41),
  [131] = {.count = 1, .reusable = true}, SHIFT(32),
  [133] = {.count = 1, .reusable = true}, SHIFT(23),
  [135] = {.count = 1, .reusable = true}, SHIFT(27),
  [137] = {.count = 1, .reusable = false}, SHIFT(41),
  [139] = {.count = 1, .reusable = true}, SHIFT(41),
  [141] = {.count = 1, .reusable = true}, SHIFT(22),
  [143] = {.count = 1, .reusable = true}, SHIFT(24),
  [145] = {.count = 1, .reusable = true}, SHIFT(25),
  [147] = {.count = 1, .reusable = true}, SHIFT(26),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [193] = {.count = 1, .reusable = true}, SHIFT(39),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [197] = {.count = 1, .reusable = false}, SHIFT(13),
  [199] = {.count = 1, .reusable = true}, SHIFT(13),
  [201] = {.count = 1, .reusable = true}, SHIFT(40),
  [203] = {.count = 1, .reusable = true}, SHIFT(38),
  [205] = {.count = 1, .reusable = false}, SHIFT(43),
  [207] = {.count = 1, .reusable = true}, SHIFT(43),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 6),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 6),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 6),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 6),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [299] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 5),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 5),
  [309] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [311] = {.count = 1, .reusable = false}, SHIFT(31),
  [313] = {.count = 1, .reusable = false}, SHIFT(53),
  [315] = {.count = 1, .reusable = true}, SHIFT(53),
  [317] = {.count = 1, .reusable = false}, SHIFT(37),
  [319] = {.count = 1, .reusable = false}, SHIFT(46),
  [321] = {.count = 1, .reusable = true}, SHIFT(46),
  [323] = {.count = 1, .reusable = false}, SHIFT(21),
  [325] = {.count = 1, .reusable = false}, SHIFT(51),
  [327] = {.count = 1, .reusable = true}, SHIFT(51),
  [329] = {.count = 1, .reusable = false}, SHIFT(33),
  [331] = {.count = 1, .reusable = false}, SHIFT(52),
  [333] = {.count = 1, .reusable = true}, SHIFT(52),
  [335] = {.count = 1, .reusable = false}, SHIFT(35),
  [337] = {.count = 1, .reusable = false}, SHIFT(50),
  [339] = {.count = 1, .reusable = true}, SHIFT(50),
  [341] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(49),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(49),
  [349] = {.count = 1, .reusable = false}, SHIFT(20),
  [351] = {.count = 1, .reusable = false}, SHIFT(49),
  [353] = {.count = 1, .reusable = true}, SHIFT(49),
  [355] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(51),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(51),
  [363] = {.count = 1, .reusable = false}, SHIFT(34),
  [365] = {.count = 1, .reusable = false}, SHIFT(36),
  [367] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
