#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  anon_sym_def = 11,
  anon_sym_var = 12,
  anon_sym_quote = 13,
  anon_sym_splice = 14,
  anon_sym_quasiquote = 15,
  anon_sym_unquote = 16,
  anon_sym_break = 17,
  anon_sym_set = 18,
  anon_sym_if = 19,
  anon_sym_do = 20,
  anon_sym_while = 21,
  anon_sym_fn = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_str_literal_token1 = 24,
  anon_sym_BQUOTE_BQUOTE = 25,
  aux_sym_long_str_literal_token1 = 26,
  anon_sym_AT_DQUOTE = 27,
  anon_sym_AT_BQUOTE_BQUOTE = 28,
  aux_sym_number_literal_token1 = 29,
  aux_sym_number_literal_token2 = 30,
  aux_sym_number_literal_token3 = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  sym_nil_literal = 34,
  sym_escape_sequence = 35,
  sym_keyword = 36,
  sym_symbol = 37,
  sym_source_file = 38,
  sym__expr = 39,
  sym_tuple = 40,
  sym_sqr_tuple = 41,
  sym_array = 42,
  sym_sqr_array = 43,
  sym_struct = 44,
  sym_table = 45,
  sym__struct_tables_commom = 46,
  sym__special_forms = 47,
  sym_def = 48,
  sym_var = 49,
  sym_quote = 50,
  sym_splice = 51,
  sym_quasiquote = 52,
  sym_unquote = 53,
  sym_break = 54,
  sym_set = 55,
  sym_if = 56,
  sym_do = 57,
  sym_while = 58,
  sym_fn = 59,
  sym_fn_parameters = 60,
  sym__literals = 61,
  sym_str_literal = 62,
  sym_long_str_literal = 63,
  sym_buffer_literal = 64,
  sym_long_buffer_literal = 65,
  sym_number_literal = 66,
  sym_bool_literal = 67,
  sym__identifier = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_tuple_repeat1 = 70,
  aux_sym_struct_repeat1 = 71,
  aux_sym_do_repeat1 = 72,
  aux_sym_fn_parameters_repeat1 = 73,
  aux_sym_str_literal_repeat1 = 74,
  aux_sym_long_str_literal_repeat1 = 75,
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
  [anon_sym_def] = "def",
  [anon_sym_var] = "var",
  [anon_sym_quote] = "quote",
  [anon_sym_splice] = "splice",
  [anon_sym_quasiquote] = "quasiquote",
  [anon_sym_unquote] = "unquote",
  [anon_sym_break] = "break",
  [anon_sym_set] = "set",
  [anon_sym_if] = "if",
  [anon_sym_do] = "do",
  [anon_sym_while] = "while",
  [anon_sym_fn] = "fn",
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
  [sym__special_forms] = "_special_forms",
  [sym_def] = "def",
  [sym_var] = "var",
  [sym_quote] = "quote",
  [sym_splice] = "splice",
  [sym_quasiquote] = "quasiquote",
  [sym_unquote] = "unquote",
  [sym_break] = "break",
  [sym_set] = "set",
  [sym_if] = "if",
  [sym_do] = "do",
  [sym_while] = "while",
  [sym_fn] = "fn",
  [sym_fn_parameters] = "fn_parameters",
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
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_fn_parameters_repeat1] = "fn_parameters_repeat1",
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
  [anon_sym_def] = anon_sym_def,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_splice] = anon_sym_splice,
  [anon_sym_quasiquote] = anon_sym_quasiquote,
  [anon_sym_unquote] = anon_sym_unquote,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_fn] = anon_sym_fn,
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
  [sym__special_forms] = sym__special_forms,
  [sym_def] = sym_def,
  [sym_var] = sym_var,
  [sym_quote] = sym_quote,
  [sym_splice] = sym_splice,
  [sym_quasiquote] = sym_quasiquote,
  [sym_unquote] = sym_unquote,
  [sym_break] = sym_break,
  [sym_set] = sym_set,
  [sym_if] = sym_if,
  [sym_do] = sym_do,
  [sym_while] = sym_while,
  [sym_fn] = sym_fn,
  [sym_fn_parameters] = sym_fn_parameters,
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
  [aux_sym_do_repeat1] = aux_sym_do_repeat1,
  [aux_sym_fn_parameters_repeat1] = aux_sym_fn_parameters_repeat1,
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
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quasiquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [sym__special_forms] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_parameters] = {
    .visible = true,
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
  [aux_sym_do_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_parameters_repeat1] = {
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
  field_condition = 1,
  field_else = 2,
  field_form = 3,
  field_item = 4,
  field_key = 5,
  field_l_value = 6,
  field_name = 7,
  field_parameter = 8,
  field_parameters = 9,
  field_r_value = 10,
  field_then = 11,
  field_value = 12,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_else] = "else",
  [field_form] = "form",
  [field_item] = "item",
  [field_key] = "key",
  [field_l_value] = "l_value",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_r_value] = "r_value",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[24] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 0},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_form, 0},
  [4] =
    {field_item, 1, .inherited = true},
  [5] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [7] =
    {field_key, 0},
    {field_value, 1},
  [9] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [11] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [15] =
    {field_form, 2, .inherited = true},
  [16] =
    {field_form, 0, .inherited = true},
    {field_form, 1, .inherited = true},
  [18] =
    {field_condition, 2},
  [19] =
    {field_parameter, 0},
  [20] =
    {field_parameters, 2},
  [21] =
    {field_name, 2},
    {field_value, 3},
  [23] =
    {field_l_value, 2},
    {field_r_value, 3},
  [25] =
    {field_condition, 2},
    {field_then, 3},
  [27] =
    {field_condition, 2},
    {field_form, 3, .inherited = true},
  [29] =
    {field_parameter, 1, .inherited = true},
  [30] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [32] =
    {field_name, 2},
    {field_parameters, 3},
  [34] =
    {field_form, 3, .inherited = true},
    {field_parameters, 2},
  [36] =
    {field_condition, 2},
    {field_else, 4},
    {field_then, 3},
  [39] =
    {field_form, 4, .inherited = true},
    {field_name, 2},
    {field_parameters, 3},
};

