#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_SQUOTE = 23,
  anon_sym_SEMI = 24,
  anon_sym_TILDE = 25,
  anon_sym_COMMA = 26,
  anon_sym_PIPE = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_str_literal_token1 = 29,
  anon_sym_BQUOTE_BQUOTE = 30,
  aux_sym_long_str_literal_token1 = 31,
  anon_sym_AT_DQUOTE = 32,
  anon_sym_AT_BQUOTE_BQUOTE = 33,
  aux_sym_number_literal_token1 = 34,
  aux_sym_number_literal_token2 = 35,
  aux_sym_number_literal_token3 = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym_nil_literal = 39,
  sym_escape_sequence = 40,
  anon_sym_SLASH = 41,
  sym_keyword = 42,
  sym_symbol = 43,
  sym_source_file = 44,
  sym__expr = 45,
  sym_tuple = 46,
  sym_sqr_tuple = 47,
  sym_array = 48,
  sym_sqr_array = 49,
  sym_struct = 50,
  sym_table = 51,
  sym__struct_tables_commom = 52,
  sym__special_forms = 53,
  sym_def = 54,
  sym_var = 55,
  sym_quote = 56,
  sym_splice = 57,
  sym_quasiquote = 58,
  sym_unquote = 59,
  sym_break = 60,
  sym_set = 61,
  sym_if = 62,
  sym_do = 63,
  sym_while = 64,
  sym_fn = 65,
  sym_fn_parameters = 66,
  sym__shorthand = 67,
  sym_short_quote = 68,
  sym_short_splice = 69,
  sym_short_quasiquote = 70,
  sym_short_unquote = 71,
  sym_short_fn = 72,
  sym__literals = 73,
  sym_str_literal = 74,
  sym_long_str_literal = 75,
  sym_buffer_literal = 76,
  sym_long_buffer_literal = 77,
  sym_number_literal = 78,
  sym_bool_literal = 79,
  sym_doc_str = 80,
  sym_body = 81,
  sym__identifier = 82,
  sym_scoped_symbol = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_tuple_repeat1 = 85,
  aux_sym_struct_repeat1 = 86,
  aux_sym_def_repeat1 = 87,
  aux_sym_while_repeat1 = 88,
  aux_sym_fn_parameters_repeat1 = 89,
  aux_sym_str_literal_repeat1 = 90,
  aux_sym_long_str_literal_repeat1 = 91,
  alias_sym_module_symbol = 92,
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
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SEMI] = ";",
  [anon_sym_TILDE] = "~",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
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
  [anon_sym_SLASH] = "/",
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
  [sym__shorthand] = "_shorthand",
  [sym_short_quote] = "short_quote",
  [sym_short_splice] = "short_splice",
  [sym_short_quasiquote] = "short_quasiquote",
  [sym_short_unquote] = "short_unquote",
  [sym_short_fn] = "short_fn",
  [sym__literals] = "_literals",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_number_literal] = "number_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_doc_str] = "doc_str",
  [sym_body] = "body",
  [sym__identifier] = "_identifier",
  [sym_scoped_symbol] = "scoped_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_while_repeat1] = "while_repeat1",
  [aux_sym_fn_parameters_repeat1] = "fn_parameters_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
  [alias_sym_module_symbol] = "module_symbol",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym__shorthand] = sym__shorthand,
  [sym_short_quote] = sym_short_quote,
  [sym_short_splice] = sym_short_splice,
  [sym_short_quasiquote] = sym_short_quasiquote,
  [sym_short_unquote] = sym_short_unquote,
  [sym_short_fn] = sym_short_fn,
  [sym__literals] = sym__literals,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_doc_str] = sym_doc_str,
  [sym_body] = sym_body,
  [sym__identifier] = sym__identifier,
  [sym_scoped_symbol] = sym_scoped_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_while_repeat1] = aux_sym_while_repeat1,
  [aux_sym_fn_parameters_repeat1] = aux_sym_fn_parameters_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
  [alias_sym_module_symbol] = alias_sym_module_symbol,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
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
  [sym__shorthand] = {
    .visible = false,
    .named = true,
  },
  [sym_short_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_short_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_short_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_short_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn] = {
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
  [sym_doc_str] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_scoped_symbol] = {
    .visible = true,
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
  [aux_sym_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_repeat1] = {
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
  [alias_sym_module_symbol] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_condition = 2,
  field_doc_string = 3,
  field_else = 4,
  field_form = 5,
  field_item = 6,
  field_key = 7,
  field_l_value = 8,
  field_modifier = 9,
  field_name = 10,
  field_parameter = 11,
  field_parameters = 12,
  field_path = 13,
  field_r_value = 14,
  field_then = 15,
  field_value = 16,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_doc_string] = "doc_string",
  [field_else] = "else",
  [field_form] = "form",
  [field_item] = "item",
  [field_key] = "key",
  [field_l_value] = "l_value",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_r_value] = "r_value",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[35] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 4},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 4},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 1},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 4},
  [30] = {.index = 51, .length = 3},
  [31] = {.index = 54, .length = 3},
  [32] = {.index = 57, .length = 3},
  [33] = {.index = 60, .length = 3},
  [34] = {.index = 63, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 0},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_body, 1},
  [4] =
    {field_form, 0},
  [5] =
    {field_form, 0, .inherited = true},
  [6] =
    {field_item, 1, .inherited = true},
  [7] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [9] =
    {field_key, 0},
    {field_value, 1},
  [11] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [13] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [17] =
    {field_path, 0},
  [18] =
    {field_modifier, 0},
  [19] =
    {field_doc_string, 0},
  [20] =
    {field_body, 2},
  [21] =
    {field_form, 0, .inherited = true},
    {field_form, 1, .inherited = true},
  [23] =
    {field_condition, 2},
  [24] =
    {field_parameter, 0},
  [25] =
    {field_parameters, 2},
  [26] =
    {field_name, 2},
    {field_value, 3},
  [28] =
    {field_doc_string, 0, .inherited = true},
    {field_doc_string, 1, .inherited = true},
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [32] =
    {field_l_value, 2},
    {field_r_value, 3},
  [34] =
    {field_condition, 2},
    {field_then, 3},
  [36] =
    {field_condition, 2},
    {field_form, 3, .inherited = true},
  [38] =
    {field_parameter, 1, .inherited = true},
  [39] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [41] =
    {field_body, 3},
    {field_parameters, 2},
  [43] =
    {field_doc_string, 2},
    {field_parameters, 3},
  [45] =
    {field_name, 2},
    {field_parameters, 3},
  [47] =
    {field_doc_string, 3, .inherited = true},
    {field_modifier, 3, .inherited = true},
    {field_name, 2},
    {field_value, 4},
  [51] =
    {field_condition, 2},
    {field_else, 4},
    {field_then, 3},
  [54] =
    {field_body, 4},
    {field_doc_string, 2},
    {field_parameters, 3},
  [57] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
  [60] =
    {field_doc_string, 3},
    {field_name, 2},
    {field_parameters, 4},
  [63] =
    {field_body, 5},
    {field_doc_string, 3},
    {field_name, 2},
    {field_parameters, 4},
};

