#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
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
  anon_sym_SLASH = 36,
  sym_keyword = 37,
  sym_symbol = 38,
  sym_source_file = 39,
  sym__expr = 40,
  sym_tuple = 41,
  sym_sqr_tuple = 42,
  sym_array = 43,
  sym_sqr_array = 44,
  sym_struct = 45,
  sym_table = 46,
  sym__struct_tables_commom = 47,
  sym__special_forms = 48,
  sym_def = 49,
  sym_var = 50,
  sym_quote = 51,
  sym_splice = 52,
  sym_quasiquote = 53,
  sym_unquote = 54,
  sym_break = 55,
  sym_set = 56,
  sym_if = 57,
  sym_do = 58,
  sym_while = 59,
  sym_fn = 60,
  sym_fn_parameters = 61,
  sym__literals = 62,
  sym_str_literal = 63,
  sym_long_str_literal = 64,
  sym_buffer_literal = 65,
  sym_long_buffer_literal = 66,
  sym_number_literal = 67,
  sym_bool_literal = 68,
  sym__identifier = 69,
  sym_scoped_symbol = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_tuple_repeat1 = 72,
  aux_sym_struct_repeat1 = 73,
  aux_sym_do_repeat1 = 74,
  aux_sym_fn_parameters_repeat1 = 75,
  aux_sym_str_literal_repeat1 = 76,
  aux_sym_long_str_literal_repeat1 = 77,
  alias_sym_doc_str = 78,
  alias_sym_module_symbol = 79,
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
  [sym__literals] = "_literals",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_number_literal] = "number_literal",
  [sym_bool_literal] = "bool_literal",
  [sym__identifier] = "_identifier",
  [sym_scoped_symbol] = "scoped_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_fn_parameters_repeat1] = "fn_parameters_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
  [alias_sym_doc_str] = "doc_str",
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
  [sym__literals] = sym__literals,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym__identifier] = sym__identifier,
  [sym_scoped_symbol] = sym_scoped_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_do_repeat1] = aux_sym_do_repeat1,
  [aux_sym_fn_parameters_repeat1] = aux_sym_fn_parameters_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
  [alias_sym_doc_str] = alias_sym_doc_str,
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
  [alias_sym_doc_str] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module_symbol] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_condition = 1,
  field_doc_string = 2,
  field_else = 3,
  field_form = 4,
  field_item = 5,
  field_key = 6,
  field_l_value = 7,
  field_name = 8,
  field_parameter = 9,
  field_parameters = 10,
  field_path = 11,
  field_r_value = 12,
  field_then = 13,
  field_value = 14,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_doc_string] = "doc_string",
  [field_else] = "else",
  [field_form] = "form",
  [field_item] = "item",
  [field_key] = "key",
  [field_l_value] = "l_value",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_r_value] = "r_value",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[30] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 2},
  [22] = {.index = 35, .length = 2},
  [23] = {.index = 37, .length = 2},
  [24] = {.index = 39, .length = 3},
  [25] = {.index = 42, .length = 3},
  [26] = {.index = 45, .length = 3},
  [27] = {.index = 48, .length = 3},
  [28] = {.index = 51, .length = 3},
  [29] = {.index = 54, .length = 4},
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
    {field_path, 0},
  [16] =
    {field_form, 2, .inherited = true},
  [17] =
    {field_form, 0, .inherited = true},
    {field_form, 1, .inherited = true},
  [19] =
    {field_condition, 2},
  [20] =
    {field_parameter, 0},
  [21] =
    {field_parameters, 2},
  [22] =
    {field_name, 2},
    {field_value, 3},
  [24] =
    {field_l_value, 2},
    {field_r_value, 3},
  [26] =
    {field_condition, 2},
    {field_then, 3},
  [28] =
    {field_condition, 2},
    {field_form, 3, .inherited = true},
  [30] =
    {field_parameter, 1, .inherited = true},
  [31] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [33] =
    {field_form, 3, .inherited = true},
    {field_parameters, 2},
  [35] =
    {field_doc_string, 2},
    {field_parameters, 3},
  [37] =
    {field_name, 2},
    {field_parameters, 3},
  [39] =
    {field_doc_string, 3},
    {field_name, 2},
    {field_value, 4},
  [42] =
    {field_condition, 2},
    {field_else, 4},
    {field_then, 3},
  [45] =
    {field_doc_string, 2},
    {field_form, 4, .inherited = true},
    {field_parameters, 3},
  [48] =
    {field_form, 4, .inherited = true},
    {field_name, 2},
    {field_parameters, 3},
  [51] =
    {field_doc_string, 3},
    {field_name, 2},
    {field_parameters, 4},
  [54] =
    {field_doc_string, 3},
    {field_form, 5, .inherited = true},
    {field_name, 2},
    {field_parameters, 4},
};