static TSSymbol ts_alias_sequences[24][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(24)
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'q') ADVANCE(136);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'q') ADVANCE(136);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(36);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '\\') ||
          ('^' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(24)
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'q') ADVANCE(136);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(25)
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_def);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_var);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_quote);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_splice);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_quasiquote);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_unquote);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_break);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_set);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_if);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_do);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_while);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_fn);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(92);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '_') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '_') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(143);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 83:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 84:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 85:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 87:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 88:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '{') ADVANCE(38);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(50);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(117);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(116);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(132);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(127);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(104);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(119);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(41);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(49);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(42);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(44);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(43);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(48);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(95);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(47);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(39);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(114);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(98);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(118);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(120);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(125);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'k') ADVANCE(45);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(130);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 118:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(112);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(103);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(133);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(134);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(137);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(139);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(108);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(40);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(138);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(115);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(101);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(46);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(102);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(105);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(106);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(149);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(96);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(122);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(100);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(123);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 147:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    case 153:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 25},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
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
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_splice] = ACTIONS(1),
    [anon_sym_quasiquote] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
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
    [sym_source_file] = STATE(112),
    [sym__expr] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_sqr_tuple] = STATE(14),
    [sym_array] = STATE(14),
    [sym_sqr_array] = STATE(14),
    [sym_struct] = STATE(14),
    [sym_table] = STATE(14),
    [sym__special_forms] = STATE(14),
    [sym_def] = STATE(14),
    [sym_var] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_splice] = STATE(14),
    [sym_quasiquote] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_break] = STATE(14),
    [sym_set] = STATE(14),
    [sym_if] = STATE(14),
    [sym_do] = STATE(14),
    [sym_while] = STATE(14),
    [sym_fn] = STATE(14),
    [sym__literals] = STATE(14),
    [sym_str_literal] = STATE(14),
    [sym_long_str_literal] = STATE(14),
    [sym_buffer_literal] = STATE(14),
    [sym_long_buffer_literal] = STATE(14),
    [sym_number_literal] = STATE(14),
    [sym_bool_literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
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
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(22),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(41),
    [anon_sym_splice] = ACTIONS(43),
    [anon_sym_quasiquote] = ACTIONS(45),
    [anon_sym_unquote] = ACTIONS(47),
    [anon_sym_break] = ACTIONS(49),
    [anon_sym_set] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_fn] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [3] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(87),
    [sym__special_forms] = STATE(38),
    [sym_def] = STATE(38),
    [sym_var] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_splice] = STATE(38),
    [sym_quasiquote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_break] = STATE(38),
    [sym_set] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_while] = STATE(38),
    [sym_fn] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(65),
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
    [sym_nil_literal] = ACTIONS(67),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(67),
  },
  [4] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_AT_LPAREN] = ACTIONS(79),
    [anon_sym_AT_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_AT_LBRACE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(94),
    [anon_sym_AT_DQUOTE] = ACTIONS(97),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(100),
    [aux_sym_number_literal_token1] = ACTIONS(103),
    [aux_sym_number_literal_token2] = ACTIONS(103),
    [aux_sym_number_literal_token3] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(112),
    [sym_symbol] = ACTIONS(109),
  },
  [5] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(87),
    [sym__special_forms] = STATE(38),
    [sym_def] = STATE(38),
    [sym_var] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_splice] = STATE(38),
    [sym_quasiquote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_break] = STATE(38),
    [sym_set] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_while] = STATE(38),
    [sym_fn] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(115),
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
    [sym_nil_literal] = ACTIONS(67),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(67),
  },
  [6] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(87),
    [sym__special_forms] = STATE(38),
    [sym_def] = STATE(38),
    [sym_var] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_splice] = STATE(38),
    [sym_quasiquote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_break] = STATE(38),
    [sym_set] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_while] = STATE(38),
    [sym_fn] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(117),
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
    [sym_nil_literal] = ACTIONS(67),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(67),
  },
  [7] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(87),
    [sym__special_forms] = STATE(38),
    [sym_def] = STATE(38),
    [sym_var] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_splice] = STATE(38),
    [sym_quasiquote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_break] = STATE(38),
    [sym_set] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_while] = STATE(38),
    [sym_fn] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(119),
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
    [sym_nil_literal] = ACTIONS(67),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(67),
  },
  [8] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(87),
    [sym__special_forms] = STATE(38),
    [sym_def] = STATE(38),
    [sym_var] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_splice] = STATE(38),
    [sym_quasiquote] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_break] = STATE(38),
    [sym_set] = STATE(38),
    [sym_if] = STATE(38),
    [sym_do] = STATE(38),
    [sym_while] = STATE(38),
    [sym_fn] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_AT_LPAREN] = ACTIONS(127),
    [anon_sym_AT_LBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_AT_LBRACE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(144),
    [anon_sym_AT_DQUOTE] = ACTIONS(147),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(150),
    [aux_sym_number_literal_token1] = ACTIONS(153),
    [aux_sym_number_literal_token2] = ACTIONS(153),
    [aux_sym_number_literal_token3] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [sym_nil_literal] = ACTIONS(159),
    [sym_keyword] = ACTIONS(162),
    [sym_symbol] = ACTIONS(159),
  },
  [9] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(165),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [10] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(171),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [11] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(173),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [12] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(16),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(175),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [13] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(177),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [14] = {
    [sym__expr] = STATE(17),
    [sym_tuple] = STATE(17),
    [sym_sqr_tuple] = STATE(17),
    [sym_array] = STATE(17),
    [sym_sqr_array] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_table] = STATE(17),
    [sym__special_forms] = STATE(17),
    [sym_def] = STATE(17),
    [sym_var] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_splice] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_break] = STATE(17),
    [sym_set] = STATE(17),
    [sym_if] = STATE(17),
    [sym_do] = STATE(17),
    [sym_while] = STATE(17),
    [sym_fn] = STATE(17),
    [sym__literals] = STATE(17),
    [sym_str_literal] = STATE(17),
    [sym_long_str_literal] = STATE(17),
    [sym_buffer_literal] = STATE(17),
    [sym_long_buffer_literal] = STATE(17),
    [sym_number_literal] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [sym__identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(179),
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
    [sym_nil_literal] = ACTIONS(181),
    [sym_keyword] = ACTIONS(183),
    [sym_symbol] = ACTIONS(181),
  },
  [15] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_AT_LPAREN] = ACTIONS(193),
    [anon_sym_AT_LBRACK] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_AT_LBRACE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(208),
    [anon_sym_AT_DQUOTE] = ACTIONS(211),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(214),
    [aux_sym_number_literal_token1] = ACTIONS(217),
    [aux_sym_number_literal_token2] = ACTIONS(217),
    [aux_sym_number_literal_token3] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(220),
    [sym_nil_literal] = ACTIONS(223),
    [sym_keyword] = ACTIONS(226),
    [sym_symbol] = ACTIONS(223),
  },
  [16] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(229),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [17] = {
    [sym__expr] = STATE(17),
    [sym_tuple] = STATE(17),
    [sym_sqr_tuple] = STATE(17),
    [sym_array] = STATE(17),
    [sym_sqr_array] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_table] = STATE(17),
    [sym__special_forms] = STATE(17),
    [sym_def] = STATE(17),
    [sym_var] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_splice] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_break] = STATE(17),
    [sym_set] = STATE(17),
    [sym_if] = STATE(17),
    [sym_do] = STATE(17),
    [sym_while] = STATE(17),
    [sym_fn] = STATE(17),
    [sym__literals] = STATE(17),
    [sym_str_literal] = STATE(17),
    [sym_long_str_literal] = STATE(17),
    [sym_buffer_literal] = STATE(17),
    [sym_long_buffer_literal] = STATE(17),
    [sym_number_literal] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [sym__identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACK] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_AT_LBRACE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(254),
    [anon_sym_AT_DQUOTE] = ACTIONS(257),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(260),
    [aux_sym_number_literal_token1] = ACTIONS(263),
    [aux_sym_number_literal_token2] = ACTIONS(263),
    [aux_sym_number_literal_token3] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [sym_nil_literal] = ACTIONS(269),
    [sym_keyword] = ACTIONS(272),
    [sym_symbol] = ACTIONS(269),
  },
  [18] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(275),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [19] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(277),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [20] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(279),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [21] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(281),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [22] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(283),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [23] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(285),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [24] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_sqr_tuple] = STATE(83),
    [sym_array] = STATE(83),
    [sym_sqr_array] = STATE(83),
    [sym_struct] = STATE(83),
    [sym_table] = STATE(83),
    [sym__special_forms] = STATE(83),
    [sym_def] = STATE(83),
    [sym_var] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_splice] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_break] = STATE(83),
    [sym_set] = STATE(83),
    [sym_if] = STATE(83),
    [sym_do] = STATE(83),
    [sym_while] = STATE(83),
    [sym_fn] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_long_str_literal] = STATE(83),
    [sym_buffer_literal] = STATE(83),
    [sym_long_buffer_literal] = STATE(83),
    [sym_number_literal] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym__identifier] = STATE(83),
    [aux_sym_do_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(287),
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
    [sym_nil_literal] = ACTIONS(167),
    [sym_keyword] = ACTIONS(169),
    [sym_symbol] = ACTIONS(167),
  },
  [25] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(289),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [26] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_sqr_tuple] = STATE(82),
    [sym_array] = STATE(82),
    [sym_sqr_array] = STATE(82),
    [sym_struct] = STATE(82),
    [sym_table] = STATE(82),
    [sym__special_forms] = STATE(82),
    [sym_def] = STATE(82),
    [sym_var] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_splice] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_break] = STATE(82),
    [sym_set] = STATE(82),
    [sym_if] = STATE(82),
    [sym_do] = STATE(82),
    [sym_while] = STATE(82),
    [sym_fn] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_long_str_literal] = STATE(82),
    [sym_buffer_literal] = STATE(82),
    [sym_long_buffer_literal] = STATE(82),
    [sym_number_literal] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym__identifier] = STATE(82),
    [aux_sym_tuple_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(291),
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
    [sym_nil_literal] = ACTIONS(61),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(61),
  },
  [27] = {
    [sym__expr] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_sqr_tuple] = STATE(107),
    [sym_array] = STATE(107),
    [sym_sqr_array] = STATE(107),
    [sym_struct] = STATE(107),
    [sym_table] = STATE(107),
    [sym__special_forms] = STATE(107),
    [sym_def] = STATE(107),
    [sym_var] = STATE(107),
    [sym_quote] = STATE(107),
    [sym_splice] = STATE(107),
    [sym_quasiquote] = STATE(107),
    [sym_unquote] = STATE(107),
    [sym_break] = STATE(107),
    [sym_set] = STATE(107),
    [sym_if] = STATE(107),
    [sym_do] = STATE(107),
    [sym_while] = STATE(107),
    [sym_fn] = STATE(107),
    [sym__literals] = STATE(107),
    [sym_str_literal] = STATE(107),
    [sym_long_str_literal] = STATE(107),
    [sym_buffer_literal] = STATE(107),
    [sym_long_buffer_literal] = STATE(107),
    [sym_number_literal] = STATE(107),
    [sym_bool_literal] = STATE(107),
    [sym__identifier] = STATE(107),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(293),
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
    [sym_nil_literal] = ACTIONS(295),
    [sym_keyword] = ACTIONS(297),
    [sym_symbol] = ACTIONS(295),
  },
  [28] = {
    [sym__expr] = STATE(114),
    [sym_tuple] = STATE(114),
    [sym_sqr_tuple] = STATE(114),
    [sym_array] = STATE(114),
    [sym_sqr_array] = STATE(114),
    [sym_struct] = STATE(114),
    [sym_table] = STATE(114),
    [sym__special_forms] = STATE(114),
    [sym_def] = STATE(114),
    [sym_var] = STATE(114),
    [sym_quote] = STATE(114),
    [sym_splice] = STATE(114),
    [sym_quasiquote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_break] = STATE(114),
    [sym_set] = STATE(114),
    [sym_if] = STATE(114),
    [sym_do] = STATE(114),
    [sym_while] = STATE(114),
    [sym_fn] = STATE(114),
    [sym__literals] = STATE(114),
    [sym_str_literal] = STATE(114),
    [sym_long_str_literal] = STATE(114),
    [sym_buffer_literal] = STATE(114),
    [sym_long_buffer_literal] = STATE(114),
    [sym_number_literal] = STATE(114),
    [sym_bool_literal] = STATE(114),
    [sym__identifier] = STATE(114),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(299),
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
    [sym_nil_literal] = ACTIONS(301),
    [sym_keyword] = ACTIONS(303),
    [sym_symbol] = ACTIONS(301),
  },
  [29] = {
    [sym__expr] = STATE(104),
    [sym_tuple] = STATE(104),
    [sym_sqr_tuple] = STATE(104),
    [sym_array] = STATE(104),
    [sym_sqr_array] = STATE(104),
    [sym_struct] = STATE(104),
    [sym_table] = STATE(104),
    [sym__special_forms] = STATE(104),
    [sym_def] = STATE(104),
    [sym_var] = STATE(104),
    [sym_quote] = STATE(104),
    [sym_splice] = STATE(104),
    [sym_quasiquote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_break] = STATE(104),
    [sym_set] = STATE(104),
    [sym_if] = STATE(104),
    [sym_do] = STATE(104),
    [sym_while] = STATE(104),
    [sym_fn] = STATE(104),
    [sym__literals] = STATE(104),
    [sym_str_literal] = STATE(104),
    [sym_long_str_literal] = STATE(104),
    [sym_buffer_literal] = STATE(104),
    [sym_long_buffer_literal] = STATE(104),
    [sym_number_literal] = STATE(104),
    [sym_bool_literal] = STATE(104),
    [sym__identifier] = STATE(104),
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
    [sym_nil_literal] = ACTIONS(305),
    [sym_keyword] = ACTIONS(307),
    [sym_symbol] = ACTIONS(305),
  },
  [30] = {
    [sym__expr] = STATE(110),
    [sym_tuple] = STATE(110),
    [sym_sqr_tuple] = STATE(110),
    [sym_array] = STATE(110),
    [sym_sqr_array] = STATE(110),
    [sym_struct] = STATE(110),
    [sym_table] = STATE(110),
    [sym__special_forms] = STATE(110),
    [sym_def] = STATE(110),
    [sym_var] = STATE(110),
    [sym_quote] = STATE(110),
    [sym_splice] = STATE(110),
    [sym_quasiquote] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_break] = STATE(110),
    [sym_set] = STATE(110),
    [sym_if] = STATE(110),
    [sym_do] = STATE(110),
    [sym_while] = STATE(110),
    [sym_fn] = STATE(110),
    [sym__literals] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_long_str_literal] = STATE(110),
    [sym_buffer_literal] = STATE(110),
    [sym_long_buffer_literal] = STATE(110),
    [sym_number_literal] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym__identifier] = STATE(110),
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
    [sym_nil_literal] = ACTIONS(309),
    [sym_keyword] = ACTIONS(311),
    [sym_symbol] = ACTIONS(309),
  },
  [31] = {
    [sym__expr] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym_sqr_tuple] = STATE(33),
    [sym_array] = STATE(33),
    [sym_sqr_array] = STATE(33),
    [sym_struct] = STATE(33),
    [sym_table] = STATE(33),
    [sym__special_forms] = STATE(33),
    [sym_def] = STATE(33),
    [sym_var] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_splice] = STATE(33),
    [sym_quasiquote] = STATE(33),
    [sym_unquote] = STATE(33),
    [sym_break] = STATE(33),
    [sym_set] = STATE(33),
    [sym_if] = STATE(33),
    [sym_do] = STATE(33),
    [sym_while] = STATE(33),
    [sym_fn] = STATE(33),
    [sym__literals] = STATE(33),
    [sym_str_literal] = STATE(33),
    [sym_long_str_literal] = STATE(33),
    [sym_buffer_literal] = STATE(33),
    [sym_long_buffer_literal] = STATE(33),
    [sym_number_literal] = STATE(33),
    [sym_bool_literal] = STATE(33),
    [sym__identifier] = STATE(33),
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
    [sym_nil_literal] = ACTIONS(313),
    [sym_keyword] = ACTIONS(315),
    [sym_symbol] = ACTIONS(313),
  },
  [32] = {
    [sym__expr] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_sqr_tuple] = STATE(12),
    [sym_array] = STATE(12),
    [sym_sqr_array] = STATE(12),
    [sym_struct] = STATE(12),
    [sym_table] = STATE(12),
    [sym__special_forms] = STATE(12),
    [sym_def] = STATE(12),
    [sym_var] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_splice] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_break] = STATE(12),
    [sym_set] = STATE(12),
    [sym_if] = STATE(12),
    [sym_do] = STATE(12),
    [sym_while] = STATE(12),
    [sym_fn] = STATE(12),
    [sym__literals] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_long_str_literal] = STATE(12),
    [sym_buffer_literal] = STATE(12),
    [sym_long_buffer_literal] = STATE(12),
    [sym_number_literal] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym__identifier] = STATE(12),
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
    [sym_nil_literal] = ACTIONS(317),
    [sym_keyword] = ACTIONS(319),
    [sym_symbol] = ACTIONS(317),
  },
  [33] = {
    [sym__expr] = STATE(27),
    [sym_tuple] = STATE(27),
    [sym_sqr_tuple] = STATE(27),
    [sym_array] = STATE(27),
    [sym_sqr_array] = STATE(27),
    [sym_struct] = STATE(27),
    [sym_table] = STATE(27),
    [sym__special_forms] = STATE(27),
    [sym_def] = STATE(27),
    [sym_var] = STATE(27),
    [sym_quote] = STATE(27),
    [sym_splice] = STATE(27),
    [sym_quasiquote] = STATE(27),
    [sym_unquote] = STATE(27),
    [sym_break] = STATE(27),
    [sym_set] = STATE(27),
    [sym_if] = STATE(27),
    [sym_do] = STATE(27),
    [sym_while] = STATE(27),
    [sym_fn] = STATE(27),
    [sym__literals] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_long_str_literal] = STATE(27),
    [sym_buffer_literal] = STATE(27),
    [sym_long_buffer_literal] = STATE(27),
    [sym_number_literal] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym__identifier] = STATE(27),
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
    [sym_nil_literal] = ACTIONS(321),
    [sym_keyword] = ACTIONS(323),
    [sym_symbol] = ACTIONS(321),
  },
  [34] = {
    [sym__expr] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_sqr_tuple] = STATE(29),
    [sym_array] = STATE(29),
    [sym_sqr_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_table] = STATE(29),
    [sym__special_forms] = STATE(29),
    [sym_def] = STATE(29),
    [sym_var] = STATE(29),
    [sym_quote] = STATE(29),
    [sym_splice] = STATE(29),
    [sym_quasiquote] = STATE(29),
    [sym_unquote] = STATE(29),
    [sym_break] = STATE(29),
    [sym_set] = STATE(29),
    [sym_if] = STATE(29),
    [sym_do] = STATE(29),
    [sym_while] = STATE(29),
    [sym_fn] = STATE(29),
    [sym__literals] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_long_str_literal] = STATE(29),
    [sym_buffer_literal] = STATE(29),
    [sym_long_buffer_literal] = STATE(29),
    [sym_number_literal] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym__identifier] = STATE(29),
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
    [sym_nil_literal] = ACTIONS(325),
    [sym_keyword] = ACTIONS(327),
    [sym_symbol] = ACTIONS(325),
  },
  [35] = {
    [sym__expr] = STATE(115),
    [sym_tuple] = STATE(115),
    [sym_sqr_tuple] = STATE(115),
    [sym_array] = STATE(115),
    [sym_sqr_array] = STATE(115),
    [sym_struct] = STATE(115),
    [sym_table] = STATE(115),
    [sym__special_forms] = STATE(115),
    [sym_def] = STATE(115),
    [sym_var] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_splice] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_break] = STATE(115),
    [sym_set] = STATE(115),
    [sym_if] = STATE(115),
    [sym_do] = STATE(115),
    [sym_while] = STATE(115),
    [sym_fn] = STATE(115),
    [sym__literals] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_long_str_literal] = STATE(115),
    [sym_buffer_literal] = STATE(115),
    [sym_long_buffer_literal] = STATE(115),
    [sym_number_literal] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym__identifier] = STATE(115),
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
    [sym_nil_literal] = ACTIONS(329),
    [sym_keyword] = ACTIONS(331),
    [sym_symbol] = ACTIONS(329),
  },
  [36] = {
    [sym__expr] = STATE(106),
    [sym_tuple] = STATE(106),
    [sym_sqr_tuple] = STATE(106),
    [sym_array] = STATE(106),
    [sym_sqr_array] = STATE(106),
    [sym_struct] = STATE(106),
    [sym_table] = STATE(106),
    [sym__special_forms] = STATE(106),
    [sym_def] = STATE(106),
    [sym_var] = STATE(106),
    [sym_quote] = STATE(106),
    [sym_splice] = STATE(106),
    [sym_quasiquote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_break] = STATE(106),
    [sym_set] = STATE(106),
    [sym_if] = STATE(106),
    [sym_do] = STATE(106),
    [sym_while] = STATE(106),
    [sym_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
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
    [sym_nil_literal] = ACTIONS(333),
    [sym_keyword] = ACTIONS(335),
    [sym_symbol] = ACTIONS(333),
  },
  [37] = {
    [sym__expr] = STATE(105),
    [sym_tuple] = STATE(105),
    [sym_sqr_tuple] = STATE(105),
    [sym_array] = STATE(105),
    [sym_sqr_array] = STATE(105),
    [sym_struct] = STATE(105),
    [sym_table] = STATE(105),
    [sym__special_forms] = STATE(105),
    [sym_def] = STATE(105),
    [sym_var] = STATE(105),
    [sym_quote] = STATE(105),
    [sym_splice] = STATE(105),
    [sym_quasiquote] = STATE(105),
    [sym_unquote] = STATE(105),
    [sym_break] = STATE(105),
    [sym_set] = STATE(105),
    [sym_if] = STATE(105),
    [sym_do] = STATE(105),
    [sym_while] = STATE(105),
    [sym_fn] = STATE(105),
    [sym__literals] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_long_str_literal] = STATE(105),
    [sym_buffer_literal] = STATE(105),
    [sym_long_buffer_literal] = STATE(105),
    [sym_number_literal] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym__identifier] = STATE(105),
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
    [sym_nil_literal] = ACTIONS(337),
    [sym_keyword] = ACTIONS(339),
    [sym_symbol] = ACTIONS(337),
  },
  [38] = {
    [sym__expr] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym_sqr_tuple] = STATE(86),
    [sym_array] = STATE(86),
    [sym_sqr_array] = STATE(86),
    [sym_struct] = STATE(86),
    [sym_table] = STATE(86),
    [sym__special_forms] = STATE(86),
    [sym_def] = STATE(86),
    [sym_var] = STATE(86),
    [sym_quote] = STATE(86),
    [sym_splice] = STATE(86),
    [sym_quasiquote] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_break] = STATE(86),
    [sym_set] = STATE(86),
    [sym_if] = STATE(86),
    [sym_do] = STATE(86),
    [sym_while] = STATE(86),
    [sym_fn] = STATE(86),
    [sym__literals] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_long_str_literal] = STATE(86),
    [sym_buffer_literal] = STATE(86),
    [sym_long_buffer_literal] = STATE(86),
    [sym_number_literal] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym__identifier] = STATE(86),
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
    [sym_nil_literal] = ACTIONS(341),
    [sym_keyword] = ACTIONS(343),
    [sym_symbol] = ACTIONS(341),
  },
  [39] = {
    [sym__expr] = STATE(109),
    [sym_tuple] = STATE(109),
    [sym_sqr_tuple] = STATE(109),
    [sym_array] = STATE(109),
    [sym_sqr_array] = STATE(109),
    [sym_struct] = STATE(109),
    [sym_table] = STATE(109),
    [sym__special_forms] = STATE(109),
    [sym_def] = STATE(109),
    [sym_var] = STATE(109),
    [sym_quote] = STATE(109),
    [sym_splice] = STATE(109),
    [sym_quasiquote] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_break] = STATE(109),
    [sym_set] = STATE(109),
    [sym_if] = STATE(109),
    [sym_do] = STATE(109),
    [sym_while] = STATE(109),
    [sym_fn] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym__identifier] = STATE(109),
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
    [sym_nil_literal] = ACTIONS(345),
    [sym_keyword] = ACTIONS(347),
    [sym_symbol] = ACTIONS(345),
  },
  [40] = {
    [sym__expr] = STATE(113),
    [sym_tuple] = STATE(113),
    [sym_sqr_tuple] = STATE(113),
    [sym_array] = STATE(113),
    [sym_sqr_array] = STATE(113),
    [sym_struct] = STATE(113),
    [sym_table] = STATE(113),
    [sym__special_forms] = STATE(113),
    [sym_def] = STATE(113),
    [sym_var] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_splice] = STATE(113),
    [sym_quasiquote] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_break] = STATE(113),
    [sym_set] = STATE(113),
    [sym_if] = STATE(113),
    [sym_do] = STATE(113),
    [sym_while] = STATE(113),
    [sym_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym__identifier] = STATE(113),
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
    [sym_nil_literal] = ACTIONS(349),
    [sym_keyword] = ACTIONS(351),
    [sym_symbol] = ACTIONS(349),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(353), 15,
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
    ACTIONS(359), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(357), 15,
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
    ACTIONS(363), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(361), 15,
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
    ACTIONS(367), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(365), 15,
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
    ACTIONS(371), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(369), 15,
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
    ACTIONS(375), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(373), 15,
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
    ACTIONS(379), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(377), 15,
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
    ACTIONS(383), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(381), 15,
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
    ACTIONS(387), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(385), 15,
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
    ACTIONS(391), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(389), 15,
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
    ACTIONS(395), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(393), 15,
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
    ACTIONS(399), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(397), 15,
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
    ACTIONS(403), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(401), 15,
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
    ACTIONS(407), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(405), 15,
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
    ACTIONS(411), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(409), 15,
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
    ACTIONS(415), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(413), 15,
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
    ACTIONS(419), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(417), 15,
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
    ACTIONS(423), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(421), 15,
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
    ACTIONS(427), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(425), 15,
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
    ACTIONS(431), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(429), 15,
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
    ACTIONS(435), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(433), 15,
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
    ACTIONS(439), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(437), 15,
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
    ACTIONS(443), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(441), 15,
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
  [690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(445), 15,
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
  [720] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(451), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(449), 15,
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
  [750] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(453), 15,
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
  [780] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(459), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(457), 15,
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
  [810] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(463), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(461), 15,
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
  [840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(465), 15,
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
  [870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(469), 15,
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
  [900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(475), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(473), 15,
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
  [930] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(477), 15,
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
  [960] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(481), 15,
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
  [990] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(487), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(485), 15,
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
  [1020] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(491), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(489), 15,
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
  [1050] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(493), 15,
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
  [1080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(499), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(497), 15,
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
  [1110] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(501), 15,
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
  [1140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(505), 15,
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
  [1170] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(509), 15,
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
  [1200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(513), 15,
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
  [1230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(517), 13,
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
  [1258] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(521), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(525), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(529), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1339] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(535), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(533), 12,
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
  [1366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(539), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(537), 12,
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
  [1393] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(543), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(545), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(547), 1,
      sym_escape_sequence,
    STATE(94), 1,
      aux_sym_long_str_literal_repeat1,
  [1409] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(549), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(551), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(554), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym_long_str_literal_repeat1,
  [1425] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      aux_sym_str_literal_token1,
    ACTIONS(561), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_str_literal_repeat1,
  [1441] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(565), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(567), 1,
      sym_escape_sequence,
    STATE(96), 1,
      aux_sym_long_str_literal_repeat1,
  [1457] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(571), 1,
      aux_sym_str_literal_token1,
    ACTIONS(574), 1,
      sym_escape_sequence,
    STATE(92), 1,
      aux_sym_str_literal_repeat1,
  [1473] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    ACTIONS(579), 1,
      aux_sym_str_literal_token1,
    ACTIONS(581), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym_str_literal_repeat1,
  [1489] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(585), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(587), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym_long_str_literal_repeat1,
  [1505] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 1,
      aux_sym_str_literal_token1,
    ACTIONS(593), 1,
      sym_escape_sequence,
    STATE(92), 1,
      aux_sym_str_literal_repeat1,
  [1521] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(587), 1,
      sym_escape_sequence,
    ACTIONS(595), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(89), 1,
      aux_sym_long_str_literal_repeat1,
  [1537] = 5,
    ACTIONS(541), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      aux_sym_str_literal_token1,
    ACTIONS(593), 1,
      sym_escape_sequence,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_str_literal_repeat1,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      sym_symbol,
    STATE(101), 1,
      aux_sym_fn_parameters_repeat1,
  [1566] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    ACTIONS(605), 1,
      sym_symbol,
    STATE(99), 1,
      aux_sym_fn_parameters_repeat1,
  [1579] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(610), 1,
      sym_symbol,
    STATE(9), 1,
      sym_fn_parameters,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 1,
      sym_symbol,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_fn_parameters_repeat1,
  [1605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_fn_parameters,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(614), 2,
      anon_sym_RBRACK,
      sym_symbol,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
  [1637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_symbol,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 1,
      sym_symbol,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
  [1686] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 30,
  [SMALL_STATE(43)] = 60,
  [SMALL_STATE(44)] = 90,
  [SMALL_STATE(45)] = 120,
  [SMALL_STATE(46)] = 150,
  [SMALL_STATE(47)] = 180,
  [SMALL_STATE(48)] = 210,
  [SMALL_STATE(49)] = 240,
  [SMALL_STATE(50)] = 270,
  [SMALL_STATE(51)] = 300,
  [SMALL_STATE(52)] = 330,
  [SMALL_STATE(53)] = 360,
  [SMALL_STATE(54)] = 390,
  [SMALL_STATE(55)] = 420,
  [SMALL_STATE(56)] = 450,
  [SMALL_STATE(57)] = 480,
  [SMALL_STATE(58)] = 510,
  [SMALL_STATE(59)] = 540,
  [SMALL_STATE(60)] = 570,
  [SMALL_STATE(61)] = 600,
  [SMALL_STATE(62)] = 630,
  [SMALL_STATE(63)] = 660,
  [SMALL_STATE(64)] = 690,
  [SMALL_STATE(65)] = 720,
  [SMALL_STATE(66)] = 750,
  [SMALL_STATE(67)] = 780,
  [SMALL_STATE(68)] = 810,
  [SMALL_STATE(69)] = 840,
  [SMALL_STATE(70)] = 870,
  [SMALL_STATE(71)] = 900,
  [SMALL_STATE(72)] = 930,
  [SMALL_STATE(73)] = 960,
  [SMALL_STATE(74)] = 990,
  [SMALL_STATE(75)] = 1020,
  [SMALL_STATE(76)] = 1050,
  [SMALL_STATE(77)] = 1080,
  [SMALL_STATE(78)] = 1110,
  [SMALL_STATE(79)] = 1140,
  [SMALL_STATE(80)] = 1170,
  [SMALL_STATE(81)] = 1200,
  [SMALL_STATE(82)] = 1230,
  [SMALL_STATE(83)] = 1258,
  [SMALL_STATE(84)] = 1285,
  [SMALL_STATE(85)] = 1312,
  [SMALL_STATE(86)] = 1339,
  [SMALL_STATE(87)] = 1366,
  [SMALL_STATE(88)] = 1393,
  [SMALL_STATE(89)] = 1409,
  [SMALL_STATE(90)] = 1425,
  [SMALL_STATE(91)] = 1441,
  [SMALL_STATE(92)] = 1457,
  [SMALL_STATE(93)] = 1473,
  [SMALL_STATE(94)] = 1489,
  [SMALL_STATE(95)] = 1505,
  [SMALL_STATE(96)] = 1521,
  [SMALL_STATE(97)] = 1537,
  [SMALL_STATE(98)] = 1553,
  [SMALL_STATE(99)] = 1566,
  [SMALL_STATE(100)] = 1579,
  [SMALL_STATE(101)] = 1592,
  [SMALL_STATE(102)] = 1605,
  [SMALL_STATE(103)] = 1615,
  [SMALL_STATE(104)] = 1623,
  [SMALL_STATE(105)] = 1630,
  [SMALL_STATE(106)] = 1637,
  [SMALL_STATE(107)] = 1644,
  [SMALL_STATE(108)] = 1651,
  [SMALL_STATE(109)] = 1658,
  [SMALL_STATE(110)] = 1665,
  [SMALL_STATE(111)] = 1672,
  [SMALL_STATE(112)] = 1679,
  [SMALL_STATE(113)] = 1686,
  [SMALL_STATE(114)] = 1693,
  [SMALL_STATE(115)] = 1700,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(20),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, SHIFT(21),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(90),
  [21] = {.count = 1, .reusable = true}, SHIFT(91),
  [23] = {.count = 1, .reusable = true}, SHIFT(93),
  [25] = {.count = 1, .reusable = true}, SHIFT(88),
  [27] = {.count = 1, .reusable = false}, SHIFT(65),
  [29] = {.count = 1, .reusable = false}, SHIFT(64),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(59),
  [37] = {.count = 1, .reusable = false}, SHIFT(111),
  [39] = {.count = 1, .reusable = false}, SHIFT(108),
  [41] = {.count = 1, .reusable = false}, SHIFT(37),
  [43] = {.count = 1, .reusable = false}, SHIFT(39),
  [45] = {.count = 1, .reusable = false}, SHIFT(30),
  [47] = {.count = 1, .reusable = false}, SHIFT(40),
  [49] = {.count = 1, .reusable = false}, SHIFT(28),
  [51] = {.count = 1, .reusable = false}, SHIFT(34),
  [53] = {.count = 1, .reusable = false}, SHIFT(31),
  [55] = {.count = 1, .reusable = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = false}, SHIFT(32),
  [59] = {.count = 1, .reusable = false}, SHIFT(100),
  [61] = {.count = 1, .reusable = false}, SHIFT(82),
  [63] = {.count = 1, .reusable = true}, SHIFT(82),
  [65] = {.count = 1, .reusable = true}, SHIFT(73),
  [67] = {.count = 1, .reusable = false}, SHIFT(38),
  [69] = {.count = 1, .reusable = true}, SHIFT(38),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(2),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(20),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(10),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(21),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(6),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(7),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(90),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(91),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(93),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(88),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(65),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(64),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(82),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(82),
  [115] = {.count = 1, .reusable = true}, SHIFT(71),
  [117] = {.count = 1, .reusable = true}, SHIFT(52),
  [119] = {.count = 1, .reusable = true}, SHIFT(43),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(20),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(10),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(21),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(6),
  [136] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(7),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(90),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(91),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(93),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(88),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(65),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(64),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(38),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(38),
  [165] = {.count = 1, .reusable = true}, SHIFT(48),
  [167] = {.count = 1, .reusable = false}, SHIFT(83),
  [169] = {.count = 1, .reusable = true}, SHIFT(83),
  [171] = {.count = 1, .reusable = true}, SHIFT(56),
  [173] = {.count = 1, .reusable = true}, SHIFT(62),
  [175] = {.count = 1, .reusable = true}, SHIFT(55),
  [177] = {.count = 1, .reusable = true}, SHIFT(57),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [181] = {.count = 1, .reusable = false}, SHIFT(17),
  [183] = {.count = 1, .reusable = true}, SHIFT(17),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(2),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(20),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(10),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(21),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(6),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(7),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(90),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(91),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(93),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(88),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(65),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(64),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(83),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 10), SHIFT_REPEAT(83),
  [229] = {.count = 1, .reusable = true}, SHIFT(41),
  [231] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [275] = {.count = 1, .reusable = true}, SHIFT(63),
  [277] = {.count = 1, .reusable = true}, SHIFT(67),
  [279] = {.count = 1, .reusable = true}, SHIFT(61),
  [281] = {.count = 1, .reusable = true}, SHIFT(53),
  [283] = {.count = 1, .reusable = true}, SHIFT(66),
  [285] = {.count = 1, .reusable = true}, SHIFT(69),
  [287] = {.count = 1, .reusable = true}, SHIFT(42),
  [289] = {.count = 1, .reusable = true}, SHIFT(68),
  [291] = {.count = 1, .reusable = true}, SHIFT(70),
  [293] = {.count = 1, .reusable = true}, SHIFT(54),
  [295] = {.count = 1, .reusable = false}, SHIFT(107),
  [297] = {.count = 1, .reusable = true}, SHIFT(107),
  [299] = {.count = 1, .reusable = true}, SHIFT(58),
  [301] = {.count = 1, .reusable = false}, SHIFT(114),
  [303] = {.count = 1, .reusable = true}, SHIFT(114),
  [305] = {.count = 1, .reusable = false}, SHIFT(104),
  [307] = {.count = 1, .reusable = true}, SHIFT(104),
  [309] = {.count = 1, .reusable = false}, SHIFT(110),
  [311] = {.count = 1, .reusable = true}, SHIFT(110),
  [313] = {.count = 1, .reusable = false}, SHIFT(33),
  [315] = {.count = 1, .reusable = true}, SHIFT(33),
  [317] = {.count = 1, .reusable = false}, SHIFT(12),
  [319] = {.count = 1, .reusable = true}, SHIFT(12),
  [321] = {.count = 1, .reusable = false}, SHIFT(27),
  [323] = {.count = 1, .reusable = true}, SHIFT(27),
  [325] = {.count = 1, .reusable = false}, SHIFT(29),
  [327] = {.count = 1, .reusable = true}, SHIFT(29),
  [329] = {.count = 1, .reusable = false}, SHIFT(115),
  [331] = {.count = 1, .reusable = true}, SHIFT(115),
  [333] = {.count = 1, .reusable = false}, SHIFT(106),
  [335] = {.count = 1, .reusable = true}, SHIFT(106),
  [337] = {.count = 1, .reusable = false}, SHIFT(105),
  [339] = {.count = 1, .reusable = true}, SHIFT(105),
  [341] = {.count = 1, .reusable = false}, SHIFT(86),
  [343] = {.count = 1, .reusable = true}, SHIFT(86),
  [345] = {.count = 1, .reusable = false}, SHIFT(109),
  [347] = {.count = 1, .reusable = true}, SHIFT(109),
  [349] = {.count = 1, .reusable = false}, SHIFT(113),
  [351] = {.count = 1, .reusable = true}, SHIFT(113),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5, .production_id = 17),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_while, 5, .production_id = 17),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5, .production_id = 14),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_def, 5, .production_id = 14),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4, .production_id = 13),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 4, .production_id = 13),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_set, 5, .production_id = 15),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_set, 5, .production_id = 15),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_var, 5, .production_id = 14),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_var, 5, .production_id = 14),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5, .production_id = 16),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5, .production_id = 16),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_while, 4, .production_id = 11),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_while, 4, .production_id = 11),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_do, 4, .production_id = 9),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_do, 4, .production_id = 9),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_break, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_break, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_break, 4),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_break, 4),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 23),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 23),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 20),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 20),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 4),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 4),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 21),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 21),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 4),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 4),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 4),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 4),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 4),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 4),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 7),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 7),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6, .production_id = 22),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6, .production_id = 22),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 7),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 7),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 4),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 4),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_splice, 4),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_splice, 4),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_quasiquote, 4),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_quasiquote, 4),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 4),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 4),
  [517] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [519] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [521] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 3),
  [523] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 3),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 2),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 2),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 3, .production_id = 18),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 3, .production_id = 18),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 6),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 6),
  [537] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [539] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [541] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [543] = {.count = 1, .reusable = false}, SHIFT(49),
  [545] = {.count = 1, .reusable = false}, SHIFT(94),
  [547] = {.count = 1, .reusable = true}, SHIFT(94),
  [549] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(89),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(89),
  [557] = {.count = 1, .reusable = false}, SHIFT(44),
  [559] = {.count = 1, .reusable = false}, SHIFT(97),
  [561] = {.count = 1, .reusable = true}, SHIFT(97),
  [563] = {.count = 1, .reusable = false}, SHIFT(46),
  [565] = {.count = 1, .reusable = false}, SHIFT(96),
  [567] = {.count = 1, .reusable = true}, SHIFT(96),
  [569] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [571] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(92),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(92),
  [577] = {.count = 1, .reusable = false}, SHIFT(47),
  [579] = {.count = 1, .reusable = false}, SHIFT(95),
  [581] = {.count = 1, .reusable = true}, SHIFT(95),
  [583] = {.count = 1, .reusable = false}, SHIFT(77),
  [585] = {.count = 1, .reusable = false}, SHIFT(89),
  [587] = {.count = 1, .reusable = true}, SHIFT(89),
  [589] = {.count = 1, .reusable = false}, SHIFT(76),
  [591] = {.count = 1, .reusable = false}, SHIFT(92),
  [593] = {.count = 1, .reusable = true}, SHIFT(92),
  [595] = {.count = 1, .reusable = false}, SHIFT(75),
  [597] = {.count = 1, .reusable = false}, SHIFT(74),
  [599] = {.count = 1, .reusable = true}, SHIFT(84),
  [601] = {.count = 1, .reusable = true}, SHIFT(103),
  [603] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 19),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 19), SHIFT_REPEAT(103),
  [608] = {.count = 1, .reusable = true}, SHIFT(98),
  [610] = {.count = 1, .reusable = true}, SHIFT(102),
  [612] = {.count = 1, .reusable = true}, SHIFT(85),
  [614] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 1, .production_id = 12),
  [616] = {.count = 1, .reusable = true}, SHIFT(50),
  [618] = {.count = 1, .reusable = true}, SHIFT(78),
  [620] = {.count = 1, .reusable = true}, SHIFT(45),
  [622] = {.count = 1, .reusable = true}, SHIFT(72),
  [624] = {.count = 1, .reusable = true}, SHIFT(35),
  [626] = {.count = 1, .reusable = true}, SHIFT(79),
  [628] = {.count = 1, .reusable = true}, SHIFT(80),
  [630] = {.count = 1, .reusable = true}, SHIFT(36),
  [632] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [634] = {.count = 1, .reusable = true}, SHIFT(81),
  [636] = {.count = 1, .reusable = true}, SHIFT(60),
  [638] = {.count = 1, .reusable = true}, SHIFT(51),
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