static TSSymbol ts_alias_sequences[35][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_module_symbol,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(142);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(142);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('<' <= lookahead && lookahead <= '\\') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(142);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(98);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 88:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 89:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 90:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 92:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 94:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '0') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(123);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(123);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(122);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(138);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(133);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(110);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(125);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(88);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(89);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 108:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 109:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 110:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 111:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 112:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(116);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(101);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 116:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(120);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(104);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(126);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(131);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 122:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(136);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(118);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(109);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(130);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(139);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(140);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(143);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(145);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(114);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 133:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(144);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(121);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(107);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 137:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(108);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(111);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(112);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(155);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(102);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(128);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(106);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(129);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
      END_STATE();
    case 159:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(159);
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
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(143),
    [sym__expr] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_sqr_tuple] = STATE(20),
    [sym_array] = STATE(20),
    [sym_sqr_array] = STATE(20),
    [sym_struct] = STATE(20),
    [sym_table] = STATE(20),
    [sym__special_forms] = STATE(20),
    [sym_def] = STATE(20),
    [sym_var] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_splice] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_break] = STATE(20),
    [sym_set] = STATE(20),
    [sym_if] = STATE(20),
    [sym_do] = STATE(20),
    [sym_while] = STATE(20),
    [sym_fn] = STATE(20),
    [sym__shorthand] = STATE(20),
    [sym_short_quote] = STATE(20),
    [sym_short_splice] = STATE(20),
    [sym_short_quasiquote] = STATE(20),
    [sym_short_unquote] = STATE(20),
    [sym_short_fn] = STATE(20),
    [sym__literals] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_long_str_literal] = STATE(20),
    [sym_buffer_literal] = STATE(20),
    [sym_long_buffer_literal] = STATE(20),
    [sym_number_literal] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym__identifier] = STATE(20),
    [sym_scoped_symbol] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(41),
    [sym_keyword] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
  },
  [2] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(29),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(49),
    [anon_sym_var] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_splice] = ACTIONS(55),
    [anon_sym_quasiquote] = ACTIONS(57),
    [anon_sym_unquote] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [anon_sym_set] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_while] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [3] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_body] = STATE(142),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [4] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__struct_tables_commom] = STATE(107),
    [sym__special_forms] = STATE(43),
    [sym_def] = STATE(43),
    [sym_var] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_splice] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_break] = STATE(43),
    [sym_set] = STATE(43),
    [sym_if] = STATE(43),
    [sym_do] = STATE(43),
    [sym_while] = STATE(43),
    [sym_fn] = STATE(43),
    [sym__shorthand] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_short_splice] = STATE(43),
    [sym_short_quasiquote] = STATE(43),
    [sym_short_unquote] = STATE(43),
    [sym_short_fn] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
    [aux_sym_struct_repeat1] = STATE(10),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(85),
    [sym_keyword] = ACTIONS(87),
    [sym_symbol] = ACTIONS(45),
  },
  [5] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__struct_tables_commom] = STATE(107),
    [sym__special_forms] = STATE(43),
    [sym_def] = STATE(43),
    [sym_var] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_splice] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_break] = STATE(43),
    [sym_set] = STATE(43),
    [sym_if] = STATE(43),
    [sym_do] = STATE(43),
    [sym_while] = STATE(43),
    [sym_fn] = STATE(43),
    [sym__shorthand] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_short_splice] = STATE(43),
    [sym_short_quasiquote] = STATE(43),
    [sym_short_unquote] = STATE(43),
    [sym_short_fn] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
    [aux_sym_struct_repeat1] = STATE(10),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(85),
    [sym_keyword] = ACTIONS(87),
    [sym_symbol] = ACTIONS(45),
  },
  [6] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_body] = STATE(145),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [7] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__struct_tables_commom] = STATE(107),
    [sym__special_forms] = STATE(43),
    [sym_def] = STATE(43),
    [sym_var] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_splice] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_break] = STATE(43),
    [sym_set] = STATE(43),
    [sym_if] = STATE(43),
    [sym_do] = STATE(43),
    [sym_while] = STATE(43),
    [sym_fn] = STATE(43),
    [sym__shorthand] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_short_splice] = STATE(43),
    [sym_short_quasiquote] = STATE(43),
    [sym_short_unquote] = STATE(43),
    [sym_short_fn] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
    [aux_sym_struct_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(85),
    [sym_keyword] = ACTIONS(87),
    [sym_symbol] = ACTIONS(45),
  },
  [8] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__struct_tables_commom] = STATE(107),
    [sym__special_forms] = STATE(43),
    [sym_def] = STATE(43),
    [sym_var] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_splice] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_break] = STATE(43),
    [sym_set] = STATE(43),
    [sym_if] = STATE(43),
    [sym_do] = STATE(43),
    [sym_while] = STATE(43),
    [sym_fn] = STATE(43),
    [sym__shorthand] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_short_splice] = STATE(43),
    [sym_short_quasiquote] = STATE(43),
    [sym_short_unquote] = STATE(43),
    [sym_short_fn] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(85),
    [sym_keyword] = ACTIONS(87),
    [sym_symbol] = ACTIONS(45),
  },
  [9] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_AT_LPAREN] = ACTIONS(105),
    [anon_sym_AT_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_AT_LBRACE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(135),
    [anon_sym_AT_DQUOTE] = ACTIONS(138),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(141),
    [aux_sym_number_literal_token1] = ACTIONS(144),
    [aux_sym_number_literal_token2] = ACTIONS(144),
    [aux_sym_number_literal_token3] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [sym_nil_literal] = ACTIONS(150),
    [sym_keyword] = ACTIONS(153),
    [sym_symbol] = ACTIONS(156),
  },
  [10] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
    [sym__struct_tables_commom] = STATE(107),
    [sym__special_forms] = STATE(43),
    [sym_def] = STATE(43),
    [sym_var] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_splice] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_break] = STATE(43),
    [sym_set] = STATE(43),
    [sym_if] = STATE(43),
    [sym_do] = STATE(43),
    [sym_while] = STATE(43),
    [sym_fn] = STATE(43),
    [sym__shorthand] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_short_splice] = STATE(43),
    [sym_short_quasiquote] = STATE(43),
    [sym_short_unquote] = STATE(43),
    [sym_short_fn] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
    [aux_sym_struct_repeat1] = STATE(10),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_AT_LPAREN] = ACTIONS(165),
    [anon_sym_AT_LBRACK] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_AT_LBRACE] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(197),
    [anon_sym_AT_DQUOTE] = ACTIONS(200),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(203),
    [aux_sym_number_literal_token1] = ACTIONS(206),
    [aux_sym_number_literal_token2] = ACTIONS(206),
    [aux_sym_number_literal_token3] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [sym_nil_literal] = ACTIONS(212),
    [sym_keyword] = ACTIONS(215),
    [sym_symbol] = ACTIONS(218),
  },
  [11] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_body] = STATE(138),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [12] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_body] = STATE(140),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [13] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_body] = STATE(151),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [14] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [15] = {
    [sym__expr] = STATE(141),
    [sym_tuple] = STATE(141),
    [sym_sqr_tuple] = STATE(141),
    [sym_array] = STATE(141),
    [sym_sqr_array] = STATE(141),
    [sym_struct] = STATE(141),
    [sym_table] = STATE(141),
    [sym__special_forms] = STATE(141),
    [sym_def] = STATE(141),
    [sym_var] = STATE(141),
    [sym_quote] = STATE(141),
    [sym_splice] = STATE(141),
    [sym_quasiquote] = STATE(141),
    [sym_unquote] = STATE(141),
    [sym_break] = STATE(141),
    [sym_set] = STATE(141),
    [sym_if] = STATE(141),
    [sym_do] = STATE(141),
    [sym_while] = STATE(141),
    [sym_fn] = STATE(141),
    [sym__shorthand] = STATE(141),
    [sym_short_quote] = STATE(141),
    [sym_short_splice] = STATE(141),
    [sym_short_quasiquote] = STATE(141),
    [sym_short_unquote] = STATE(141),
    [sym_short_fn] = STATE(141),
    [sym__literals] = STATE(141),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(141),
    [sym_long_buffer_literal] = STATE(141),
    [sym_number_literal] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym_doc_str] = STATE(114),
    [sym__identifier] = STATE(141),
    [sym_scoped_symbol] = STATE(141),
    [aux_sym_def_repeat1] = STATE(53),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(229),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(45),
  },
  [16] = {
    [sym__expr] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym_sqr_tuple] = STATE(16),
    [sym_array] = STATE(16),
    [sym_sqr_array] = STATE(16),
    [sym_struct] = STATE(16),
    [sym_table] = STATE(16),
    [sym__special_forms] = STATE(16),
    [sym_def] = STATE(16),
    [sym_var] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_splice] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_break] = STATE(16),
    [sym_set] = STATE(16),
    [sym_if] = STATE(16),
    [sym_do] = STATE(16),
    [sym_while] = STATE(16),
    [sym_fn] = STATE(16),
    [sym__shorthand] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_short_splice] = STATE(16),
    [sym_short_quasiquote] = STATE(16),
    [sym_short_unquote] = STATE(16),
    [sym_short_fn] = STATE(16),
    [sym__literals] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_long_str_literal] = STATE(16),
    [sym_buffer_literal] = STATE(16),
    [sym_long_buffer_literal] = STATE(16),
    [sym_number_literal] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym__identifier] = STATE(16),
    [sym_scoped_symbol] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_AT_LBRACK] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_AT_LBRACE] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(271),
    [anon_sym_AT_DQUOTE] = ACTIONS(274),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(277),
    [aux_sym_number_literal_token1] = ACTIONS(280),
    [aux_sym_number_literal_token2] = ACTIONS(280),
    [aux_sym_number_literal_token3] = ACTIONS(280),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [sym_nil_literal] = ACTIONS(286),
    [sym_keyword] = ACTIONS(289),
    [sym_symbol] = ACTIONS(292),
  },
  [17] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [18] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_AT_LPAREN] = ACTIONS(305),
    [anon_sym_AT_LBRACK] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_AT_LBRACE] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(335),
    [anon_sym_AT_DQUOTE] = ACTIONS(338),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(341),
    [aux_sym_number_literal_token1] = ACTIONS(344),
    [aux_sym_number_literal_token2] = ACTIONS(344),
    [aux_sym_number_literal_token3] = ACTIONS(344),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [sym_nil_literal] = ACTIONS(350),
    [sym_keyword] = ACTIONS(353),
    [sym_symbol] = ACTIONS(356),
  },
  [19] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [20] = {
    [sym__expr] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym_sqr_tuple] = STATE(16),
    [sym_array] = STATE(16),
    [sym_sqr_array] = STATE(16),
    [sym_struct] = STATE(16),
    [sym_table] = STATE(16),
    [sym__special_forms] = STATE(16),
    [sym_def] = STATE(16),
    [sym_var] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_splice] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_break] = STATE(16),
    [sym_set] = STATE(16),
    [sym_if] = STATE(16),
    [sym_do] = STATE(16),
    [sym_while] = STATE(16),
    [sym_fn] = STATE(16),
    [sym__shorthand] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_short_splice] = STATE(16),
    [sym_short_quasiquote] = STATE(16),
    [sym_short_unquote] = STATE(16),
    [sym_short_fn] = STATE(16),
    [sym__literals] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_long_str_literal] = STATE(16),
    [sym_buffer_literal] = STATE(16),
    [sym_long_buffer_literal] = STATE(16),
    [sym_number_literal] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym__identifier] = STATE(16),
    [sym_scoped_symbol] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(363),
    [sym_keyword] = ACTIONS(365),
    [sym_symbol] = ACTIONS(45),
  },
  [21] = {
    [sym__expr] = STATE(148),
    [sym_tuple] = STATE(148),
    [sym_sqr_tuple] = STATE(148),
    [sym_array] = STATE(148),
    [sym_sqr_array] = STATE(148),
    [sym_struct] = STATE(148),
    [sym_table] = STATE(148),
    [sym__special_forms] = STATE(148),
    [sym_def] = STATE(148),
    [sym_var] = STATE(148),
    [sym_quote] = STATE(148),
    [sym_splice] = STATE(148),
    [sym_quasiquote] = STATE(148),
    [sym_unquote] = STATE(148),
    [sym_break] = STATE(148),
    [sym_set] = STATE(148),
    [sym_if] = STATE(148),
    [sym_do] = STATE(148),
    [sym_while] = STATE(148),
    [sym_fn] = STATE(148),
    [sym__shorthand] = STATE(148),
    [sym_short_quote] = STATE(148),
    [sym_short_splice] = STATE(148),
    [sym_short_quasiquote] = STATE(148),
    [sym_short_unquote] = STATE(148),
    [sym_short_fn] = STATE(148),
    [sym__literals] = STATE(148),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(148),
    [sym_long_buffer_literal] = STATE(148),
    [sym_number_literal] = STATE(148),
    [sym_bool_literal] = STATE(148),
    [sym_doc_str] = STATE(114),
    [sym__identifier] = STATE(148),
    [sym_scoped_symbol] = STATE(148),
    [aux_sym_def_repeat1] = STATE(53),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(367),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(45),
  },
  [22] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [23] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [24] = {
    [sym__expr] = STATE(137),
    [sym_tuple] = STATE(137),
    [sym_sqr_tuple] = STATE(137),
    [sym_array] = STATE(137),
    [sym_sqr_array] = STATE(137),
    [sym_struct] = STATE(137),
    [sym_table] = STATE(137),
    [sym__special_forms] = STATE(137),
    [sym_def] = STATE(137),
    [sym_var] = STATE(137),
    [sym_quote] = STATE(137),
    [sym_splice] = STATE(137),
    [sym_quasiquote] = STATE(137),
    [sym_unquote] = STATE(137),
    [sym_break] = STATE(137),
    [sym_set] = STATE(137),
    [sym_if] = STATE(137),
    [sym_do] = STATE(137),
    [sym_while] = STATE(137),
    [sym_fn] = STATE(137),
    [sym__shorthand] = STATE(137),
    [sym_short_quote] = STATE(137),
    [sym_short_splice] = STATE(137),
    [sym_short_quasiquote] = STATE(137),
    [sym_short_unquote] = STATE(137),
    [sym_short_fn] = STATE(137),
    [sym__literals] = STATE(137),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(137),
    [sym_long_buffer_literal] = STATE(137),
    [sym_number_literal] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_doc_str] = STATE(114),
    [sym__identifier] = STATE(137),
    [sym_scoped_symbol] = STATE(137),
    [aux_sym_def_repeat1] = STATE(21),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(373),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(45),
  },
  [25] = {
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
    [sym__shorthand] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_short_splice] = STATE(113),
    [sym_short_quasiquote] = STATE(113),
    [sym_short_unquote] = STATE(113),
    [sym_short_fn] = STATE(113),
    [sym__literals] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_long_str_literal] = STATE(113),
    [sym_buffer_literal] = STATE(113),
    [sym_long_buffer_literal] = STATE(113),
    [sym_number_literal] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym__identifier] = STATE(113),
    [sym_scoped_symbol] = STATE(113),
    [aux_sym_while_repeat1] = STATE(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(79),
    [sym_keyword] = ACTIONS(81),
    [sym_symbol] = ACTIONS(45),
  },
  [26] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [27] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [28] = {
    [sym__expr] = STATE(149),
    [sym_tuple] = STATE(149),
    [sym_sqr_tuple] = STATE(149),
    [sym_array] = STATE(149),
    [sym_sqr_array] = STATE(149),
    [sym_struct] = STATE(149),
    [sym_table] = STATE(149),
    [sym__special_forms] = STATE(149),
    [sym_def] = STATE(149),
    [sym_var] = STATE(149),
    [sym_quote] = STATE(149),
    [sym_splice] = STATE(149),
    [sym_quasiquote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_break] = STATE(149),
    [sym_set] = STATE(149),
    [sym_if] = STATE(149),
    [sym_do] = STATE(149),
    [sym_while] = STATE(149),
    [sym_fn] = STATE(149),
    [sym__shorthand] = STATE(149),
    [sym_short_quote] = STATE(149),
    [sym_short_splice] = STATE(149),
    [sym_short_quasiquote] = STATE(149),
    [sym_short_unquote] = STATE(149),
    [sym_short_fn] = STATE(149),
    [sym__literals] = STATE(149),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(149),
    [sym_long_buffer_literal] = STATE(149),
    [sym_number_literal] = STATE(149),
    [sym_bool_literal] = STATE(149),
    [sym_doc_str] = STATE(114),
    [sym__identifier] = STATE(149),
    [sym_scoped_symbol] = STATE(149),
    [aux_sym_def_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(381),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(45),
  },
  [29] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [30] = {
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
    [sym__shorthand] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_short_splice] = STATE(106),
    [sym_short_quasiquote] = STATE(106),
    [sym_short_unquote] = STATE(106),
    [sym_short_fn] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
    [aux_sym_tuple_repeat1] = STATE(14),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(73),
    [sym_keyword] = ACTIONS(75),
    [sym_symbol] = ACTIONS(45),
  },
  [31] = {
    [sym__expr] = STATE(150),
    [sym_tuple] = STATE(150),
    [sym_sqr_tuple] = STATE(150),
    [sym_array] = STATE(150),
    [sym_sqr_array] = STATE(150),
    [sym_struct] = STATE(150),
    [sym_table] = STATE(150),
    [sym__special_forms] = STATE(150),
    [sym_def] = STATE(150),
    [sym_var] = STATE(150),
    [sym_quote] = STATE(150),
    [sym_splice] = STATE(150),
    [sym_quasiquote] = STATE(150),
    [sym_unquote] = STATE(150),
    [sym_break] = STATE(150),
    [sym_set] = STATE(150),
    [sym_if] = STATE(150),
    [sym_do] = STATE(150),
    [sym_while] = STATE(150),
    [sym_fn] = STATE(150),
    [sym__shorthand] = STATE(150),
    [sym_short_quote] = STATE(150),
    [sym_short_splice] = STATE(150),
    [sym_short_quasiquote] = STATE(150),
    [sym_short_unquote] = STATE(150),
    [sym_short_fn] = STATE(150),
    [sym__literals] = STATE(150),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(150),
    [sym_long_buffer_literal] = STATE(150),
    [sym_number_literal] = STATE(150),
    [sym_bool_literal] = STATE(150),
    [sym__identifier] = STATE(150),
    [sym_scoped_symbol] = STATE(150),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(389),
    [sym_keyword] = ACTIONS(391),
    [sym_symbol] = ACTIONS(45),
  },
  [32] = {
    [sym__expr] = STATE(139),
    [sym_tuple] = STATE(139),
    [sym_sqr_tuple] = STATE(139),
    [sym_array] = STATE(139),
    [sym_sqr_array] = STATE(139),
    [sym_struct] = STATE(139),
    [sym_table] = STATE(139),
    [sym__special_forms] = STATE(139),
    [sym_def] = STATE(139),
    [sym_var] = STATE(139),
    [sym_quote] = STATE(139),
    [sym_splice] = STATE(139),
    [sym_quasiquote] = STATE(139),
    [sym_unquote] = STATE(139),
    [sym_break] = STATE(139),
    [sym_set] = STATE(139),
    [sym_if] = STATE(139),
    [sym_do] = STATE(139),
    [sym_while] = STATE(139),
    [sym_fn] = STATE(139),
    [sym__shorthand] = STATE(139),
    [sym_short_quote] = STATE(139),
    [sym_short_splice] = STATE(139),
    [sym_short_quasiquote] = STATE(139),
    [sym_short_unquote] = STATE(139),
    [sym_short_fn] = STATE(139),
    [sym__literals] = STATE(139),
    [sym_str_literal] = STATE(139),
    [sym_long_str_literal] = STATE(139),
    [sym_buffer_literal] = STATE(139),
    [sym_long_buffer_literal] = STATE(139),
    [sym_number_literal] = STATE(139),
    [sym_bool_literal] = STATE(139),
    [sym__identifier] = STATE(139),
    [sym_scoped_symbol] = STATE(139),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(395),
    [sym_keyword] = ACTIONS(397),
    [sym_symbol] = ACTIONS(45),
  },
  [33] = {
    [sym__expr] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_sqr_tuple] = STATE(24),
    [sym_array] = STATE(24),
    [sym_sqr_array] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_table] = STATE(24),
    [sym__special_forms] = STATE(24),
    [sym_def] = STATE(24),
    [sym_var] = STATE(24),
    [sym_quote] = STATE(24),
    [sym_splice] = STATE(24),
    [sym_quasiquote] = STATE(24),
    [sym_unquote] = STATE(24),
    [sym_break] = STATE(24),
    [sym_set] = STATE(24),
    [sym_if] = STATE(24),
    [sym_do] = STATE(24),
    [sym_while] = STATE(24),
    [sym_fn] = STATE(24),
    [sym__shorthand] = STATE(24),
    [sym_short_quote] = STATE(24),
    [sym_short_splice] = STATE(24),
    [sym_short_quasiquote] = STATE(24),
    [sym_short_unquote] = STATE(24),
    [sym_short_fn] = STATE(24),
    [sym__literals] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_long_str_literal] = STATE(24),
    [sym_buffer_literal] = STATE(24),
    [sym_long_buffer_literal] = STATE(24),
    [sym_number_literal] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym__identifier] = STATE(24),
    [sym_scoped_symbol] = STATE(24),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(399),
    [sym_keyword] = ACTIONS(401),
    [sym_symbol] = ACTIONS(45),
  },
  [34] = {
    [sym__expr] = STATE(59),
    [sym_tuple] = STATE(59),
    [sym_sqr_tuple] = STATE(59),
    [sym_array] = STATE(59),
    [sym_sqr_array] = STATE(59),
    [sym_struct] = STATE(59),
    [sym_table] = STATE(59),
    [sym__special_forms] = STATE(59),
    [sym_def] = STATE(59),
    [sym_var] = STATE(59),
    [sym_quote] = STATE(59),
    [sym_splice] = STATE(59),
    [sym_quasiquote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_break] = STATE(59),
    [sym_set] = STATE(59),
    [sym_if] = STATE(59),
    [sym_do] = STATE(59),
    [sym_while] = STATE(59),
    [sym_fn] = STATE(59),
    [sym__shorthand] = STATE(59),
    [sym_short_quote] = STATE(59),
    [sym_short_splice] = STATE(59),
    [sym_short_quasiquote] = STATE(59),
    [sym_short_unquote] = STATE(59),
    [sym_short_fn] = STATE(59),
    [sym__literals] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_long_str_literal] = STATE(59),
    [sym_buffer_literal] = STATE(59),
    [sym_long_buffer_literal] = STATE(59),
    [sym_number_literal] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym__identifier] = STATE(59),
    [sym_scoped_symbol] = STATE(59),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(403),
    [sym_keyword] = ACTIONS(405),
    [sym_symbol] = ACTIONS(45),
  },
  [35] = {
    [sym__expr] = STATE(25),
    [sym_tuple] = STATE(25),
    [sym_sqr_tuple] = STATE(25),
    [sym_array] = STATE(25),
    [sym_sqr_array] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_table] = STATE(25),
    [sym__special_forms] = STATE(25),
    [sym_def] = STATE(25),
    [sym_var] = STATE(25),
    [sym_quote] = STATE(25),
    [sym_splice] = STATE(25),
    [sym_quasiquote] = STATE(25),
    [sym_unquote] = STATE(25),
    [sym_break] = STATE(25),
    [sym_set] = STATE(25),
    [sym_if] = STATE(25),
    [sym_do] = STATE(25),
    [sym_while] = STATE(25),
    [sym_fn] = STATE(25),
    [sym__shorthand] = STATE(25),
    [sym_short_quote] = STATE(25),
    [sym_short_splice] = STATE(25),
    [sym_short_quasiquote] = STATE(25),
    [sym_short_unquote] = STATE(25),
    [sym_short_fn] = STATE(25),
    [sym__literals] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_long_str_literal] = STATE(25),
    [sym_buffer_literal] = STATE(25),
    [sym_long_buffer_literal] = STATE(25),
    [sym_number_literal] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym__identifier] = STATE(25),
    [sym_scoped_symbol] = STATE(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(407),
    [sym_keyword] = ACTIONS(409),
    [sym_symbol] = ACTIONS(45),
  },
  [36] = {
    [sym__expr] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_sqr_tuple] = STATE(57),
    [sym_array] = STATE(57),
    [sym_sqr_array] = STATE(57),
    [sym_struct] = STATE(57),
    [sym_table] = STATE(57),
    [sym__special_forms] = STATE(57),
    [sym_def] = STATE(57),
    [sym_var] = STATE(57),
    [sym_quote] = STATE(57),
    [sym_splice] = STATE(57),
    [sym_quasiquote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_break] = STATE(57),
    [sym_set] = STATE(57),
    [sym_if] = STATE(57),
    [sym_do] = STATE(57),
    [sym_while] = STATE(57),
    [sym_fn] = STATE(57),
    [sym__shorthand] = STATE(57),
    [sym_short_quote] = STATE(57),
    [sym_short_splice] = STATE(57),
    [sym_short_quasiquote] = STATE(57),
    [sym_short_unquote] = STATE(57),
    [sym_short_fn] = STATE(57),
    [sym__literals] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_long_str_literal] = STATE(57),
    [sym_buffer_literal] = STATE(57),
    [sym_long_buffer_literal] = STATE(57),
    [sym_number_literal] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym__identifier] = STATE(57),
    [sym_scoped_symbol] = STATE(57),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(411),
    [sym_keyword] = ACTIONS(413),
    [sym_symbol] = ACTIONS(45),
  },
  [37] = {
    [sym__expr] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_sqr_tuple] = STATE(48),
    [sym_array] = STATE(48),
    [sym_sqr_array] = STATE(48),
    [sym_struct] = STATE(48),
    [sym_table] = STATE(48),
    [sym__special_forms] = STATE(48),
    [sym_def] = STATE(48),
    [sym_var] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_splice] = STATE(48),
    [sym_quasiquote] = STATE(48),
    [sym_unquote] = STATE(48),
    [sym_break] = STATE(48),
    [sym_set] = STATE(48),
    [sym_if] = STATE(48),
    [sym_do] = STATE(48),
    [sym_while] = STATE(48),
    [sym_fn] = STATE(48),
    [sym__shorthand] = STATE(48),
    [sym_short_quote] = STATE(48),
    [sym_short_splice] = STATE(48),
    [sym_short_quasiquote] = STATE(48),
    [sym_short_unquote] = STATE(48),
    [sym_short_fn] = STATE(48),
    [sym__literals] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_long_str_literal] = STATE(48),
    [sym_buffer_literal] = STATE(48),
    [sym_long_buffer_literal] = STATE(48),
    [sym_number_literal] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym__identifier] = STATE(48),
    [sym_scoped_symbol] = STATE(48),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(415),
    [sym_keyword] = ACTIONS(417),
    [sym_symbol] = ACTIONS(45),
  },
  [38] = {
    [sym__expr] = STATE(56),
    [sym_tuple] = STATE(56),
    [sym_sqr_tuple] = STATE(56),
    [sym_array] = STATE(56),
    [sym_sqr_array] = STATE(56),
    [sym_struct] = STATE(56),
    [sym_table] = STATE(56),
    [sym__special_forms] = STATE(56),
    [sym_def] = STATE(56),
    [sym_var] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_splice] = STATE(56),
    [sym_quasiquote] = STATE(56),
    [sym_unquote] = STATE(56),
    [sym_break] = STATE(56),
    [sym_set] = STATE(56),
    [sym_if] = STATE(56),
    [sym_do] = STATE(56),
    [sym_while] = STATE(56),
    [sym_fn] = STATE(56),
    [sym__shorthand] = STATE(56),
    [sym_short_quote] = STATE(56),
    [sym_short_splice] = STATE(56),
    [sym_short_quasiquote] = STATE(56),
    [sym_short_unquote] = STATE(56),
    [sym_short_fn] = STATE(56),
    [sym__literals] = STATE(56),
    [sym_str_literal] = STATE(56),
    [sym_long_str_literal] = STATE(56),
    [sym_buffer_literal] = STATE(56),
    [sym_long_buffer_literal] = STATE(56),
    [sym_number_literal] = STATE(56),
    [sym_bool_literal] = STATE(56),
    [sym__identifier] = STATE(56),
    [sym_scoped_symbol] = STATE(56),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(419),
    [sym_keyword] = ACTIONS(421),
    [sym_symbol] = ACTIONS(45),
  },
  [39] = {
    [sym__expr] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym_sqr_tuple] = STATE(46),
    [sym_array] = STATE(46),
    [sym_sqr_array] = STATE(46),
    [sym_struct] = STATE(46),
    [sym_table] = STATE(46),
    [sym__special_forms] = STATE(46),
    [sym_def] = STATE(46),
    [sym_var] = STATE(46),
    [sym_quote] = STATE(46),
    [sym_splice] = STATE(46),
    [sym_quasiquote] = STATE(46),
    [sym_unquote] = STATE(46),
    [sym_break] = STATE(46),
    [sym_set] = STATE(46),
    [sym_if] = STATE(46),
    [sym_do] = STATE(46),
    [sym_while] = STATE(46),
    [sym_fn] = STATE(46),
    [sym__shorthand] = STATE(46),
    [sym_short_quote] = STATE(46),
    [sym_short_splice] = STATE(46),
    [sym_short_quasiquote] = STATE(46),
    [sym_short_unquote] = STATE(46),
    [sym_short_fn] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_long_str_literal] = STATE(46),
    [sym_buffer_literal] = STATE(46),
    [sym_long_buffer_literal] = STATE(46),
    [sym_number_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym__identifier] = STATE(46),
    [sym_scoped_symbol] = STATE(46),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(423),
    [sym_keyword] = ACTIONS(425),
    [sym_symbol] = ACTIONS(45),
  },
  [40] = {
    [sym__expr] = STATE(55),
    [sym_tuple] = STATE(55),
    [sym_sqr_tuple] = STATE(55),
    [sym_array] = STATE(55),
    [sym_sqr_array] = STATE(55),
    [sym_struct] = STATE(55),
    [sym_table] = STATE(55),
    [sym__special_forms] = STATE(55),
    [sym_def] = STATE(55),
    [sym_var] = STATE(55),
    [sym_quote] = STATE(55),
    [sym_splice] = STATE(55),
    [sym_quasiquote] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_break] = STATE(55),
    [sym_set] = STATE(55),
    [sym_if] = STATE(55),
    [sym_do] = STATE(55),
    [sym_while] = STATE(55),
    [sym_fn] = STATE(55),
    [sym__shorthand] = STATE(55),
    [sym_short_quote] = STATE(55),
    [sym_short_splice] = STATE(55),
    [sym_short_quasiquote] = STATE(55),
    [sym_short_unquote] = STATE(55),
    [sym_short_fn] = STATE(55),
    [sym__literals] = STATE(55),
    [sym_str_literal] = STATE(55),
    [sym_long_str_literal] = STATE(55),
    [sym_buffer_literal] = STATE(55),
    [sym_long_buffer_literal] = STATE(55),
    [sym_number_literal] = STATE(55),
    [sym_bool_literal] = STATE(55),
    [sym__identifier] = STATE(55),
    [sym_scoped_symbol] = STATE(55),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(427),
    [sym_keyword] = ACTIONS(429),
    [sym_symbol] = ACTIONS(45),
  },
  [41] = {
    [sym__expr] = STATE(136),
    [sym_tuple] = STATE(136),
    [sym_sqr_tuple] = STATE(136),
    [sym_array] = STATE(136),
    [sym_sqr_array] = STATE(136),
    [sym_struct] = STATE(136),
    [sym_table] = STATE(136),
    [sym__special_forms] = STATE(136),
    [sym_def] = STATE(136),
    [sym_var] = STATE(136),
    [sym_quote] = STATE(136),
    [sym_splice] = STATE(136),
    [sym_quasiquote] = STATE(136),
    [sym_unquote] = STATE(136),
    [sym_break] = STATE(136),
    [sym_set] = STATE(136),
    [sym_if] = STATE(136),
    [sym_do] = STATE(136),
    [sym_while] = STATE(136),
    [sym_fn] = STATE(136),
    [sym__shorthand] = STATE(136),
    [sym_short_quote] = STATE(136),
    [sym_short_splice] = STATE(136),
    [sym_short_quasiquote] = STATE(136),
    [sym_short_unquote] = STATE(136),
    [sym_short_fn] = STATE(136),
    [sym__literals] = STATE(136),
    [sym_str_literal] = STATE(136),
    [sym_long_str_literal] = STATE(136),
    [sym_buffer_literal] = STATE(136),
    [sym_long_buffer_literal] = STATE(136),
    [sym_number_literal] = STATE(136),
    [sym_bool_literal] = STATE(136),
    [sym__identifier] = STATE(136),
    [sym_scoped_symbol] = STATE(136),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(431),
    [sym_keyword] = ACTIONS(433),
    [sym_symbol] = ACTIONS(45),
  },
  [42] = {
    [sym__expr] = STATE(144),
    [sym_tuple] = STATE(144),
    [sym_sqr_tuple] = STATE(144),
    [sym_array] = STATE(144),
    [sym_sqr_array] = STATE(144),
    [sym_struct] = STATE(144),
    [sym_table] = STATE(144),
    [sym__special_forms] = STATE(144),
    [sym_def] = STATE(144),
    [sym_var] = STATE(144),
    [sym_quote] = STATE(144),
    [sym_splice] = STATE(144),
    [sym_quasiquote] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_break] = STATE(144),
    [sym_set] = STATE(144),
    [sym_if] = STATE(144),
    [sym_do] = STATE(144),
    [sym_while] = STATE(144),
    [sym_fn] = STATE(144),
    [sym__shorthand] = STATE(144),
    [sym_short_quote] = STATE(144),
    [sym_short_splice] = STATE(144),
    [sym_short_quasiquote] = STATE(144),
    [sym_short_unquote] = STATE(144),
    [sym_short_fn] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(435),
    [sym_keyword] = ACTIONS(437),
    [sym_symbol] = ACTIONS(45),
  },
  [43] = {
    [sym__expr] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_sqr_tuple] = STATE(111),
    [sym_array] = STATE(111),
    [sym_sqr_array] = STATE(111),
    [sym_struct] = STATE(111),
    [sym_table] = STATE(111),
    [sym__special_forms] = STATE(111),
    [sym_def] = STATE(111),
    [sym_var] = STATE(111),
    [sym_quote] = STATE(111),
    [sym_splice] = STATE(111),
    [sym_quasiquote] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_break] = STATE(111),
    [sym_set] = STATE(111),
    [sym_if] = STATE(111),
    [sym_do] = STATE(111),
    [sym_while] = STATE(111),
    [sym_fn] = STATE(111),
    [sym__shorthand] = STATE(111),
    [sym_short_quote] = STATE(111),
    [sym_short_splice] = STATE(111),
    [sym_short_quasiquote] = STATE(111),
    [sym_short_unquote] = STATE(111),
    [sym_short_fn] = STATE(111),
    [sym__literals] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_long_str_literal] = STATE(111),
    [sym_buffer_literal] = STATE(111),
    [sym_long_buffer_literal] = STATE(111),
    [sym_number_literal] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym__identifier] = STATE(111),
    [sym_scoped_symbol] = STATE(111),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(439),
    [sym_keyword] = ACTIONS(441),
    [sym_symbol] = ACTIONS(45),
  },
  [44] = {
    [sym__expr] = STATE(146),
    [sym_tuple] = STATE(146),
    [sym_sqr_tuple] = STATE(146),
    [sym_array] = STATE(146),
    [sym_sqr_array] = STATE(146),
    [sym_struct] = STATE(146),
    [sym_table] = STATE(146),
    [sym__special_forms] = STATE(146),
    [sym_def] = STATE(146),
    [sym_var] = STATE(146),
    [sym_quote] = STATE(146),
    [sym_splice] = STATE(146),
    [sym_quasiquote] = STATE(146),
    [sym_unquote] = STATE(146),
    [sym_break] = STATE(146),
    [sym_set] = STATE(146),
    [sym_if] = STATE(146),
    [sym_do] = STATE(146),
    [sym_while] = STATE(146),
    [sym_fn] = STATE(146),
    [sym__shorthand] = STATE(146),
    [sym_short_quote] = STATE(146),
    [sym_short_splice] = STATE(146),
    [sym_short_quasiquote] = STATE(146),
    [sym_short_unquote] = STATE(146),
    [sym_short_fn] = STATE(146),
    [sym__literals] = STATE(146),
    [sym_str_literal] = STATE(146),
    [sym_long_str_literal] = STATE(146),
    [sym_buffer_literal] = STATE(146),
    [sym_long_buffer_literal] = STATE(146),
    [sym_number_literal] = STATE(146),
    [sym_bool_literal] = STATE(146),
    [sym__identifier] = STATE(146),
    [sym_scoped_symbol] = STATE(146),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(443),
    [sym_keyword] = ACTIONS(445),
    [sym_symbol] = ACTIONS(45),
  },
  [45] = {
    [sym__expr] = STATE(147),
    [sym_tuple] = STATE(147),
    [sym_sqr_tuple] = STATE(147),
    [sym_array] = STATE(147),
    [sym_sqr_array] = STATE(147),
    [sym_struct] = STATE(147),
    [sym_table] = STATE(147),
    [sym__special_forms] = STATE(147),
    [sym_def] = STATE(147),
    [sym_var] = STATE(147),
    [sym_quote] = STATE(147),
    [sym_splice] = STATE(147),
    [sym_quasiquote] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_break] = STATE(147),
    [sym_set] = STATE(147),
    [sym_if] = STATE(147),
    [sym_do] = STATE(147),
    [sym_while] = STATE(147),
    [sym_fn] = STATE(147),
    [sym__shorthand] = STATE(147),
    [sym_short_quote] = STATE(147),
    [sym_short_splice] = STATE(147),
    [sym_short_quasiquote] = STATE(147),
    [sym_short_unquote] = STATE(147),
    [sym_short_fn] = STATE(147),
    [sym__literals] = STATE(147),
    [sym_str_literal] = STATE(147),
    [sym_long_str_literal] = STATE(147),
    [sym_buffer_literal] = STATE(147),
    [sym_long_buffer_literal] = STATE(147),
    [sym_number_literal] = STATE(147),
    [sym_bool_literal] = STATE(147),
    [sym__identifier] = STATE(147),
    [sym_scoped_symbol] = STATE(147),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(447),
    [sym_keyword] = ACTIONS(449),
    [sym_symbol] = ACTIONS(45),
  },
  [46] = {
    [sym__expr] = STATE(152),
    [sym_tuple] = STATE(152),
    [sym_sqr_tuple] = STATE(152),
    [sym_array] = STATE(152),
    [sym_sqr_array] = STATE(152),
    [sym_struct] = STATE(152),
    [sym_table] = STATE(152),
    [sym__special_forms] = STATE(152),
    [sym_def] = STATE(152),
    [sym_var] = STATE(152),
    [sym_quote] = STATE(152),
    [sym_splice] = STATE(152),
    [sym_quasiquote] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_break] = STATE(152),
    [sym_set] = STATE(152),
    [sym_if] = STATE(152),
    [sym_do] = STATE(152),
    [sym_while] = STATE(152),
    [sym_fn] = STATE(152),
    [sym__shorthand] = STATE(152),
    [sym_short_quote] = STATE(152),
    [sym_short_splice] = STATE(152),
    [sym_short_quasiquote] = STATE(152),
    [sym_short_unquote] = STATE(152),
    [sym_short_fn] = STATE(152),
    [sym__literals] = STATE(152),
    [sym_str_literal] = STATE(152),
    [sym_long_str_literal] = STATE(152),
    [sym_buffer_literal] = STATE(152),
    [sym_long_buffer_literal] = STATE(152),
    [sym_number_literal] = STATE(152),
    [sym_bool_literal] = STATE(152),
    [sym__identifier] = STATE(152),
    [sym_scoped_symbol] = STATE(152),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(451),
    [sym_keyword] = ACTIONS(453),
    [sym_symbol] = ACTIONS(45),
  },
  [47] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__special_forms] = STATE(58),
    [sym_def] = STATE(58),
    [sym_var] = STATE(58),
    [sym_quote] = STATE(58),
    [sym_splice] = STATE(58),
    [sym_quasiquote] = STATE(58),
    [sym_unquote] = STATE(58),
    [sym_break] = STATE(58),
    [sym_set] = STATE(58),
    [sym_if] = STATE(58),
    [sym_do] = STATE(58),
    [sym_while] = STATE(58),
    [sym_fn] = STATE(58),
    [sym__shorthand] = STATE(58),
    [sym_short_quote] = STATE(58),
    [sym_short_splice] = STATE(58),
    [sym_short_quasiquote] = STATE(58),
    [sym_short_unquote] = STATE(58),
    [sym_short_fn] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(455),
    [sym_keyword] = ACTIONS(457),
    [sym_symbol] = ACTIONS(45),
  },
  [48] = {
    [sym__expr] = STATE(31),
    [sym_tuple] = STATE(31),
    [sym_sqr_tuple] = STATE(31),
    [sym_array] = STATE(31),
    [sym_sqr_array] = STATE(31),
    [sym_struct] = STATE(31),
    [sym_table] = STATE(31),
    [sym__special_forms] = STATE(31),
    [sym_def] = STATE(31),
    [sym_var] = STATE(31),
    [sym_quote] = STATE(31),
    [sym_splice] = STATE(31),
    [sym_quasiquote] = STATE(31),
    [sym_unquote] = STATE(31),
    [sym_break] = STATE(31),
    [sym_set] = STATE(31),
    [sym_if] = STATE(31),
    [sym_do] = STATE(31),
    [sym_while] = STATE(31),
    [sym_fn] = STATE(31),
    [sym__shorthand] = STATE(31),
    [sym_short_quote] = STATE(31),
    [sym_short_splice] = STATE(31),
    [sym_short_quasiquote] = STATE(31),
    [sym_short_unquote] = STATE(31),
    [sym_short_fn] = STATE(31),
    [sym__literals] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_long_str_literal] = STATE(31),
    [sym_buffer_literal] = STATE(31),
    [sym_long_buffer_literal] = STATE(31),
    [sym_number_literal] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym__identifier] = STATE(31),
    [sym_scoped_symbol] = STATE(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(459),
    [sym_keyword] = ACTIONS(461),
    [sym_symbol] = ACTIONS(45),
  },
  [49] = {
    [sym__expr] = STATE(28),
    [sym_tuple] = STATE(28),
    [sym_sqr_tuple] = STATE(28),
    [sym_array] = STATE(28),
    [sym_sqr_array] = STATE(28),
    [sym_struct] = STATE(28),
    [sym_table] = STATE(28),
    [sym__special_forms] = STATE(28),
    [sym_def] = STATE(28),
    [sym_var] = STATE(28),
    [sym_quote] = STATE(28),
    [sym_splice] = STATE(28),
    [sym_quasiquote] = STATE(28),
    [sym_unquote] = STATE(28),
    [sym_break] = STATE(28),
    [sym_set] = STATE(28),
    [sym_if] = STATE(28),
    [sym_do] = STATE(28),
    [sym_while] = STATE(28),
    [sym_fn] = STATE(28),
    [sym__shorthand] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_short_splice] = STATE(28),
    [sym_short_quasiquote] = STATE(28),
    [sym_short_unquote] = STATE(28),
    [sym_short_fn] = STATE(28),
    [sym__literals] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_long_str_literal] = STATE(28),
    [sym_buffer_literal] = STATE(28),
    [sym_long_buffer_literal] = STATE(28),
    [sym_number_literal] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym__identifier] = STATE(28),
    [sym_scoped_symbol] = STATE(28),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(463),
    [sym_keyword] = ACTIONS(465),
    [sym_symbol] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_SLASH,
    ACTIONS(469), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(467), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [38] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_SLASH,
    ACTIONS(475), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(473), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [76] = 3,
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
    ACTIONS(477), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [111] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(491), 1,
      sym_keyword,
    STATE(53), 1,
      aux_sym_def_repeat1,
    STATE(114), 1,
      sym_doc_str,
    STATE(116), 2,
      sym_str_literal,
      sym_long_str_literal,
    ACTIONS(489), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(481), 13,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
  [158] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(494), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [193] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(498), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(502), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(506), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [298] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(510), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [333] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(514), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [368] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(518), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(522), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [438] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(526), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [473] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(530), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [508] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(534), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(538), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [578] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(542), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(546), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [648] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(550), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(554), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [718] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(558), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [753] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(564), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(562), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(566), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(570), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(576), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(574), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [893] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(578), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(582), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [963] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(588), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(586), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [998] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(590), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(594), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(600), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(598), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(602), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(606), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(610), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1208] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(616), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(614), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(620), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(618), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(622), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1313] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(626), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(632), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(630), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(636), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(634), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(638), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(644), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(642), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1488] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(646), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(650), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(656), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(654), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(660), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(658), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(662), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(668), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(666), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(672), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(670), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(674), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(467), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(680), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(678), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(684), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(682), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(688), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(686), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(690), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1943] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(694), 20,
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
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(698), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(702), 17,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(706), 16,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2077] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(712), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2109] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(716), 16,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(722), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(720), 17,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2175] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(724), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(730), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(728), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2239] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(732), 16,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(716), 16,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(710), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(706), 16,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT_LPAREN,
      anon_sym_AT_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE,
      sym_keyword,
  [2332] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    ACTIONS(738), 1,
      sym_keyword,
    ACTIONS(740), 1,
      sym_symbol,
    STATE(6), 1,
      sym_fn_parameters,
    STATE(134), 1,
      sym_doc_str,
    STATE(116), 2,
      sym_str_literal,
      sym_long_str_literal,
    STATE(118), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2365] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_fn_parameters,
    STATE(132), 1,
      sym_doc_str,
    STATE(116), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2388] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(746), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(748), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym_long_str_literal_repeat1,
  [2404] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
    ACTIONS(752), 1,
      aux_sym_str_literal_token1,
    ACTIONS(754), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym_str_literal_repeat1,
  [2420] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(758), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(760), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2436] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      aux_sym_str_literal_token1,
    ACTIONS(766), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym_str_literal_repeat1,
  [2452] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(760), 1,
      sym_escape_sequence,
    ACTIONS(768), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2468] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      aux_sym_str_literal_token1,
    ACTIONS(766), 1,
      sym_escape_sequence,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      aux_sym_str_literal_repeat1,
  [2484] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(772), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(774), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(776), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym_long_str_literal_repeat1,
  [2500] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    ACTIONS(780), 1,
      aux_sym_str_literal_token1,
    ACTIONS(782), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym_str_literal_repeat1,
  [2516] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_DQUOTE,
    ACTIONS(786), 1,
      aux_sym_str_literal_token1,
    ACTIONS(789), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym_str_literal_repeat1,
  [2532] = 5,
    ACTIONS(742), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(794), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(797), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2548] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    ACTIONS(802), 1,
      sym_symbol,
    STATE(129), 1,
      aux_sym_fn_parameters_repeat1,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    ACTIONS(807), 1,
      sym_symbol,
    STATE(129), 1,
      aux_sym_fn_parameters_repeat1,
  [2574] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_symbol,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_fn_parameters_repeat1,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_fn_parameters,
  [2597] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 2,
      anon_sym_RBRACK,
      sym_symbol,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_fn_parameters,
  [2615] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      sym_symbol,
    STATE(100), 1,
      sym_scoped_symbol,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [2667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      ts_builtin_sym_end,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [2709] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(50)] = 0,
  [SMALL_STATE(51)] = 38,
  [SMALL_STATE(52)] = 76,
  [SMALL_STATE(53)] = 111,
  [SMALL_STATE(54)] = 158,
  [SMALL_STATE(55)] = 193,
  [SMALL_STATE(56)] = 228,
  [SMALL_STATE(57)] = 263,
  [SMALL_STATE(58)] = 298,
  [SMALL_STATE(59)] = 333,
  [SMALL_STATE(60)] = 368,
  [SMALL_STATE(61)] = 403,
  [SMALL_STATE(62)] = 438,
  [SMALL_STATE(63)] = 473,
  [SMALL_STATE(64)] = 508,
  [SMALL_STATE(65)] = 543,
  [SMALL_STATE(66)] = 578,
  [SMALL_STATE(67)] = 613,
  [SMALL_STATE(68)] = 648,
  [SMALL_STATE(69)] = 683,
  [SMALL_STATE(70)] = 718,
  [SMALL_STATE(71)] = 753,
  [SMALL_STATE(72)] = 788,
  [SMALL_STATE(73)] = 823,
  [SMALL_STATE(74)] = 858,
  [SMALL_STATE(75)] = 893,
  [SMALL_STATE(76)] = 928,
  [SMALL_STATE(77)] = 963,
  [SMALL_STATE(78)] = 998,
  [SMALL_STATE(79)] = 1033,
  [SMALL_STATE(80)] = 1068,
  [SMALL_STATE(81)] = 1103,
  [SMALL_STATE(82)] = 1138,
  [SMALL_STATE(83)] = 1173,
  [SMALL_STATE(84)] = 1208,
  [SMALL_STATE(85)] = 1243,
  [SMALL_STATE(86)] = 1278,
  [SMALL_STATE(87)] = 1313,
  [SMALL_STATE(88)] = 1348,
  [SMALL_STATE(89)] = 1383,
  [SMALL_STATE(90)] = 1418,
  [SMALL_STATE(91)] = 1453,
  [SMALL_STATE(92)] = 1488,
  [SMALL_STATE(93)] = 1523,
  [SMALL_STATE(94)] = 1558,
  [SMALL_STATE(95)] = 1593,
  [SMALL_STATE(96)] = 1628,
  [SMALL_STATE(97)] = 1663,
  [SMALL_STATE(98)] = 1698,
  [SMALL_STATE(99)] = 1733,
  [SMALL_STATE(100)] = 1768,
  [SMALL_STATE(101)] = 1803,
  [SMALL_STATE(102)] = 1838,
  [SMALL_STATE(103)] = 1873,
  [SMALL_STATE(104)] = 1908,
  [SMALL_STATE(105)] = 1943,
  [SMALL_STATE(106)] = 1978,
  [SMALL_STATE(107)] = 2011,
  [SMALL_STATE(108)] = 2043,
  [SMALL_STATE(109)] = 2077,
  [SMALL_STATE(110)] = 2109,
  [SMALL_STATE(111)] = 2143,
  [SMALL_STATE(112)] = 2175,
  [SMALL_STATE(113)] = 2207,
  [SMALL_STATE(114)] = 2239,
  [SMALL_STATE(115)] = 2270,
  [SMALL_STATE(116)] = 2301,
  [SMALL_STATE(117)] = 2332,
  [SMALL_STATE(118)] = 2365,
  [SMALL_STATE(119)] = 2388,
  [SMALL_STATE(120)] = 2404,
  [SMALL_STATE(121)] = 2420,
  [SMALL_STATE(122)] = 2436,
  [SMALL_STATE(123)] = 2452,
  [SMALL_STATE(124)] = 2468,
  [SMALL_STATE(125)] = 2484,
  [SMALL_STATE(126)] = 2500,
  [SMALL_STATE(127)] = 2516,
  [SMALL_STATE(128)] = 2532,
  [SMALL_STATE(129)] = 2548,
  [SMALL_STATE(130)] = 2561,
  [SMALL_STATE(131)] = 2574,
  [SMALL_STATE(132)] = 2587,
  [SMALL_STATE(133)] = 2597,
  [SMALL_STATE(134)] = 2605,
  [SMALL_STATE(135)] = 2615,
  [SMALL_STATE(136)] = 2625,
  [SMALL_STATE(137)] = 2632,
  [SMALL_STATE(138)] = 2639,
  [SMALL_STATE(139)] = 2646,
  [SMALL_STATE(140)] = 2653,
  [SMALL_STATE(141)] = 2660,
  [SMALL_STATE(142)] = 2667,
  [SMALL_STATE(143)] = 2674,
  [SMALL_STATE(144)] = 2681,
  [SMALL_STATE(145)] = 2688,
  [SMALL_STATE(146)] = 2695,
  [SMALL_STATE(147)] = 2702,
  [SMALL_STATE(148)] = 2709,
  [SMALL_STATE(149)] = 2716,
  [SMALL_STATE(150)] = 2723,
  [SMALL_STATE(151)] = 2730,
  [SMALL_STATE(152)] = 2737,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(30),
  [11] = {.count = 1, .reusable = true}, SHIFT(22),
  [13] = {.count = 1, .reusable = true}, SHIFT(23),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(40),
  [21] = {.count = 1, .reusable = true}, SHIFT(38),
  [23] = {.count = 1, .reusable = true}, SHIFT(36),
  [25] = {.count = 1, .reusable = true}, SHIFT(47),
  [27] = {.count = 1, .reusable = true}, SHIFT(34),
  [29] = {.count = 1, .reusable = true}, SHIFT(120),
  [31] = {.count = 1, .reusable = true}, SHIFT(125),
  [33] = {.count = 1, .reusable = true}, SHIFT(126),
  [35] = {.count = 1, .reusable = true}, SHIFT(119),
  [37] = {.count = 1, .reusable = false}, SHIFT(105),
  [39] = {.count = 1, .reusable = false}, SHIFT(76),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = false}, SHIFT(51),
  [47] = {.count = 1, .reusable = true}, SHIFT(77),
  [49] = {.count = 1, .reusable = false}, SHIFT(49),
  [51] = {.count = 1, .reusable = false}, SHIFT(33),
  [53] = {.count = 1, .reusable = false}, SHIFT(45),
  [55] = {.count = 1, .reusable = false}, SHIFT(44),
  [57] = {.count = 1, .reusable = false}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(41),
  [61] = {.count = 1, .reusable = false}, SHIFT(32),
  [63] = {.count = 1, .reusable = false}, SHIFT(39),
  [65] = {.count = 1, .reusable = false}, SHIFT(37),
  [67] = {.count = 1, .reusable = false}, SHIFT(11),
  [69] = {.count = 1, .reusable = false}, SHIFT(35),
  [71] = {.count = 1, .reusable = false}, SHIFT(117),
  [73] = {.count = 1, .reusable = false}, SHIFT(106),
  [75] = {.count = 1, .reusable = true}, SHIFT(106),
  [77] = {.count = 1, .reusable = true}, SHIFT(71),
  [79] = {.count = 1, .reusable = false}, SHIFT(113),
  [81] = {.count = 1, .reusable = true}, SHIFT(113),
  [83] = {.count = 1, .reusable = true}, SHIFT(92),
  [85] = {.count = 1, .reusable = false}, SHIFT(43),
  [87] = {.count = 1, .reusable = true}, SHIFT(43),
  [89] = {.count = 1, .reusable = true}, SHIFT(90),
  [91] = {.count = 1, .reusable = true}, SHIFT(96),
  [93] = {.count = 1, .reusable = true}, SHIFT(80),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(2),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(30),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(22),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(23),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(7),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(8),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(40),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(38),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(36),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(34),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(120),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(125),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(126),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(119),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(105),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(76),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(106),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(106),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(51),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(30),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(22),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(23),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(7),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(8),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(40),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(38),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(36),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(47),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(34),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(120),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(125),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(126),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(119),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(105),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(76),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(43),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(43),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(51),
  [221] = {.count = 1, .reusable = true}, SHIFT(75),
  [223] = {.count = 1, .reusable = true}, SHIFT(72),
  [225] = {.count = 1, .reusable = true}, SHIFT(63),
  [227] = {.count = 1, .reusable = true}, SHIFT(86),
  [229] = {.count = 1, .reusable = false}, SHIFT(141),
  [231] = {.count = 1, .reusable = true}, SHIFT(110),
  [233] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [280] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [286] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [295] = {.count = 1, .reusable = true}, SHIFT(78),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(30),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(22),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(23),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(40),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(47),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(34),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(120),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(125),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(126),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(119),
  [344] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(105),
  [347] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(76),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(113),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(113),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(51),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1, .production_id = 5),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [363] = {.count = 1, .reusable = false}, SHIFT(16),
  [365] = {.count = 1, .reusable = true}, SHIFT(16),
  [367] = {.count = 1, .reusable = false}, SHIFT(148),
  [369] = {.count = 1, .reusable = true}, SHIFT(91),
  [371] = {.count = 1, .reusable = true}, SHIFT(85),
  [373] = {.count = 1, .reusable = false}, SHIFT(137),
  [375] = {.count = 1, .reusable = true}, SHIFT(83),
  [377] = {.count = 1, .reusable = true}, SHIFT(88),
  [379] = {.count = 1, .reusable = true}, SHIFT(87),
  [381] = {.count = 1, .reusable = false}, SHIFT(149),
  [383] = {.count = 1, .reusable = true}, SHIFT(84),
  [385] = {.count = 1, .reusable = true}, SHIFT(99),
  [387] = {.count = 1, .reusable = true}, SHIFT(79),
  [389] = {.count = 1, .reusable = false}, SHIFT(150),
  [391] = {.count = 1, .reusable = true}, SHIFT(150),
  [393] = {.count = 1, .reusable = true}, SHIFT(73),
  [395] = {.count = 1, .reusable = false}, SHIFT(139),
  [397] = {.count = 1, .reusable = true}, SHIFT(139),
  [399] = {.count = 1, .reusable = false}, SHIFT(24),
  [401] = {.count = 1, .reusable = true}, SHIFT(24),
  [403] = {.count = 1, .reusable = false}, SHIFT(59),
  [405] = {.count = 1, .reusable = true}, SHIFT(59),
  [407] = {.count = 1, .reusable = false}, SHIFT(25),
  [409] = {.count = 1, .reusable = true}, SHIFT(25),
  [411] = {.count = 1, .reusable = false}, SHIFT(57),
  [413] = {.count = 1, .reusable = true}, SHIFT(57),
  [415] = {.count = 1, .reusable = false}, SHIFT(48),
  [417] = {.count = 1, .reusable = true}, SHIFT(48),
  [419] = {.count = 1, .reusable = false}, SHIFT(56),
  [421] = {.count = 1, .reusable = true}, SHIFT(56),
  [423] = {.count = 1, .reusable = false}, SHIFT(46),
  [425] = {.count = 1, .reusable = true}, SHIFT(46),
  [427] = {.count = 1, .reusable = false}, SHIFT(55),
  [429] = {.count = 1, .reusable = true}, SHIFT(55),
  [431] = {.count = 1, .reusable = false}, SHIFT(136),
  [433] = {.count = 1, .reusable = true}, SHIFT(136),
  [435] = {.count = 1, .reusable = false}, SHIFT(144),
  [437] = {.count = 1, .reusable = true}, SHIFT(144),
  [439] = {.count = 1, .reusable = false}, SHIFT(111),
  [441] = {.count = 1, .reusable = true}, SHIFT(111),
  [443] = {.count = 1, .reusable = false}, SHIFT(146),
  [445] = {.count = 1, .reusable = true}, SHIFT(146),
  [447] = {.count = 1, .reusable = false}, SHIFT(147),
  [449] = {.count = 1, .reusable = true}, SHIFT(147),
  [451] = {.count = 1, .reusable = false}, SHIFT(152),
  [453] = {.count = 1, .reusable = true}, SHIFT(152),
  [455] = {.count = 1, .reusable = false}, SHIFT(58),
  [457] = {.count = 1, .reusable = true}, SHIFT(58),
  [459] = {.count = 1, .reusable = false}, SHIFT(31),
  [461] = {.count = 1, .reusable = true}, SHIFT(31),
  [463] = {.count = 1, .reusable = false}, SHIFT(28),
  [465] = {.count = 1, .reusable = true}, SHIFT(28),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [471] = {.count = 1, .reusable = true}, SHIFT(135),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__identifier, 1),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_do, 4, .production_id = 14),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_do, 4, .production_id = 14),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2, .production_id = 20),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2, .production_id = 20), SHIFT_REPEAT(120),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2, .production_id = 20), SHIFT_REPEAT(125),
  [489] = {.count = 1, .reusable = false}, REDUCE(aux_sym_def_repeat1, 2, .production_id = 20),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2, .production_id = 20), SHIFT_REPEAT(115),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_short_splice, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_short_splice, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_short_quasiquote, 2),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_short_quasiquote, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_short_unquote, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_short_unquote, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 7, .production_id = 34),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 7, .production_id = 34),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 33),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 33),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 32),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 32),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 31),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 31),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6, .production_id = 30),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6, .production_id = 30),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_var, 6, .production_id = 29),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym_var, 6, .production_id = 29),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_def, 6, .production_id = 29),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_def, 6, .production_id = 29),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 28),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 28),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 27),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 27),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_break, 3),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_break, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 26),
  [576] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 26),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5, .production_id = 23),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_while, 5, .production_id = 23),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5, .production_id = 22),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5, .production_id = 22),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_set, 5, .production_id = 21),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_set, 5, .production_id = 21),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_var, 5, .production_id = 19),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_var, 5, .production_id = 19),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_while, 4, .production_id = 16),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_while, 4, .production_id = 16),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 6),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 6),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 6),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 6),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_break, 4),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_break, 4),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 9),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 9),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 9),
  [648] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 9),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [652] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5, .production_id = 19),
  [656] = {.count = 1, .reusable = false}, REDUCE(sym_def, 5, .production_id = 19),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4, .production_id = 18),
  [664] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 4, .production_id = 18),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 4),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 4),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_quasiquote, 4),
  [684] = {.count = 1, .reusable = false}, REDUCE(sym_quasiquote, 4),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_splice, 4),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_splice, 4),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 4),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 4),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [696] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [698] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [700] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [702] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [704] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_doc_str, 1),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym__literals, 1),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_doc_str, 1),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 2),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 2),
  [716] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat1, 1, .production_id = 12),
  [718] = {.count = 1, .reusable = false}, REDUCE(aux_sym_def_repeat1, 1, .production_id = 12),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 3, .production_id = 24),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 3, .production_id = 24),
  [728] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [730] = {.count = 1, .reusable = false}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [732] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat1, 1, .production_id = 13),
  [734] = {.count = 1, .reusable = false}, REDUCE(aux_sym_def_repeat1, 1, .production_id = 13),
  [736] = {.count = 1, .reusable = true}, SHIFT(131),
  [738] = {.count = 1, .reusable = true}, SHIFT(118),
  [740] = {.count = 1, .reusable = true}, SHIFT(51),
  [742] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [744] = {.count = 1, .reusable = false}, SHIFT(66),
  [746] = {.count = 1, .reusable = false}, SHIFT(123),
  [748] = {.count = 1, .reusable = true}, SHIFT(123),
  [750] = {.count = 1, .reusable = false}, SHIFT(60),
  [752] = {.count = 1, .reusable = false}, SHIFT(124),
  [754] = {.count = 1, .reusable = true}, SHIFT(124),
  [756] = {.count = 1, .reusable = false}, SHIFT(95),
  [758] = {.count = 1, .reusable = false}, SHIFT(128),
  [760] = {.count = 1, .reusable = true}, SHIFT(128),
  [762] = {.count = 1, .reusable = false}, SHIFT(97),
  [764] = {.count = 1, .reusable = false}, SHIFT(127),
  [766] = {.count = 1, .reusable = true}, SHIFT(127),
  [768] = {.count = 1, .reusable = false}, SHIFT(98),
  [770] = {.count = 1, .reusable = false}, SHIFT(93),
  [772] = {.count = 1, .reusable = false}, SHIFT(62),
  [774] = {.count = 1, .reusable = false}, SHIFT(121),
  [776] = {.count = 1, .reusable = true}, SHIFT(121),
  [778] = {.count = 1, .reusable = false}, SHIFT(64),
  [780] = {.count = 1, .reusable = false}, SHIFT(122),
  [782] = {.count = 1, .reusable = true}, SHIFT(122),
  [784] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [786] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(127),
  [789] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(127),
  [792] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [794] = {.count = 2, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(128),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(128),
  [800] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 25),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 25), SHIFT_REPEAT(133),
  [805] = {.count = 1, .reusable = true}, SHIFT(112),
  [807] = {.count = 1, .reusable = true}, SHIFT(133),
  [809] = {.count = 1, .reusable = true}, SHIFT(109),
  [811] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 1, .production_id = 17),
  [813] = {.count = 1, .reusable = true}, SHIFT(50),
  [815] = {.count = 1, .reusable = true}, SHIFT(101),
  [817] = {.count = 1, .reusable = true}, SHIFT(82),
  [819] = {.count = 1, .reusable = true}, SHIFT(52),
  [821] = {.count = 1, .reusable = true}, SHIFT(89),
  [823] = {.count = 1, .reusable = true}, SHIFT(67),
  [825] = {.count = 1, .reusable = true}, SHIFT(70),
  [827] = {.count = 1, .reusable = true}, SHIFT(65),
  [829] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [831] = {.count = 1, .reusable = true}, SHIFT(102),
  [833] = {.count = 1, .reusable = true}, SHIFT(74),
  [835] = {.count = 1, .reusable = true}, SHIFT(103),
  [837] = {.count = 1, .reusable = true}, SHIFT(104),
  [839] = {.count = 1, .reusable = true}, SHIFT(69),
  [841] = {.count = 1, .reusable = true}, SHIFT(94),
  [843] = {.count = 1, .reusable = true}, SHIFT(68),
  [845] = {.count = 1, .reusable = true}, SHIFT(61),
  [847] = {.count = 1, .reusable = true}, SHIFT(81),
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