static TSSymbol ts_alias_sequences[30][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_module_symbol,
  },
  [22] = {
    [2] = alias_sym_doc_str,
  },
  [24] = {
    [3] = alias_sym_doc_str,
  },
  [26] = {
    [2] = alias_sym_doc_str,
  },
  [28] = {
    [3] = alias_sym_doc_str,
  },
  [29] = {
    [3] = alias_sym_doc_str,
  },
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
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'q') ADVANCE(137);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'q') ADVANCE(137);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(36);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '\\') ||
          ('^' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(2)
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(28);
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
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'q') ADVANCE(137);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('<' <= lookahead && lookahead <= '~') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(29);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(27);
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
      if (lookahead == '#') ADVANCE(28);
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
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          lookahead == 'e') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
      if (lookahead == '&') ADVANCE(144);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(144);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
      if (lookahead == '&') ADVANCE(143);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(143);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(89);
      END_STATE();
    case 90:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(146);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(152);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(151);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(118);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(118);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 96:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(130);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(128);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(105);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(120);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 101:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 102:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 103:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 104:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 105:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 106:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 107:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(111);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(96);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 110:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 111:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(115);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(99);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(119);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(121);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 116:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 117:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(131);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 119:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(113);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(104);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(125);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(135);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(138);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(140);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(109);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 128:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(139);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(116);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(102);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 132:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(103);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(107);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(150);
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
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(97);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 138:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(101);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(17);
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
          ('g' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 145:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 146:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 149:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 151:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 152:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 153:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
      END_STATE();
    case 154:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(154);
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
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(128),
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
    [sym_symbol] = ACTIONS(35),
  },
  [2] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(28),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(39),
    [anon_sym_var] = ACTIONS(41),
    [anon_sym_quote] = ACTIONS(43),
    [anon_sym_splice] = ACTIONS(45),
    [anon_sym_quasiquote] = ACTIONS(47),
    [anon_sym_unquote] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_set] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_fn] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [3] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(99),
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
    [sym_scoped_symbol] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(67),
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
    [sym_nil_literal] = ACTIONS(69),
    [sym_keyword] = ACTIONS(71),
    [sym_symbol] = ACTIONS(35),
  },
  [4] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(99),
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
    [sym_scoped_symbol] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_AT_LPAREN] = ACTIONS(79),
    [anon_sym_AT_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_AT_LBRACE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(96),
    [anon_sym_AT_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(102),
    [aux_sym_number_literal_token1] = ACTIONS(105),
    [aux_sym_number_literal_token2] = ACTIONS(105),
    [aux_sym_number_literal_token3] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [sym_nil_literal] = ACTIONS(111),
    [sym_keyword] = ACTIONS(114),
    [sym_symbol] = ACTIONS(117),
  },
  [5] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_AT_LPAREN] = ACTIONS(128),
    [anon_sym_AT_LBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_AT_LBRACE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(143),
    [anon_sym_AT_DQUOTE] = ACTIONS(146),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(149),
    [aux_sym_number_literal_token1] = ACTIONS(152),
    [aux_sym_number_literal_token2] = ACTIONS(152),
    [aux_sym_number_literal_token3] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [sym_nil_literal] = ACTIONS(158),
    [sym_keyword] = ACTIONS(161),
    [sym_symbol] = ACTIONS(164),
  },
  [6] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(99),
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
    [sym_scoped_symbol] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(167),
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
    [sym_nil_literal] = ACTIONS(69),
    [sym_keyword] = ACTIONS(71),
    [sym_symbol] = ACTIONS(35),
  },
  [7] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(99),
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
    [sym_scoped_symbol] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(169),
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
    [sym_nil_literal] = ACTIONS(69),
    [sym_keyword] = ACTIONS(71),
    [sym_symbol] = ACTIONS(35),
  },
  [8] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
    [sym__struct_tables_commom] = STATE(99),
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
    [sym_scoped_symbol] = STATE(38),
    [aux_sym_struct_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(171),
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
    [sym_nil_literal] = ACTIONS(69),
    [sym_keyword] = ACTIONS(71),
    [sym_symbol] = ACTIONS(35),
  },
  [9] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(19),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [10] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(179),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [11] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(181),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [12] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(183),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [13] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(185),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [14] = {
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
    [sym_scoped_symbol] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_AT_LPAREN] = ACTIONS(195),
    [anon_sym_AT_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_AT_LBRACE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(210),
    [anon_sym_AT_DQUOTE] = ACTIONS(213),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(216),
    [aux_sym_number_literal_token1] = ACTIONS(219),
    [aux_sym_number_literal_token2] = ACTIONS(219),
    [aux_sym_number_literal_token3] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [sym_nil_literal] = ACTIONS(225),
    [sym_keyword] = ACTIONS(228),
    [sym_symbol] = ACTIONS(231),
  },
  [15] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(234),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [16] = {
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
    [sym_scoped_symbol] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(236),
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
    [sym_nil_literal] = ACTIONS(238),
    [sym_keyword] = ACTIONS(240),
    [sym_symbol] = ACTIONS(35),
  },
  [17] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(242),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [18] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(244),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [19] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(246),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [20] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(29),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(248),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [21] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(24),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(250),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [22] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(252),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [23] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(254),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [24] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(256),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [25] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(258),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [26] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(260),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [27] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(10),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(262),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [28] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_sqr_tuple] = STATE(97),
    [sym_array] = STATE(97),
    [sym_sqr_array] = STATE(97),
    [sym_struct] = STATE(97),
    [sym_table] = STATE(97),
    [sym__special_forms] = STATE(97),
    [sym_def] = STATE(97),
    [sym_var] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_splice] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_break] = STATE(97),
    [sym_set] = STATE(97),
    [sym_if] = STATE(97),
    [sym_do] = STATE(97),
    [sym_while] = STATE(97),
    [sym_fn] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_long_str_literal] = STATE(97),
    [sym_buffer_literal] = STATE(97),
    [sym_long_buffer_literal] = STATE(97),
    [sym_number_literal] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym_scoped_symbol] = STATE(97),
    [aux_sym_tuple_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(264),
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
    [sym_nil_literal] = ACTIONS(63),
    [sym_keyword] = ACTIONS(65),
    [sym_symbol] = ACTIONS(35),
  },
  [29] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(266),
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
    [sym_nil_literal] = ACTIONS(175),
    [sym_keyword] = ACTIONS(177),
    [sym_symbol] = ACTIONS(35),
  },
  [30] = {
    [sym__expr] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_sqr_tuple] = STATE(98),
    [sym_array] = STATE(98),
    [sym_sqr_array] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_table] = STATE(98),
    [sym__special_forms] = STATE(98),
    [sym_def] = STATE(98),
    [sym_var] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_splice] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_break] = STATE(98),
    [sym_set] = STATE(98),
    [sym_if] = STATE(98),
    [sym_do] = STATE(98),
    [sym_while] = STATE(98),
    [sym_fn] = STATE(98),
    [sym__literals] = STATE(98),
    [sym_str_literal] = STATE(98),
    [sym_long_str_literal] = STATE(98),
    [sym_buffer_literal] = STATE(98),
    [sym_long_buffer_literal] = STATE(98),
    [sym_number_literal] = STATE(98),
    [sym_bool_literal] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym_scoped_symbol] = STATE(98),
    [aux_sym_do_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(276),
    [anon_sym_AT_LBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_AT_LBRACE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(291),
    [anon_sym_AT_DQUOTE] = ACTIONS(294),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(297),
    [aux_sym_number_literal_token1] = ACTIONS(300),
    [aux_sym_number_literal_token2] = ACTIONS(300),
    [aux_sym_number_literal_token3] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [sym_nil_literal] = ACTIONS(306),
    [sym_keyword] = ACTIONS(309),
    [sym_symbol] = ACTIONS(312),
  },
  [31] = {
    [sym__expr] = STATE(124),
    [sym_tuple] = STATE(124),
    [sym_sqr_tuple] = STATE(124),
    [sym_array] = STATE(124),
    [sym_sqr_array] = STATE(124),
    [sym_struct] = STATE(124),
    [sym_table] = STATE(124),
    [sym__special_forms] = STATE(124),
    [sym_def] = STATE(124),
    [sym_var] = STATE(124),
    [sym_quote] = STATE(124),
    [sym_splice] = STATE(124),
    [sym_quasiquote] = STATE(124),
    [sym_unquote] = STATE(124),
    [sym_break] = STATE(124),
    [sym_set] = STATE(124),
    [sym_if] = STATE(124),
    [sym_do] = STATE(124),
    [sym_while] = STATE(124),
    [sym_fn] = STATE(124),
    [sym__literals] = STATE(124),
    [sym_str_literal] = STATE(124),
    [sym_long_str_literal] = STATE(124),
    [sym_buffer_literal] = STATE(124),
    [sym_long_buffer_literal] = STATE(124),
    [sym_number_literal] = STATE(124),
    [sym_bool_literal] = STATE(124),
    [sym__identifier] = STATE(124),
    [sym_scoped_symbol] = STATE(124),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(315),
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
    [sym_symbol] = ACTIONS(35),
  },
  [32] = {
    [sym__expr] = STATE(126),
    [sym_tuple] = STATE(126),
    [sym_sqr_tuple] = STATE(126),
    [sym_array] = STATE(126),
    [sym_sqr_array] = STATE(126),
    [sym_struct] = STATE(126),
    [sym_table] = STATE(126),
    [sym__special_forms] = STATE(126),
    [sym_def] = STATE(126),
    [sym_var] = STATE(126),
    [sym_quote] = STATE(126),
    [sym_splice] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_break] = STATE(126),
    [sym_set] = STATE(126),
    [sym_if] = STATE(126),
    [sym_do] = STATE(126),
    [sym_while] = STATE(126),
    [sym_fn] = STATE(126),
    [sym__literals] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_long_str_literal] = STATE(126),
    [sym_buffer_literal] = STATE(126),
    [sym_long_buffer_literal] = STATE(126),
    [sym_number_literal] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym__identifier] = STATE(126),
    [sym_scoped_symbol] = STATE(126),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(321),
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
    [sym_nil_literal] = ACTIONS(323),
    [sym_keyword] = ACTIONS(325),
    [sym_symbol] = ACTIONS(35),
  },
  [33] = {
    [sym__expr] = STATE(133),
    [sym_tuple] = STATE(133),
    [sym_sqr_tuple] = STATE(133),
    [sym_array] = STATE(133),
    [sym_sqr_array] = STATE(133),
    [sym_struct] = STATE(133),
    [sym_table] = STATE(133),
    [sym__special_forms] = STATE(133),
    [sym_def] = STATE(133),
    [sym_var] = STATE(133),
    [sym_quote] = STATE(133),
    [sym_splice] = STATE(133),
    [sym_quasiquote] = STATE(133),
    [sym_unquote] = STATE(133),
    [sym_break] = STATE(133),
    [sym_set] = STATE(133),
    [sym_if] = STATE(133),
    [sym_do] = STATE(133),
    [sym_while] = STATE(133),
    [sym_fn] = STATE(133),
    [sym__literals] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_long_str_literal] = STATE(133),
    [sym_buffer_literal] = STATE(133),
    [sym_long_buffer_literal] = STATE(133),
    [sym_number_literal] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym__identifier] = STATE(133),
    [sym_scoped_symbol] = STATE(133),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(321),
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
    [sym_nil_literal] = ACTIONS(327),
    [sym_keyword] = ACTIONS(329),
    [sym_symbol] = ACTIONS(35),
  },
  [34] = {
    [sym__expr] = STATE(127),
    [sym_tuple] = STATE(127),
    [sym_sqr_tuple] = STATE(127),
    [sym_array] = STATE(127),
    [sym_sqr_array] = STATE(127),
    [sym_struct] = STATE(127),
    [sym_table] = STATE(127),
    [sym__special_forms] = STATE(127),
    [sym_def] = STATE(127),
    [sym_var] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_splice] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_break] = STATE(127),
    [sym_set] = STATE(127),
    [sym_if] = STATE(127),
    [sym_do] = STATE(127),
    [sym_while] = STATE(127),
    [sym_fn] = STATE(127),
    [sym__literals] = STATE(127),
    [sym_str_literal] = STATE(127),
    [sym_long_str_literal] = STATE(127),
    [sym_buffer_literal] = STATE(127),
    [sym_long_buffer_literal] = STATE(127),
    [sym_number_literal] = STATE(127),
    [sym_bool_literal] = STATE(127),
    [sym__identifier] = STATE(127),
    [sym_scoped_symbol] = STATE(127),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(331),
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
    [sym_symbol] = ACTIONS(35),
  },
  [35] = {
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
    [sym__literals] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_long_str_literal] = STATE(20),
    [sym_buffer_literal] = STATE(20),
    [sym_long_buffer_literal] = STATE(20),
    [sym_number_literal] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym__identifier] = STATE(20),
    [sym_scoped_symbol] = STATE(20),
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
    [sym_symbol] = ACTIONS(35),
  },
  [36] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__special_forms] = STATE(44),
    [sym_def] = STATE(44),
    [sym_var] = STATE(44),
    [sym_quote] = STATE(44),
    [sym_splice] = STATE(44),
    [sym_quasiquote] = STATE(44),
    [sym_unquote] = STATE(44),
    [sym_break] = STATE(44),
    [sym_set] = STATE(44),
    [sym_if] = STATE(44),
    [sym_do] = STATE(44),
    [sym_while] = STATE(44),
    [sym_fn] = STATE(44),
    [sym__literals] = STATE(44),
    [sym_str_literal] = STATE(44),
    [sym_long_str_literal] = STATE(44),
    [sym_buffer_literal] = STATE(44),
    [sym_long_buffer_literal] = STATE(44),
    [sym_number_literal] = STATE(44),
    [sym_bool_literal] = STATE(44),
    [sym__identifier] = STATE(44),
    [sym_scoped_symbol] = STATE(44),
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
    [sym_symbol] = ACTIONS(35),
  },
  [37] = {
    [sym__expr] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_sqr_tuple] = STATE(43),
    [sym_array] = STATE(43),
    [sym_sqr_array] = STATE(43),
    [sym_struct] = STATE(43),
    [sym_table] = STATE(43),
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
    [sym__literals] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_long_str_literal] = STATE(43),
    [sym_buffer_literal] = STATE(43),
    [sym_long_buffer_literal] = STATE(43),
    [sym_number_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym_scoped_symbol] = STATE(43),
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
    [sym_symbol] = ACTIONS(35),
  },
  [38] = {
    [sym__expr] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym_sqr_tuple] = STATE(101),
    [sym_array] = STATE(101),
    [sym_sqr_array] = STATE(101),
    [sym_struct] = STATE(101),
    [sym_table] = STATE(101),
    [sym__special_forms] = STATE(101),
    [sym_def] = STATE(101),
    [sym_var] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_splice] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_break] = STATE(101),
    [sym_set] = STATE(101),
    [sym_if] = STATE(101),
    [sym_do] = STATE(101),
    [sym_while] = STATE(101),
    [sym_fn] = STATE(101),
    [sym__literals] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_long_str_literal] = STATE(101),
    [sym_buffer_literal] = STATE(101),
    [sym_long_buffer_literal] = STATE(101),
    [sym_number_literal] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym__identifier] = STATE(101),
    [sym_scoped_symbol] = STATE(101),
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
    [sym_symbol] = ACTIONS(35),
  },
  [39] = {
    [sym__expr] = STATE(129),
    [sym_tuple] = STATE(129),
    [sym_sqr_tuple] = STATE(129),
    [sym_array] = STATE(129),
    [sym_sqr_array] = STATE(129),
    [sym_struct] = STATE(129),
    [sym_table] = STATE(129),
    [sym__special_forms] = STATE(129),
    [sym_def] = STATE(129),
    [sym_var] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_splice] = STATE(129),
    [sym_quasiquote] = STATE(129),
    [sym_unquote] = STATE(129),
    [sym_break] = STATE(129),
    [sym_set] = STATE(129),
    [sym_if] = STATE(129),
    [sym_do] = STATE(129),
    [sym_while] = STATE(129),
    [sym_fn] = STATE(129),
    [sym__literals] = STATE(129),
    [sym_str_literal] = STATE(129),
    [sym_long_str_literal] = STATE(129),
    [sym_buffer_literal] = STATE(129),
    [sym_long_buffer_literal] = STATE(129),
    [sym_number_literal] = STATE(129),
    [sym_bool_literal] = STATE(129),
    [sym__identifier] = STATE(129),
    [sym_scoped_symbol] = STATE(129),
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
    [sym_nil_literal] = ACTIONS(353),
    [sym_keyword] = ACTIONS(355),
    [sym_symbol] = ACTIONS(35),
  },
  [40] = {
    [sym__expr] = STATE(130),
    [sym_tuple] = STATE(130),
    [sym_sqr_tuple] = STATE(130),
    [sym_array] = STATE(130),
    [sym_sqr_array] = STATE(130),
    [sym_struct] = STATE(130),
    [sym_table] = STATE(130),
    [sym__special_forms] = STATE(130),
    [sym_def] = STATE(130),
    [sym_var] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_splice] = STATE(130),
    [sym_quasiquote] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_break] = STATE(130),
    [sym_set] = STATE(130),
    [sym_if] = STATE(130),
    [sym_do] = STATE(130),
    [sym_while] = STATE(130),
    [sym_fn] = STATE(130),
    [sym__literals] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_long_str_literal] = STATE(130),
    [sym_buffer_literal] = STATE(130),
    [sym_long_buffer_literal] = STATE(130),
    [sym_number_literal] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym__identifier] = STATE(130),
    [sym_scoped_symbol] = STATE(130),
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
    [sym_nil_literal] = ACTIONS(357),
    [sym_keyword] = ACTIONS(359),
    [sym_symbol] = ACTIONS(35),
  },
  [41] = {
    [sym__expr] = STATE(131),
    [sym_tuple] = STATE(131),
    [sym_sqr_tuple] = STATE(131),
    [sym_array] = STATE(131),
    [sym_sqr_array] = STATE(131),
    [sym_struct] = STATE(131),
    [sym_table] = STATE(131),
    [sym__special_forms] = STATE(131),
    [sym_def] = STATE(131),
    [sym_var] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_splice] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_break] = STATE(131),
    [sym_set] = STATE(131),
    [sym_if] = STATE(131),
    [sym_do] = STATE(131),
    [sym_while] = STATE(131),
    [sym_fn] = STATE(131),
    [sym__literals] = STATE(131),
    [sym_str_literal] = STATE(131),
    [sym_long_str_literal] = STATE(131),
    [sym_buffer_literal] = STATE(131),
    [sym_long_buffer_literal] = STATE(131),
    [sym_number_literal] = STATE(131),
    [sym_bool_literal] = STATE(131),
    [sym__identifier] = STATE(131),
    [sym_scoped_symbol] = STATE(131),
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
    [sym_nil_literal] = ACTIONS(361),
    [sym_keyword] = ACTIONS(363),
    [sym_symbol] = ACTIONS(35),
  },
  [42] = {
    [sym__expr] = STATE(132),
    [sym_tuple] = STATE(132),
    [sym_sqr_tuple] = STATE(132),
    [sym_array] = STATE(132),
    [sym_sqr_array] = STATE(132),
    [sym_struct] = STATE(132),
    [sym_table] = STATE(132),
    [sym__special_forms] = STATE(132),
    [sym_def] = STATE(132),
    [sym_var] = STATE(132),
    [sym_quote] = STATE(132),
    [sym_splice] = STATE(132),
    [sym_quasiquote] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_break] = STATE(132),
    [sym_set] = STATE(132),
    [sym_if] = STATE(132),
    [sym_do] = STATE(132),
    [sym_while] = STATE(132),
    [sym_fn] = STATE(132),
    [sym__literals] = STATE(132),
    [sym_str_literal] = STATE(132),
    [sym_long_str_literal] = STATE(132),
    [sym_buffer_literal] = STATE(132),
    [sym_long_buffer_literal] = STATE(132),
    [sym_number_literal] = STATE(132),
    [sym_bool_literal] = STATE(132),
    [sym__identifier] = STATE(132),
    [sym_scoped_symbol] = STATE(132),
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
    [sym_nil_literal] = ACTIONS(365),
    [sym_keyword] = ACTIONS(367),
    [sym_symbol] = ACTIONS(35),
  },
  [43] = {
    [sym__expr] = STATE(125),
    [sym_tuple] = STATE(125),
    [sym_sqr_tuple] = STATE(125),
    [sym_array] = STATE(125),
    [sym_sqr_array] = STATE(125),
    [sym_struct] = STATE(125),
    [sym_table] = STATE(125),
    [sym__special_forms] = STATE(125),
    [sym_def] = STATE(125),
    [sym_var] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_splice] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_break] = STATE(125),
    [sym_set] = STATE(125),
    [sym_if] = STATE(125),
    [sym_do] = STATE(125),
    [sym_while] = STATE(125),
    [sym_fn] = STATE(125),
    [sym__literals] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_long_str_literal] = STATE(125),
    [sym_buffer_literal] = STATE(125),
    [sym_long_buffer_literal] = STATE(125),
    [sym_number_literal] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym__identifier] = STATE(125),
    [sym_scoped_symbol] = STATE(125),
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
    [sym_nil_literal] = ACTIONS(369),
    [sym_keyword] = ACTIONS(371),
    [sym_symbol] = ACTIONS(35),
  },
  [44] = {
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
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_AT_DQUOTE] = ACTIONS(23),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(25),
    [aux_sym_number_literal_token1] = ACTIONS(27),
    [aux_sym_number_literal_token2] = ACTIONS(27),
    [aux_sym_number_literal_token3] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_nil_literal] = ACTIONS(373),
    [sym_keyword] = ACTIONS(375),
    [sym_symbol] = ACTIONS(35),
  },
  [45] = {
    [sym__expr] = STATE(135),
    [sym_tuple] = STATE(135),
    [sym_sqr_tuple] = STATE(135),
    [sym_array] = STATE(135),
    [sym_sqr_array] = STATE(135),
    [sym_struct] = STATE(135),
    [sym_table] = STATE(135),
    [sym__special_forms] = STATE(135),
    [sym_def] = STATE(135),
    [sym_var] = STATE(135),
    [sym_quote] = STATE(135),
    [sym_splice] = STATE(135),
    [sym_quasiquote] = STATE(135),
    [sym_unquote] = STATE(135),
    [sym_break] = STATE(135),
    [sym_set] = STATE(135),
    [sym_if] = STATE(135),
    [sym_do] = STATE(135),
    [sym_while] = STATE(135),
    [sym_fn] = STATE(135),
    [sym__literals] = STATE(135),
    [sym_str_literal] = STATE(33),
    [sym_long_str_literal] = STATE(33),
    [sym_buffer_literal] = STATE(135),
    [sym_long_buffer_literal] = STATE(135),
    [sym_number_literal] = STATE(135),
    [sym_bool_literal] = STATE(135),
    [sym__identifier] = STATE(135),
    [sym_scoped_symbol] = STATE(135),
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
    [sym_nil_literal] = ACTIONS(377),
    [sym_keyword] = ACTIONS(379),
    [sym_symbol] = ACTIONS(35),
  },
  [46] = {
    [sym__expr] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_sqr_tuple] = STATE(134),
    [sym_array] = STATE(134),
    [sym_sqr_array] = STATE(134),
    [sym_struct] = STATE(134),
    [sym_table] = STATE(134),
    [sym__special_forms] = STATE(134),
    [sym_def] = STATE(134),
    [sym_var] = STATE(134),
    [sym_quote] = STATE(134),
    [sym_splice] = STATE(134),
    [sym_quasiquote] = STATE(134),
    [sym_unquote] = STATE(134),
    [sym_break] = STATE(134),
    [sym_set] = STATE(134),
    [sym_if] = STATE(134),
    [sym_do] = STATE(134),
    [sym_while] = STATE(134),
    [sym_fn] = STATE(134),
    [sym__literals] = STATE(134),
    [sym_str_literal] = STATE(32),
    [sym_long_str_literal] = STATE(32),
    [sym_buffer_literal] = STATE(134),
    [sym_long_buffer_literal] = STATE(134),
    [sym_number_literal] = STATE(134),
    [sym_bool_literal] = STATE(134),
    [sym__identifier] = STATE(134),
    [sym_scoped_symbol] = STATE(134),
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
    [sym_nil_literal] = ACTIONS(381),
    [sym_keyword] = ACTIONS(383),
    [sym_symbol] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      anon_sym_SLASH,
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
  [33] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      anon_sym_SLASH,
    ACTIONS(393), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(391), 15,
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
  [66] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(395), 15,
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
  [96] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(399), 15,
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
  [126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(403), 15,
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
  [156] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(407), 15,
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
  [186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(411), 15,
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
  [216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(415), 15,
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
  [246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(419), 15,
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
  [276] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(423), 15,
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
  [306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(427), 15,
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
  [336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(431), 15,
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
  [366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(435), 15,
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
  [396] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(439), 15,
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
  [426] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(445), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(443), 15,
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
  [456] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(447), 15,
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
  [486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(453), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(451), 15,
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
  [516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(455), 15,
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
  [546] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(459), 15,
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
  [576] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(465), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(463), 15,
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
  [606] = 3,
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
    ACTIONS(467), 15,
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
  [636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(473), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(471), 15,
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
  [666] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(475), 15,
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
  [696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(479), 15,
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
  [726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(483), 15,
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
  [756] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(487), 15,
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
  [786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(493), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(491), 15,
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
  [816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(495), 15,
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
  [846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(499), 15,
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
  [876] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(505), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(503), 15,
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
  [906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(507), 15,
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
  [936] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(513), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(511), 15,
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
  [966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(515), 15,
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
  [996] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(519), 15,
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
  [1026] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(523), 15,
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
  [1056] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(527), 15,
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
  [1086] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(533), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(531), 15,
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
  [1116] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(535), 15,
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
  [1146] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(539), 15,
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
  [1176] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(543), 15,
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
  [1206] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(547), 15,
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
  [1236] = 3,
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
  [1266] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(551), 15,
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
  [1296] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(557), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(555), 15,
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
  [1326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(559), 15,
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
  [1356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(563), 15,
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
  [1386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(569), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(567), 15,
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
  [1416] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(571), 15,
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
  [1446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(575), 15,
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
  [1476] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(579), 15,
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
  [1506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(583), 13,
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
  [1534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(587), 12,
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
  [1561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(591), 12,
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
  [1588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(595), 12,
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
  [1615] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(599), 12,
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
  [1642] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(605), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(603), 12,
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
  [1669] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 1,
      sym_keyword,
    ACTIONS(611), 1,
      sym_symbol,
    STATE(9), 1,
      sym_fn_parameters,
    STATE(104), 2,
      sym__identifier,
      sym_scoped_symbol,
    STATE(120), 2,
      sym_str_literal,
      sym_long_str_literal,
  [1699] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_fn_parameters,
    STATE(123), 2,
      sym_str_literal,
      sym_long_str_literal,
  [1719] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      aux_sym_str_literal_token1,
    ACTIONS(619), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym_str_literal_repeat1,
  [1735] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(623), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(625), 1,
      sym_escape_sequence,
    STATE(107), 1,
      aux_sym_long_str_literal_repeat1,
  [1751] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(629), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(632), 1,
      sym_escape_sequence,
    STATE(107), 1,
      aux_sym_long_str_literal_repeat1,
  [1767] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      aux_sym_str_literal_token1,
    ACTIONS(639), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_str_literal_repeat1,
  [1783] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    ACTIONS(643), 1,
      aux_sym_str_literal_token1,
    ACTIONS(646), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym_str_literal_repeat1,
  [1799] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      aux_sym_str_literal_token1,
    ACTIONS(619), 1,
      sym_escape_sequence,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_str_literal_repeat1,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      sym_symbol,
    ACTIONS(651), 1,
      sym_keyword,
    STATE(46), 2,
      sym__identifier,
      sym_scoped_symbol,
  [1829] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      sym_symbol,
    ACTIONS(653), 1,
      sym_keyword,
    STATE(45), 2,
      sym__identifier,
      sym_scoped_symbol,
  [1843] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(623), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(625), 1,
      sym_escape_sequence,
    ACTIONS(655), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(107), 1,
      aux_sym_long_str_literal_repeat1,
  [1859] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(659), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(661), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym_long_str_literal_repeat1,
  [1875] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(665), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(667), 1,
      sym_escape_sequence,
    STATE(106), 1,
      aux_sym_long_str_literal_repeat1,
  [1891] = 5,
    ACTIONS(613), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    ACTIONS(671), 1,
      aux_sym_str_literal_token1,
    ACTIONS(673), 1,
      sym_escape_sequence,
    STATE(105), 1,
      aux_sym_str_literal_repeat1,
  [1907] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    ACTIONS(677), 1,
      sym_symbol,
    STATE(118), 1,
      aux_sym_fn_parameters_repeat1,
  [1920] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      sym_symbol,
    STATE(118), 1,
      aux_sym_fn_parameters_repeat1,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      sym_symbol,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_fn_parameters_repeat1,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_fn_parameters,
  [1956] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(686), 2,
      anon_sym_RBRACK,
      sym_symbol,
  [1964] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      sym_symbol,
    STATE(88), 1,
      sym_scoped_symbol,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_fn_parameters,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 33,
  [SMALL_STATE(49)] = 66,
  [SMALL_STATE(50)] = 96,
  [SMALL_STATE(51)] = 126,
  [SMALL_STATE(52)] = 156,
  [SMALL_STATE(53)] = 186,
  [SMALL_STATE(54)] = 216,
  [SMALL_STATE(55)] = 246,
  [SMALL_STATE(56)] = 276,
  [SMALL_STATE(57)] = 306,
  [SMALL_STATE(58)] = 336,
  [SMALL_STATE(59)] = 366,
  [SMALL_STATE(60)] = 396,
  [SMALL_STATE(61)] = 426,
  [SMALL_STATE(62)] = 456,
  [SMALL_STATE(63)] = 486,
  [SMALL_STATE(64)] = 516,
  [SMALL_STATE(65)] = 546,
  [SMALL_STATE(66)] = 576,
  [SMALL_STATE(67)] = 606,
  [SMALL_STATE(68)] = 636,
  [SMALL_STATE(69)] = 666,
  [SMALL_STATE(70)] = 696,
  [SMALL_STATE(71)] = 726,
  [SMALL_STATE(72)] = 756,
  [SMALL_STATE(73)] = 786,
  [SMALL_STATE(74)] = 816,
  [SMALL_STATE(75)] = 846,
  [SMALL_STATE(76)] = 876,
  [SMALL_STATE(77)] = 906,
  [SMALL_STATE(78)] = 936,
  [SMALL_STATE(79)] = 966,
  [SMALL_STATE(80)] = 996,
  [SMALL_STATE(81)] = 1026,
  [SMALL_STATE(82)] = 1056,
  [SMALL_STATE(83)] = 1086,
  [SMALL_STATE(84)] = 1116,
  [SMALL_STATE(85)] = 1146,
  [SMALL_STATE(86)] = 1176,
  [SMALL_STATE(87)] = 1206,
  [SMALL_STATE(88)] = 1236,
  [SMALL_STATE(89)] = 1266,
  [SMALL_STATE(90)] = 1296,
  [SMALL_STATE(91)] = 1326,
  [SMALL_STATE(92)] = 1356,
  [SMALL_STATE(93)] = 1386,
  [SMALL_STATE(94)] = 1416,
  [SMALL_STATE(95)] = 1446,
  [SMALL_STATE(96)] = 1476,
  [SMALL_STATE(97)] = 1506,
  [SMALL_STATE(98)] = 1534,
  [SMALL_STATE(99)] = 1561,
  [SMALL_STATE(100)] = 1588,
  [SMALL_STATE(101)] = 1615,
  [SMALL_STATE(102)] = 1642,
  [SMALL_STATE(103)] = 1669,
  [SMALL_STATE(104)] = 1699,
  [SMALL_STATE(105)] = 1719,
  [SMALL_STATE(106)] = 1735,
  [SMALL_STATE(107)] = 1751,
  [SMALL_STATE(108)] = 1767,
  [SMALL_STATE(109)] = 1783,
  [SMALL_STATE(110)] = 1799,
  [SMALL_STATE(111)] = 1815,
  [SMALL_STATE(112)] = 1829,
  [SMALL_STATE(113)] = 1843,
  [SMALL_STATE(114)] = 1859,
  [SMALL_STATE(115)] = 1875,
  [SMALL_STATE(116)] = 1891,
  [SMALL_STATE(117)] = 1907,
  [SMALL_STATE(118)] = 1920,
  [SMALL_STATE(119)] = 1933,
  [SMALL_STATE(120)] = 1946,
  [SMALL_STATE(121)] = 1956,
  [SMALL_STATE(122)] = 1964,
  [SMALL_STATE(123)] = 1974,
  [SMALL_STATE(124)] = 1984,
  [SMALL_STATE(125)] = 1991,
  [SMALL_STATE(126)] = 1998,
  [SMALL_STATE(127)] = 2005,
  [SMALL_STATE(128)] = 2012,
  [SMALL_STATE(129)] = 2019,
  [SMALL_STATE(130)] = 2026,
  [SMALL_STATE(131)] = 2033,
  [SMALL_STATE(132)] = 2040,
  [SMALL_STATE(133)] = 2047,
  [SMALL_STATE(134)] = 2054,
  [SMALL_STATE(135)] = 2061,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(22),
  [11] = {.count = 1, .reusable = true}, SHIFT(23),
  [13] = {.count = 1, .reusable = true}, SHIFT(27),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(116),
  [21] = {.count = 1, .reusable = true}, SHIFT(115),
  [23] = {.count = 1, .reusable = true}, SHIFT(108),
  [25] = {.count = 1, .reusable = true}, SHIFT(114),
  [27] = {.count = 1, .reusable = false}, SHIFT(54),
  [29] = {.count = 1, .reusable = false}, SHIFT(63),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = false}, SHIFT(48),
  [37] = {.count = 1, .reusable = true}, SHIFT(67),
  [39] = {.count = 1, .reusable = false}, SHIFT(112),
  [41] = {.count = 1, .reusable = false}, SHIFT(111),
  [43] = {.count = 1, .reusable = false}, SHIFT(42),
  [45] = {.count = 1, .reusable = false}, SHIFT(41),
  [47] = {.count = 1, .reusable = false}, SHIFT(40),
  [49] = {.count = 1, .reusable = false}, SHIFT(39),
  [51] = {.count = 1, .reusable = false}, SHIFT(34),
  [53] = {.count = 1, .reusable = false}, SHIFT(37),
  [55] = {.count = 1, .reusable = false}, SHIFT(36),
  [57] = {.count = 1, .reusable = false}, SHIFT(21),
  [59] = {.count = 1, .reusable = false}, SHIFT(35),
  [61] = {.count = 1, .reusable = false}, SHIFT(103),
  [63] = {.count = 1, .reusable = false}, SHIFT(97),
  [65] = {.count = 1, .reusable = true}, SHIFT(97),
  [67] = {.count = 1, .reusable = true}, SHIFT(78),
  [69] = {.count = 1, .reusable = false}, SHIFT(38),
  [71] = {.count = 1, .reusable = true}, SHIFT(38),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(22),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(23),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(27),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(6),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(7),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(116),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(115),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(108),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(114),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(54),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(63),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(38),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(38),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 8), SHIFT_REPEAT(48),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(2),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(22),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(23),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(27),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(6),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(7),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(116),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(115),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(108),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(114),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(54),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(63),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(97),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(97),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 5), SHIFT_REPEAT(48),
  [167] = {.count = 1, .reusable = true}, SHIFT(90),
  [169] = {.count = 1, .reusable = true}, SHIFT(79),
  [171] = {.count = 1, .reusable = true}, SHIFT(80),
  [173] = {.count = 1, .reusable = true}, SHIFT(77),
  [175] = {.count = 1, .reusable = false}, SHIFT(98),
  [177] = {.count = 1, .reusable = true}, SHIFT(98),
  [179] = {.count = 1, .reusable = true}, SHIFT(76),
  [181] = {.count = 1, .reusable = true}, SHIFT(52),
  [183] = {.count = 1, .reusable = true}, SHIFT(56),
  [185] = {.count = 1, .reusable = true}, SHIFT(58),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [234] = {.count = 1, .reusable = true}, SHIFT(59),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [238] = {.count = 1, .reusable = false}, SHIFT(14),
  [240] = {.count = 1, .reusable = true}, SHIFT(14),
  [242] = {.count = 1, .reusable = true}, SHIFT(65),
  [244] = {.count = 1, .reusable = true}, SHIFT(68),
  [246] = {.count = 1, .reusable = true}, SHIFT(69),
  [248] = {.count = 1, .reusable = true}, SHIFT(49),
  [250] = {.count = 1, .reusable = true}, SHIFT(66),
  [252] = {.count = 1, .reusable = true}, SHIFT(84),
  [254] = {.count = 1, .reusable = true}, SHIFT(89),
  [256] = {.count = 1, .reusable = true}, SHIFT(87),
  [258] = {.count = 1, .reusable = true}, SHIFT(75),
  [260] = {.count = 1, .reusable = true}, SHIFT(74),
  [262] = {.count = 1, .reusable = true}, SHIFT(92),
  [264] = {.count = 1, .reusable = true}, SHIFT(82),
  [266] = {.count = 1, .reusable = true}, SHIFT(70),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(2),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(22),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(23),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(27),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(6),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(7),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(116),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(115),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(108),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(114),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(54),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(63),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(98),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(98),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 11), SHIFT_REPEAT(48),
  [315] = {.count = 1, .reusable = true}, SHIFT(71),
  [317] = {.count = 1, .reusable = false}, SHIFT(124),
  [319] = {.count = 1, .reusable = true}, SHIFT(124),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__literals, 1),
  [323] = {.count = 1, .reusable = false}, SHIFT(126),
  [325] = {.count = 1, .reusable = true}, SHIFT(126),
  [327] = {.count = 1, .reusable = false}, SHIFT(133),
  [329] = {.count = 1, .reusable = true}, SHIFT(133),
  [331] = {.count = 1, .reusable = true}, SHIFT(64),
  [333] = {.count = 1, .reusable = false}, SHIFT(127),
  [335] = {.count = 1, .reusable = true}, SHIFT(127),
  [337] = {.count = 1, .reusable = false}, SHIFT(20),
  [339] = {.count = 1, .reusable = true}, SHIFT(20),
  [341] = {.count = 1, .reusable = false}, SHIFT(44),
  [343] = {.count = 1, .reusable = true}, SHIFT(44),
  [345] = {.count = 1, .reusable = false}, SHIFT(43),
  [347] = {.count = 1, .reusable = true}, SHIFT(43),
  [349] = {.count = 1, .reusable = false}, SHIFT(101),
  [351] = {.count = 1, .reusable = true}, SHIFT(101),
  [353] = {.count = 1, .reusable = false}, SHIFT(129),
  [355] = {.count = 1, .reusable = true}, SHIFT(129),
  [357] = {.count = 1, .reusable = false}, SHIFT(130),
  [359] = {.count = 1, .reusable = true}, SHIFT(130),
  [361] = {.count = 1, .reusable = false}, SHIFT(131),
  [363] = {.count = 1, .reusable = true}, SHIFT(131),
  [365] = {.count = 1, .reusable = false}, SHIFT(132),
  [367] = {.count = 1, .reusable = true}, SHIFT(132),
  [369] = {.count = 1, .reusable = false}, SHIFT(125),
  [371] = {.count = 1, .reusable = true}, SHIFT(125),
  [373] = {.count = 1, .reusable = false}, SHIFT(31),
  [375] = {.count = 1, .reusable = true}, SHIFT(31),
  [377] = {.count = 1, .reusable = false}, SHIFT(135),
  [379] = {.count = 1, .reusable = true}, SHIFT(135),
  [381] = {.count = 1, .reusable = false}, SHIFT(134),
  [383] = {.count = 1, .reusable = true}, SHIFT(134),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_scoped_symbol, 3, .production_id = 9),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_scoped_symbol, 3, .production_id = 9),
  [389] = {.count = 1, .reusable = true}, SHIFT(122),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__identifier, 1),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_while, 4, .production_id = 12),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_while, 4, .production_id = 12),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_var, 5, .production_id = 15),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_var, 5, .production_id = 15),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 7, .production_id = 29),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 7, .production_id = 29),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 28),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 28),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 27),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 27),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 26),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 26),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6, .production_id = 25),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6, .production_id = 25),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_var, 6, .production_id = 24),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_var, 6, .production_id = 24),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_def, 6, .production_id = 24),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_def, 6, .production_id = 24),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_break, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_break, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 23),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 23),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 22),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 22),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 21),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 21),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5, .production_id = 18),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_while, 5, .production_id = 18),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5, .production_id = 17),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5, .production_id = 17),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_set, 5, .production_id = 16),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_set, 5, .production_id = 16),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5, .production_id = 15),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_def, 5, .production_id = 15),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 4),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 4),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 4),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 4),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 4),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 4),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4, .production_id = 14),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 4, .production_id = 14),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 7),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 7),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 7),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 7),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 4),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 4),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_do, 4, .production_id = 10),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_do, 4, .production_id = 10),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_break, 4),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_break, 4),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 4),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 4),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_splice, 4),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_splice, 4),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_quasiquote, 4),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_quasiquote, 4),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 4),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 4),
  [583] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [585] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [587] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 3),
  [589] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [593] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 2),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 2),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 6),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 6),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_fn_parameters, 3, .production_id = 19),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_fn_parameters, 3, .production_id = 19),
  [607] = {.count = 1, .reusable = true}, SHIFT(119),
  [609] = {.count = 1, .reusable = true}, SHIFT(104),
  [611] = {.count = 1, .reusable = true}, SHIFT(48),
  [613] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [615] = {.count = 1, .reusable = false}, SHIFT(81),
  [617] = {.count = 1, .reusable = false}, SHIFT(109),
  [619] = {.count = 1, .reusable = true}, SHIFT(109),
  [621] = {.count = 1, .reusable = false}, SHIFT(83),
  [623] = {.count = 1, .reusable = false}, SHIFT(107),
  [625] = {.count = 1, .reusable = true}, SHIFT(107),
  [627] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(107),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(107),
  [635] = {.count = 1, .reusable = false}, SHIFT(55),
  [637] = {.count = 1, .reusable = false}, SHIFT(110),
  [639] = {.count = 1, .reusable = true}, SHIFT(110),
  [641] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(109),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(109),
  [649] = {.count = 1, .reusable = false}, SHIFT(85),
  [651] = {.count = 1, .reusable = true}, SHIFT(46),
  [653] = {.count = 1, .reusable = true}, SHIFT(45),
  [655] = {.count = 1, .reusable = false}, SHIFT(86),
  [657] = {.count = 1, .reusable = false}, SHIFT(57),
  [659] = {.count = 1, .reusable = false}, SHIFT(113),
  [661] = {.count = 1, .reusable = true}, SHIFT(113),
  [663] = {.count = 1, .reusable = false}, SHIFT(53),
  [665] = {.count = 1, .reusable = false}, SHIFT(106),
  [667] = {.count = 1, .reusable = true}, SHIFT(106),
  [669] = {.count = 1, .reusable = false}, SHIFT(51),
  [671] = {.count = 1, .reusable = false}, SHIFT(105),
  [673] = {.count = 1, .reusable = true}, SHIFT(105),
  [675] = {.count = 1, .reusable = true}, SHIFT(102),
  [677] = {.count = 1, .reusable = true}, SHIFT(121),
  [679] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 20),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 2, .production_id = 20), SHIFT_REPEAT(121),
  [684] = {.count = 1, .reusable = true}, SHIFT(100),
  [686] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_parameters_repeat1, 1, .production_id = 13),
  [688] = {.count = 1, .reusable = true}, SHIFT(47),
  [690] = {.count = 1, .reusable = true}, SHIFT(60),
  [692] = {.count = 1, .reusable = true}, SHIFT(72),
  [694] = {.count = 1, .reusable = true}, SHIFT(61),
  [696] = {.count = 1, .reusable = true}, SHIFT(91),
  [698] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [700] = {.count = 1, .reusable = true}, SHIFT(96),
  [702] = {.count = 1, .reusable = true}, SHIFT(95),
  [704] = {.count = 1, .reusable = true}, SHIFT(94),
  [706] = {.count = 1, .reusable = true}, SHIFT(93),
  [708] = {.count = 1, .reusable = true}, SHIFT(62),
  [710] = {.count = 1, .reusable = true}, SHIFT(50),
  [712] = {.count = 1, .reusable = true}, SHIFT(73),
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
