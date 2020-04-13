#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 276
#define LARGE_STATE_COUNT 91
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 2
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 17
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
  anon_sym_defn = 28,
  anon_sym_defn_DASH = 29,
  anon_sym_varfn = 30,
  anon_sym_varfn_DASH = 31,
  anon_sym_defmacro = 32,
  anon_sym_defmacro_DASH = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_str_literal_token1 = 35,
  anon_sym_AT_DQUOTE = 36,
  aux_sym_number_literal_token1 = 37,
  aux_sym_number_literal_token2 = 38,
  aux_sym_number_literal_token3 = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  sym_nil_literal = 42,
  sym_escape_sequence = 43,
  anon_sym_SLASH = 44,
  sym_keyword = 45,
  sym_symbol = 46,
  sym__long_str = 47,
  sym__long_buffer = 48,
  sym_source_file = 49,
  sym__expr = 50,
  sym_tuple = 51,
  sym_sqr_tuple = 52,
  sym_array = 53,
  sym_sqr_array = 54,
  sym_struct = 55,
  sym_table = 56,
  sym__struct_tables_commom = 57,
  sym__special_forms = 58,
  sym_def = 59,
  sym_var = 60,
  sym_quote = 61,
  sym_splice = 62,
  sym_quasiquote = 63,
  sym_unquote = 64,
  sym_break = 65,
  sym_set = 66,
  sym_if = 67,
  sym_do = 68,
  sym_while = 69,
  sym_fn = 70,
  sym_parameters = 71,
  sym__shorthand = 72,
  sym_short_quote = 73,
  sym_short_splice = 74,
  sym_short_quasiquote = 75,
  sym_short_unquote = 76,
  sym_short_fn = 77,
  sym__specials = 78,
  sym_extra_defs = 79,
  sym__literals = 80,
  sym_str_literal = 81,
  sym_long_str_literal = 82,
  sym_buffer_literal = 83,
  sym_long_buffer_literal = 84,
  sym_number_literal = 85,
  sym_bool_literal = 86,
  aux_sym__metadata = 87,
  sym_doc_str = 88,
  sym_body = 89,
  sym__identifier = 90,
  sym_scoped_symbol = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_tuple_repeat1 = 93,
  aux_sym_struct_repeat1 = 94,
  aux_sym_while_repeat1 = 95,
  aux_sym_parameters_repeat1 = 96,
  aux_sym_str_literal_repeat1 = 97,
  alias_sym_mod_keyword = 98,
  alias_sym_module_symbol = 99,
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
  [anon_sym_defn] = "defn",
  [anon_sym_defn_DASH] = "defn-",
  [anon_sym_varfn] = "varfn",
  [anon_sym_varfn_DASH] = "varfn-",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defmacro_DASH] = "defmacro-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_AT_DQUOTE] = "@\"",
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
  [sym__long_str] = "_long_str",
  [sym__long_buffer] = "_long_buffer",
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
  [sym_parameters] = "parameters",
  [sym__shorthand] = "_shorthand",
  [sym_short_quote] = "short_quote",
  [sym_short_splice] = "short_splice",
  [sym_short_quasiquote] = "short_quasiquote",
  [sym_short_unquote] = "short_unquote",
  [sym_short_fn] = "short_fn",
  [sym__specials] = "_specials",
  [sym_extra_defs] = "extra_defs",
  [sym__literals] = "_literals",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_number_literal] = "number_literal",
  [sym_bool_literal] = "bool_literal",
  [aux_sym__metadata] = "_metadata",
  [sym_doc_str] = "doc_str",
  [sym_body] = "body",
  [sym__identifier] = "_identifier",
  [sym_scoped_symbol] = "scoped_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_while_repeat1] = "while_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [alias_sym_mod_keyword] = "mod_keyword",
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
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_defn_DASH] = anon_sym_defn_DASH,
  [anon_sym_varfn] = anon_sym_varfn,
  [anon_sym_varfn_DASH] = anon_sym_varfn_DASH,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [anon_sym_defmacro_DASH] = anon_sym_defmacro_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_literal_token1] = aux_sym_str_literal_token1,
  [anon_sym_AT_DQUOTE] = anon_sym_AT_DQUOTE,
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
  [sym__long_str] = sym__long_str,
  [sym__long_buffer] = sym__long_buffer,
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
  [sym_parameters] = sym_parameters,
  [sym__shorthand] = sym__shorthand,
  [sym_short_quote] = sym_short_quote,
  [sym_short_splice] = sym_short_splice,
  [sym_short_quasiquote] = sym_short_quasiquote,
  [sym_short_unquote] = sym_short_unquote,
  [sym_short_fn] = sym_short_fn,
  [sym__specials] = sym__specials,
  [sym_extra_defs] = sym_extra_defs,
  [sym__literals] = sym__literals,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_bool_literal] = sym_bool_literal,
  [aux_sym__metadata] = aux_sym__metadata,
  [sym_doc_str] = sym_doc_str,
  [sym_body] = sym_body,
  [sym__identifier] = sym__identifier,
  [sym_scoped_symbol] = sym_scoped_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_while_repeat1] = aux_sym_while_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [alias_sym_mod_keyword] = alias_sym_mod_keyword,
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
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varfn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varfn_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro_DASH] = {
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
  [anon_sym_AT_DQUOTE] = {
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
  [sym__long_str] = {
    .visible = false,
    .named = true,
  },
  [sym__long_buffer] = {
    .visible = false,
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
  [sym_parameters] = {
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
  [sym__specials] = {
    .visible = false,
    .named = true,
  },
  [sym_extra_defs] = {
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
  [aux_sym__metadata] = {
    .visible = false,
    .named = false,
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
  [aux_sym_while_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_mod_keyword] = {
    .visible = true,
    .named = true,
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
  field_metadata = 9,
  field_modifier = 10,
  field_name = 11,
  field_parameter = 12,
  field_parameters = 13,
  field_path = 14,
  field_r_value = 15,
  field_then = 16,
  field_value = 17,
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
  [field_metadata] = "metadata",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_r_value] = "r_value",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[32] = {
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
  [28] = {.index = 45, .length = 4},
  [29] = {.index = 49, .length = 3},
  [30] = {.index = 52, .length = 3},
  [31] = {.index = 55, .length = 6},
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
    {field_name, 2},
    {field_parameters, 3},
  [45] =
    {field_doc_string, 3, .inherited = true},
    {field_modifier, 3, .inherited = true},
    {field_name, 2},
    {field_value, 4},
  [49] =
    {field_condition, 2},
    {field_else, 4},
    {field_then, 3},
  [52] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
  [55] =
    {field_body, 5},
    {field_doc_string, 3, .inherited = true},
    {field_metadata, 3},
    {field_modifier, 3, .inherited = true},
    {field_name, 2},
    {field_parameters, 4},
};

static TSSymbol ts_alias_sequences[32][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_module_symbol,
  },
  [12] = {
    [0] = alias_sym_mod_keyword,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(145);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(145);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '~') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('<' <= lookahead && lookahead <= '\\') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(145);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(52);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'f') ADVANCE(128);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 37:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 38:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 39:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 40:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 41:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 42:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 43:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 44:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 45:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 46:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_varfn);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_varfn_DASH);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defmacro_DASH);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(152);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
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
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 86:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 87:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 88:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 90:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 92:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '\\') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '0') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(46);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 98:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 99:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(141);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(103);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(135);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(137);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(140);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(86);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(37);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(45);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(38);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(40);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(39);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(44);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(99);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(43);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(35);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(133);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'k') ADVANCE(41);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(139);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(88);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(132);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(54);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(56);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(143);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(146);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(148);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 134:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(36);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(147);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(129);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 138:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 139:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(42);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 141:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 142:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 143:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(158);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 145:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(130);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 147:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(131);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(14);
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
          ('g' <= lookahead && lookahead <= '|') ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
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
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 161:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    case 162:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(162);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 1},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 22, .external_lex_state = 1},
  [9] = {.lex_state = 22, .external_lex_state = 1},
  [10] = {.lex_state = 22, .external_lex_state = 1},
  [11] = {.lex_state = 22, .external_lex_state = 1},
  [12] = {.lex_state = 22, .external_lex_state = 1},
  [13] = {.lex_state = 22, .external_lex_state = 1},
  [14] = {.lex_state = 22, .external_lex_state = 1},
  [15] = {.lex_state = 22, .external_lex_state = 1},
  [16] = {.lex_state = 22, .external_lex_state = 1},
  [17] = {.lex_state = 22, .external_lex_state = 1},
  [18] = {.lex_state = 22, .external_lex_state = 1},
  [19] = {.lex_state = 22, .external_lex_state = 1},
  [20] = {.lex_state = 22, .external_lex_state = 1},
  [21] = {.lex_state = 22, .external_lex_state = 1},
  [22] = {.lex_state = 22, .external_lex_state = 1},
  [23] = {.lex_state = 22, .external_lex_state = 1},
  [24] = {.lex_state = 22, .external_lex_state = 1},
  [25] = {.lex_state = 22, .external_lex_state = 1},
  [26] = {.lex_state = 22, .external_lex_state = 1},
  [27] = {.lex_state = 22, .external_lex_state = 1},
  [28] = {.lex_state = 22, .external_lex_state = 1},
  [29] = {.lex_state = 22, .external_lex_state = 1},
  [30] = {.lex_state = 22, .external_lex_state = 1},
  [31] = {.lex_state = 22, .external_lex_state = 1},
  [32] = {.lex_state = 22, .external_lex_state = 1},
  [33] = {.lex_state = 22, .external_lex_state = 1},
  [34] = {.lex_state = 22, .external_lex_state = 1},
  [35] = {.lex_state = 22, .external_lex_state = 1},
  [36] = {.lex_state = 22, .external_lex_state = 1},
  [37] = {.lex_state = 22, .external_lex_state = 1},
  [38] = {.lex_state = 22, .external_lex_state = 1},
  [39] = {.lex_state = 22, .external_lex_state = 1},
  [40] = {.lex_state = 22, .external_lex_state = 1},
  [41] = {.lex_state = 22, .external_lex_state = 1},
  [42] = {.lex_state = 22, .external_lex_state = 1},
  [43] = {.lex_state = 22, .external_lex_state = 1},
  [44] = {.lex_state = 22, .external_lex_state = 1},
  [45] = {.lex_state = 22, .external_lex_state = 1},
  [46] = {.lex_state = 22, .external_lex_state = 1},
  [47] = {.lex_state = 22, .external_lex_state = 1},
  [48] = {.lex_state = 22, .external_lex_state = 1},
  [49] = {.lex_state = 22, .external_lex_state = 1},
  [50] = {.lex_state = 22, .external_lex_state = 1},
  [51] = {.lex_state = 22, .external_lex_state = 1},
  [52] = {.lex_state = 22, .external_lex_state = 1},
  [53] = {.lex_state = 22, .external_lex_state = 1},
  [54] = {.lex_state = 22, .external_lex_state = 1},
  [55] = {.lex_state = 22, .external_lex_state = 1},
  [56] = {.lex_state = 22, .external_lex_state = 1},
  [57] = {.lex_state = 22, .external_lex_state = 1},
  [58] = {.lex_state = 22, .external_lex_state = 1},
  [59] = {.lex_state = 22, .external_lex_state = 1},
  [60] = {.lex_state = 22, .external_lex_state = 1},
  [61] = {.lex_state = 22, .external_lex_state = 1},
  [62] = {.lex_state = 22, .external_lex_state = 1},
  [63] = {.lex_state = 22, .external_lex_state = 1},
  [64] = {.lex_state = 22, .external_lex_state = 1},
  [65] = {.lex_state = 22, .external_lex_state = 1},
  [66] = {.lex_state = 22, .external_lex_state = 1},
  [67] = {.lex_state = 22, .external_lex_state = 1},
  [68] = {.lex_state = 22, .external_lex_state = 1},
  [69] = {.lex_state = 22, .external_lex_state = 1},
  [70] = {.lex_state = 22, .external_lex_state = 1},
  [71] = {.lex_state = 22, .external_lex_state = 1},
  [72] = {.lex_state = 22, .external_lex_state = 1},
  [73] = {.lex_state = 22, .external_lex_state = 1},
  [74] = {.lex_state = 22, .external_lex_state = 1},
  [75] = {.lex_state = 22, .external_lex_state = 1},
  [76] = {.lex_state = 22, .external_lex_state = 1},
  [77] = {.lex_state = 22, .external_lex_state = 1},
  [78] = {.lex_state = 22, .external_lex_state = 1},
  [79] = {.lex_state = 22, .external_lex_state = 1},
  [80] = {.lex_state = 22, .external_lex_state = 1},
  [81] = {.lex_state = 22, .external_lex_state = 1},
  [82] = {.lex_state = 22, .external_lex_state = 1},
  [83] = {.lex_state = 22, .external_lex_state = 1},
  [84] = {.lex_state = 22, .external_lex_state = 1},
  [85] = {.lex_state = 22, .external_lex_state = 1},
  [86] = {.lex_state = 22, .external_lex_state = 1},
  [87] = {.lex_state = 22, .external_lex_state = 1},
  [88] = {.lex_state = 22, .external_lex_state = 1},
  [89] = {.lex_state = 22, .external_lex_state = 1},
  [90] = {.lex_state = 22, .external_lex_state = 1},
  [91] = {.lex_state = 22, .external_lex_state = 1},
  [92] = {.lex_state = 22, .external_lex_state = 1},
  [93] = {.lex_state = 22, .external_lex_state = 1},
  [94] = {.lex_state = 22, .external_lex_state = 1},
  [95] = {.lex_state = 22, .external_lex_state = 1},
  [96] = {.lex_state = 22, .external_lex_state = 1},
  [97] = {.lex_state = 22, .external_lex_state = 1},
  [98] = {.lex_state = 22, .external_lex_state = 1},
  [99] = {.lex_state = 22, .external_lex_state = 1},
  [100] = {.lex_state = 22, .external_lex_state = 1},
  [101] = {.lex_state = 22, .external_lex_state = 1},
  [102] = {.lex_state = 22, .external_lex_state = 1},
  [103] = {.lex_state = 22, .external_lex_state = 1},
  [104] = {.lex_state = 22, .external_lex_state = 1},
  [105] = {.lex_state = 22, .external_lex_state = 1},
  [106] = {.lex_state = 22, .external_lex_state = 1},
  [107] = {.lex_state = 22, .external_lex_state = 1},
  [108] = {.lex_state = 22, .external_lex_state = 1},
  [109] = {.lex_state = 22, .external_lex_state = 1},
  [110] = {.lex_state = 22, .external_lex_state = 1},
  [111] = {.lex_state = 22, .external_lex_state = 1},
  [112] = {.lex_state = 22, .external_lex_state = 1},
  [113] = {.lex_state = 22, .external_lex_state = 1},
  [114] = {.lex_state = 22, .external_lex_state = 1},
  [115] = {.lex_state = 22, .external_lex_state = 1},
  [116] = {.lex_state = 22, .external_lex_state = 1},
  [117] = {.lex_state = 22, .external_lex_state = 1},
  [118] = {.lex_state = 22, .external_lex_state = 1},
  [119] = {.lex_state = 22, .external_lex_state = 1},
  [120] = {.lex_state = 22, .external_lex_state = 1},
  [121] = {.lex_state = 22, .external_lex_state = 1},
  [122] = {.lex_state = 22, .external_lex_state = 1},
  [123] = {.lex_state = 22, .external_lex_state = 1},
  [124] = {.lex_state = 22, .external_lex_state = 1},
  [125] = {.lex_state = 22, .external_lex_state = 1},
  [126] = {.lex_state = 22, .external_lex_state = 1},
  [127] = {.lex_state = 22, .external_lex_state = 1},
  [128] = {.lex_state = 22, .external_lex_state = 1},
  [129] = {.lex_state = 22, .external_lex_state = 1},
  [130] = {.lex_state = 22, .external_lex_state = 1},
  [131] = {.lex_state = 22, .external_lex_state = 1},
  [132] = {.lex_state = 22, .external_lex_state = 1},
  [133] = {.lex_state = 22, .external_lex_state = 1},
  [134] = {.lex_state = 22, .external_lex_state = 1},
  [135] = {.lex_state = 22, .external_lex_state = 1},
  [136] = {.lex_state = 22, .external_lex_state = 1},
  [137] = {.lex_state = 22, .external_lex_state = 1},
  [138] = {.lex_state = 22, .external_lex_state = 1},
  [139] = {.lex_state = 22, .external_lex_state = 1},
  [140] = {.lex_state = 22, .external_lex_state = 1},
  [141] = {.lex_state = 22, .external_lex_state = 1},
  [142] = {.lex_state = 22, .external_lex_state = 1},
  [143] = {.lex_state = 22, .external_lex_state = 1},
  [144] = {.lex_state = 22, .external_lex_state = 1},
  [145] = {.lex_state = 22, .external_lex_state = 1},
  [146] = {.lex_state = 22, .external_lex_state = 1},
  [147] = {.lex_state = 22, .external_lex_state = 1},
  [148] = {.lex_state = 22, .external_lex_state = 1},
  [149] = {.lex_state = 22, .external_lex_state = 1},
  [150] = {.lex_state = 22, .external_lex_state = 1},
  [151] = {.lex_state = 22, .external_lex_state = 1},
  [152] = {.lex_state = 22, .external_lex_state = 1},
  [153] = {.lex_state = 22, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
};

enum {
  ts_external_token__long_str = 0,
  ts_external_token__long_buffer = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__long_str] = sym__long_str,
  [ts_external_token__long_buffer] = sym__long_buffer,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__long_str] = true,
    [ts_external_token__long_buffer] = true,
  },
  [2] = {
    [ts_external_token__long_str] = true,
  },
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
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_defn_DASH] = ACTIONS(1),
    [anon_sym_varfn] = ACTIONS(1),
    [anon_sym_varfn_DASH] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_defmacro_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
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
    [sym__long_str] = ACTIONS(1),
    [sym__long_buffer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(267),
    [sym__expr] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_sqr_tuple] = STATE(23),
    [sym_array] = STATE(23),
    [sym_sqr_array] = STATE(23),
    [sym_struct] = STATE(23),
    [sym_table] = STATE(23),
    [sym__special_forms] = STATE(23),
    [sym_def] = STATE(23),
    [sym_var] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_splice] = STATE(23),
    [sym_quasiquote] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_break] = STATE(23),
    [sym_set] = STATE(23),
    [sym_if] = STATE(23),
    [sym_do] = STATE(23),
    [sym_while] = STATE(23),
    [sym_fn] = STATE(23),
    [sym__shorthand] = STATE(23),
    [sym_short_quote] = STATE(23),
    [sym_short_splice] = STATE(23),
    [sym_short_quasiquote] = STATE(23),
    [sym_short_unquote] = STATE(23),
    [sym_short_fn] = STATE(23),
    [sym__specials] = STATE(23),
    [sym_extra_defs] = STATE(23),
    [sym__literals] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_long_str_literal] = STATE(23),
    [sym_buffer_literal] = STATE(23),
    [sym_long_buffer_literal] = STATE(23),
    [sym_number_literal] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym__identifier] = STATE(23),
    [sym_scoped_symbol] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [2] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(40),
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
    [anon_sym_defn] = ACTIONS(73),
    [anon_sym_defn_DASH] = ACTIONS(73),
    [anon_sym_varfn] = ACTIONS(73),
    [anon_sym_varfn_DASH] = ACTIONS(73),
    [anon_sym_defmacro] = ACTIONS(73),
    [anon_sym_defmacro_DASH] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [3] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(37),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(81),
    [anon_sym_var] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(85),
    [anon_sym_splice] = ACTIONS(87),
    [anon_sym_quasiquote] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_break] = ACTIONS(93),
    [anon_sym_set] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_do] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(101),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_defn] = ACTIONS(105),
    [anon_sym_defn_DASH] = ACTIONS(105),
    [anon_sym_varfn] = ACTIONS(105),
    [anon_sym_varfn_DASH] = ACTIONS(105),
    [anon_sym_defmacro] = ACTIONS(105),
    [anon_sym_defmacro_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [4] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(268),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(107),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [5] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [6] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [7] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(243),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [8] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(248),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [9] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(12),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [10] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [11] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [12] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [13] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_AT_LPAREN] = ACTIONS(139),
    [anon_sym_AT_LBRACK] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_AT_LBRACE] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_AT_DQUOTE] = ACTIONS(171),
    [aux_sym_number_literal_token1] = ACTIONS(174),
    [aux_sym_number_literal_token2] = ACTIONS(174),
    [aux_sym_number_literal_token3] = ACTIONS(174),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [sym_nil_literal] = ACTIONS(180),
    [sym_keyword] = ACTIONS(183),
    [sym_symbol] = ACTIONS(186),
    [sym__long_str] = ACTIONS(189),
    [sym__long_buffer] = ACTIONS(192),
  },
  [14] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(227),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(195),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [15] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(6),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [16] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(213),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(199),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [17] = {
    [sym__expr] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_sqr_tuple] = STATE(58),
    [sym_array] = STATE(58),
    [sym_sqr_array] = STATE(58),
    [sym_struct] = STATE(58),
    [sym_table] = STATE(58),
    [sym__struct_tables_commom] = STATE(147),
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
    [sym__specials] = STATE(58),
    [sym_extra_defs] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_long_str_literal] = STATE(58),
    [sym_buffer_literal] = STATE(58),
    [sym_long_buffer_literal] = STATE(58),
    [sym_number_literal] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym__identifier] = STATE(58),
    [sym_scoped_symbol] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AT_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [18] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(272),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(203),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [19] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_AT_LBRACE] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_AT_DQUOTE] = ACTIONS(243),
    [aux_sym_number_literal_token1] = ACTIONS(246),
    [aux_sym_number_literal_token2] = ACTIONS(246),
    [aux_sym_number_literal_token3] = ACTIONS(246),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym_nil_literal] = ACTIONS(252),
    [sym_keyword] = ACTIONS(255),
    [sym_symbol] = ACTIONS(258),
    [sym__long_str] = ACTIONS(261),
    [sym__long_buffer] = ACTIONS(264),
  },
  [20] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(29),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(267),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [21] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(269),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [22] = {
    [sym__expr] = STATE(246),
    [sym_tuple] = STATE(246),
    [sym_sqr_tuple] = STATE(246),
    [sym_array] = STATE(246),
    [sym_sqr_array] = STATE(246),
    [sym_struct] = STATE(246),
    [sym_table] = STATE(246),
    [sym__special_forms] = STATE(246),
    [sym_def] = STATE(246),
    [sym_var] = STATE(246),
    [sym_quote] = STATE(246),
    [sym_splice] = STATE(246),
    [sym_quasiquote] = STATE(246),
    [sym_unquote] = STATE(246),
    [sym_break] = STATE(246),
    [sym_set] = STATE(246),
    [sym_if] = STATE(246),
    [sym_do] = STATE(246),
    [sym_while] = STATE(246),
    [sym_fn] = STATE(246),
    [sym__shorthand] = STATE(246),
    [sym_short_quote] = STATE(246),
    [sym_short_splice] = STATE(246),
    [sym_short_quasiquote] = STATE(246),
    [sym_short_unquote] = STATE(246),
    [sym_short_fn] = STATE(246),
    [sym__specials] = STATE(246),
    [sym_extra_defs] = STATE(246),
    [sym__literals] = STATE(246),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(246),
    [sym_long_buffer_literal] = STATE(246),
    [sym_number_literal] = STATE(246),
    [sym_bool_literal] = STATE(246),
    [aux_sym__metadata] = STATE(124),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(246),
    [sym_scoped_symbol] = STATE(246),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(299),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [23] = {
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
    [sym__specials] = STATE(46),
    [sym_extra_defs] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_long_str_literal] = STATE(46),
    [sym_buffer_literal] = STATE(46),
    [sym_long_buffer_literal] = STATE(46),
    [sym_number_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym__identifier] = STATE(46),
    [sym_scoped_symbol] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(307),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(309),
    [sym_keyword] = ACTIONS(311),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [24] = {
    [sym__expr] = STATE(245),
    [sym_tuple] = STATE(245),
    [sym_sqr_tuple] = STATE(245),
    [sym_array] = STATE(245),
    [sym_sqr_array] = STATE(245),
    [sym_struct] = STATE(245),
    [sym_table] = STATE(245),
    [sym__special_forms] = STATE(245),
    [sym_def] = STATE(245),
    [sym_var] = STATE(245),
    [sym_quote] = STATE(245),
    [sym_splice] = STATE(245),
    [sym_quasiquote] = STATE(245),
    [sym_unquote] = STATE(245),
    [sym_break] = STATE(245),
    [sym_set] = STATE(245),
    [sym_if] = STATE(245),
    [sym_do] = STATE(245),
    [sym_while] = STATE(245),
    [sym_fn] = STATE(245),
    [sym__shorthand] = STATE(245),
    [sym_short_quote] = STATE(245),
    [sym_short_splice] = STATE(245),
    [sym_short_quasiquote] = STATE(245),
    [sym_short_unquote] = STATE(245),
    [sym_short_fn] = STATE(245),
    [sym__specials] = STATE(245),
    [sym_extra_defs] = STATE(245),
    [sym__literals] = STATE(245),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(245),
    [sym_long_buffer_literal] = STATE(245),
    [sym_number_literal] = STATE(245),
    [sym_bool_literal] = STATE(245),
    [aux_sym__metadata] = STATE(124),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(245),
    [sym_scoped_symbol] = STATE(245),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(313),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [25] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(35),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(315),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [26] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(317),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [27] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(28),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(319),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [28] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(321),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [29] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(323),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [30] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(34),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(325),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [31] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_AT_LPAREN] = ACTIONS(335),
    [anon_sym_AT_LBRACK] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_AT_LBRACE] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_AT_DQUOTE] = ACTIONS(365),
    [aux_sym_number_literal_token1] = ACTIONS(368),
    [aux_sym_number_literal_token2] = ACTIONS(368),
    [aux_sym_number_literal_token3] = ACTIONS(368),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [sym_nil_literal] = ACTIONS(374),
    [sym_keyword] = ACTIONS(377),
    [sym_symbol] = ACTIONS(380),
    [sym__long_str] = ACTIONS(383),
    [sym__long_buffer] = ACTIONS(386),
  },
  [32] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(250),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [33] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(265),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [34] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(389),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [35] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(391),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [36] = {
    [sym__expr] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_sqr_tuple] = STATE(239),
    [sym_array] = STATE(239),
    [sym_sqr_array] = STATE(239),
    [sym_struct] = STATE(239),
    [sym_table] = STATE(239),
    [sym__special_forms] = STATE(239),
    [sym_def] = STATE(239),
    [sym_var] = STATE(239),
    [sym_quote] = STATE(239),
    [sym_splice] = STATE(239),
    [sym_quasiquote] = STATE(239),
    [sym_unquote] = STATE(239),
    [sym_break] = STATE(239),
    [sym_set] = STATE(239),
    [sym_if] = STATE(239),
    [sym_do] = STATE(239),
    [sym_while] = STATE(239),
    [sym_fn] = STATE(239),
    [sym__shorthand] = STATE(239),
    [sym_short_quote] = STATE(239),
    [sym_short_splice] = STATE(239),
    [sym_short_quasiquote] = STATE(239),
    [sym_short_unquote] = STATE(239),
    [sym_short_fn] = STATE(239),
    [sym__specials] = STATE(239),
    [sym_extra_defs] = STATE(239),
    [sym__literals] = STATE(239),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(239),
    [sym_long_buffer_literal] = STATE(239),
    [sym_number_literal] = STATE(239),
    [sym_bool_literal] = STATE(239),
    [aux_sym__metadata] = STATE(22),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(239),
    [sym_scoped_symbol] = STATE(239),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(393),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [37] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(395),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [38] = {
    [sym__expr] = STATE(238),
    [sym_tuple] = STATE(238),
    [sym_sqr_tuple] = STATE(238),
    [sym_array] = STATE(238),
    [sym_sqr_array] = STATE(238),
    [sym_struct] = STATE(238),
    [sym_table] = STATE(238),
    [sym__special_forms] = STATE(238),
    [sym_def] = STATE(238),
    [sym_var] = STATE(238),
    [sym_quote] = STATE(238),
    [sym_splice] = STATE(238),
    [sym_quasiquote] = STATE(238),
    [sym_unquote] = STATE(238),
    [sym_break] = STATE(238),
    [sym_set] = STATE(238),
    [sym_if] = STATE(238),
    [sym_do] = STATE(238),
    [sym_while] = STATE(238),
    [sym_fn] = STATE(238),
    [sym__shorthand] = STATE(238),
    [sym_short_quote] = STATE(238),
    [sym_short_splice] = STATE(238),
    [sym_short_quasiquote] = STATE(238),
    [sym_short_unquote] = STATE(238),
    [sym_short_fn] = STATE(238),
    [sym__specials] = STATE(238),
    [sym_extra_defs] = STATE(238),
    [sym__literals] = STATE(238),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(238),
    [sym_long_buffer_literal] = STATE(238),
    [sym_number_literal] = STATE(238),
    [sym_bool_literal] = STATE(238),
    [aux_sym__metadata] = STATE(24),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(238),
    [sym_scoped_symbol] = STATE(238),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(397),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [39] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(249),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [40] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(399),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [41] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(401),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [42] = {
    [sym__expr] = STATE(275),
    [sym_tuple] = STATE(275),
    [sym_sqr_tuple] = STATE(275),
    [sym_array] = STATE(275),
    [sym_sqr_array] = STATE(275),
    [sym_struct] = STATE(275),
    [sym_table] = STATE(275),
    [sym__special_forms] = STATE(275),
    [sym_def] = STATE(275),
    [sym_var] = STATE(275),
    [sym_quote] = STATE(275),
    [sym_splice] = STATE(275),
    [sym_quasiquote] = STATE(275),
    [sym_unquote] = STATE(275),
    [sym_break] = STATE(275),
    [sym_set] = STATE(275),
    [sym_if] = STATE(275),
    [sym_do] = STATE(275),
    [sym_while] = STATE(275),
    [sym_fn] = STATE(275),
    [sym__shorthand] = STATE(275),
    [sym_short_quote] = STATE(275),
    [sym_short_splice] = STATE(275),
    [sym_short_quasiquote] = STATE(275),
    [sym_short_unquote] = STATE(275),
    [sym_short_fn] = STATE(275),
    [sym__specials] = STATE(275),
    [sym_extra_defs] = STATE(275),
    [sym__literals] = STATE(275),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(275),
    [sym_long_buffer_literal] = STATE(275),
    [sym_number_literal] = STATE(275),
    [sym_bool_literal] = STATE(275),
    [aux_sym__metadata] = STATE(45),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(275),
    [sym_scoped_symbol] = STATE(275),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(403),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [43] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(405),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [44] = {
    [sym__expr] = STATE(231),
    [sym_tuple] = STATE(231),
    [sym_sqr_tuple] = STATE(231),
    [sym_array] = STATE(231),
    [sym_sqr_array] = STATE(231),
    [sym_struct] = STATE(231),
    [sym_table] = STATE(231),
    [sym__special_forms] = STATE(231),
    [sym_def] = STATE(231),
    [sym_var] = STATE(231),
    [sym_quote] = STATE(231),
    [sym_splice] = STATE(231),
    [sym_quasiquote] = STATE(231),
    [sym_unquote] = STATE(231),
    [sym_break] = STATE(231),
    [sym_set] = STATE(231),
    [sym_if] = STATE(231),
    [sym_do] = STATE(231),
    [sym_while] = STATE(231),
    [sym_fn] = STATE(231),
    [sym__shorthand] = STATE(231),
    [sym_short_quote] = STATE(231),
    [sym_short_splice] = STATE(231),
    [sym_short_quasiquote] = STATE(231),
    [sym_short_unquote] = STATE(231),
    [sym_short_fn] = STATE(231),
    [sym__specials] = STATE(231),
    [sym_extra_defs] = STATE(231),
    [sym__literals] = STATE(231),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(231),
    [sym_long_buffer_literal] = STATE(231),
    [sym_number_literal] = STATE(231),
    [sym_bool_literal] = STATE(231),
    [aux_sym__metadata] = STATE(49),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(231),
    [sym_scoped_symbol] = STATE(231),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(407),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [45] = {
    [sym__expr] = STATE(270),
    [sym_tuple] = STATE(270),
    [sym_sqr_tuple] = STATE(270),
    [sym_array] = STATE(270),
    [sym_sqr_array] = STATE(270),
    [sym_struct] = STATE(270),
    [sym_table] = STATE(270),
    [sym__special_forms] = STATE(270),
    [sym_def] = STATE(270),
    [sym_var] = STATE(270),
    [sym_quote] = STATE(270),
    [sym_splice] = STATE(270),
    [sym_quasiquote] = STATE(270),
    [sym_unquote] = STATE(270),
    [sym_break] = STATE(270),
    [sym_set] = STATE(270),
    [sym_if] = STATE(270),
    [sym_do] = STATE(270),
    [sym_while] = STATE(270),
    [sym_fn] = STATE(270),
    [sym__shorthand] = STATE(270),
    [sym_short_quote] = STATE(270),
    [sym_short_splice] = STATE(270),
    [sym_short_quasiquote] = STATE(270),
    [sym_short_unquote] = STATE(270),
    [sym_short_fn] = STATE(270),
    [sym__specials] = STATE(270),
    [sym_extra_defs] = STATE(270),
    [sym__literals] = STATE(270),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(270),
    [sym_long_buffer_literal] = STATE(270),
    [sym_number_literal] = STATE(270),
    [sym_bool_literal] = STATE(270),
    [aux_sym__metadata] = STATE(124),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(270),
    [sym_scoped_symbol] = STATE(270),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(409),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [46] = {
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
    [sym__specials] = STATE(46),
    [sym_extra_defs] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_long_str_literal] = STATE(46),
    [sym_buffer_literal] = STATE(46),
    [sym_long_buffer_literal] = STATE(46),
    [sym_number_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym__identifier] = STATE(46),
    [sym_scoped_symbol] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_AT_LPAREN] = ACTIONS(419),
    [anon_sym_AT_LBRACK] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_AT_LBRACE] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(446),
    [anon_sym_AT_DQUOTE] = ACTIONS(449),
    [aux_sym_number_literal_token1] = ACTIONS(452),
    [aux_sym_number_literal_token2] = ACTIONS(452),
    [aux_sym_number_literal_token3] = ACTIONS(452),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [sym_nil_literal] = ACTIONS(458),
    [sym_keyword] = ACTIONS(461),
    [sym_symbol] = ACTIONS(464),
    [sym__long_str] = ACTIONS(467),
    [sym__long_buffer] = ACTIONS(470),
  },
  [47] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(21),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(473),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [48] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym_body] = STATE(266),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(26),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [49] = {
    [sym__expr] = STATE(271),
    [sym_tuple] = STATE(271),
    [sym_sqr_tuple] = STATE(271),
    [sym_array] = STATE(271),
    [sym_sqr_array] = STATE(271),
    [sym_struct] = STATE(271),
    [sym_table] = STATE(271),
    [sym__special_forms] = STATE(271),
    [sym_def] = STATE(271),
    [sym_var] = STATE(271),
    [sym_quote] = STATE(271),
    [sym_splice] = STATE(271),
    [sym_quasiquote] = STATE(271),
    [sym_unquote] = STATE(271),
    [sym_break] = STATE(271),
    [sym_set] = STATE(271),
    [sym_if] = STATE(271),
    [sym_do] = STATE(271),
    [sym_while] = STATE(271),
    [sym_fn] = STATE(271),
    [sym__shorthand] = STATE(271),
    [sym_short_quote] = STATE(271),
    [sym_short_splice] = STATE(271),
    [sym_short_quasiquote] = STATE(271),
    [sym_short_unquote] = STATE(271),
    [sym_short_fn] = STATE(271),
    [sym__specials] = STATE(271),
    [sym_extra_defs] = STATE(271),
    [sym__literals] = STATE(271),
    [sym_str_literal] = STATE(150),
    [sym_long_str_literal] = STATE(150),
    [sym_buffer_literal] = STATE(271),
    [sym_long_buffer_literal] = STATE(271),
    [sym_number_literal] = STATE(271),
    [sym_bool_literal] = STATE(271),
    [aux_sym__metadata] = STATE(124),
    [sym_doc_str] = STATE(153),
    [sym__identifier] = STATE(271),
    [sym_scoped_symbol] = STATE(271),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(475),
    [sym_keyword] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(305),
  },
  [50] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(477),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [51] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(41),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(479),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [52] = {
    [sym__expr] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_sqr_tuple] = STATE(143),
    [sym_array] = STATE(143),
    [sym_sqr_array] = STATE(143),
    [sym_struct] = STATE(143),
    [sym_table] = STATE(143),
    [sym__special_forms] = STATE(143),
    [sym_def] = STATE(143),
    [sym_var] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_splice] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_break] = STATE(143),
    [sym_set] = STATE(143),
    [sym_if] = STATE(143),
    [sym_do] = STATE(143),
    [sym_while] = STATE(143),
    [sym_fn] = STATE(143),
    [sym__shorthand] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_short_splice] = STATE(143),
    [sym_short_quasiquote] = STATE(143),
    [sym_short_unquote] = STATE(143),
    [sym_short_fn] = STATE(143),
    [sym__specials] = STATE(143),
    [sym_extra_defs] = STATE(143),
    [sym__literals] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_long_str_literal] = STATE(143),
    [sym_buffer_literal] = STATE(143),
    [sym_long_buffer_literal] = STATE(143),
    [sym_number_literal] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym__identifier] = STATE(143),
    [sym_scoped_symbol] = STATE(143),
    [aux_sym_tuple_repeat1] = STATE(43),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(481),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [53] = {
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
    [sym__specials] = STATE(144),
    [sym_extra_defs] = STATE(144),
    [sym__literals] = STATE(144),
    [sym_str_literal] = STATE(144),
    [sym_long_str_literal] = STATE(144),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [sym__identifier] = STATE(144),
    [sym_scoped_symbol] = STATE(144),
    [aux_sym_while_repeat1] = STATE(50),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(483),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(109),
    [sym_keyword] = ACTIONS(111),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [54] = {
    [sym__expr] = STATE(247),
    [sym_tuple] = STATE(247),
    [sym_sqr_tuple] = STATE(247),
    [sym_array] = STATE(247),
    [sym_sqr_array] = STATE(247),
    [sym_struct] = STATE(247),
    [sym_table] = STATE(247),
    [sym__special_forms] = STATE(247),
    [sym_def] = STATE(247),
    [sym_var] = STATE(247),
    [sym_quote] = STATE(247),
    [sym_splice] = STATE(247),
    [sym_quasiquote] = STATE(247),
    [sym_unquote] = STATE(247),
    [sym_break] = STATE(247),
    [sym_set] = STATE(247),
    [sym_if] = STATE(247),
    [sym_do] = STATE(247),
    [sym_while] = STATE(247),
    [sym_fn] = STATE(247),
    [sym__shorthand] = STATE(247),
    [sym_short_quote] = STATE(247),
    [sym_short_splice] = STATE(247),
    [sym_short_quasiquote] = STATE(247),
    [sym_short_unquote] = STATE(247),
    [sym_short_fn] = STATE(247),
    [sym__specials] = STATE(247),
    [sym_extra_defs] = STATE(247),
    [sym__literals] = STATE(247),
    [sym_str_literal] = STATE(247),
    [sym_long_str_literal] = STATE(247),
    [sym_buffer_literal] = STATE(247),
    [sym_long_buffer_literal] = STATE(247),
    [sym_number_literal] = STATE(247),
    [sym_bool_literal] = STATE(247),
    [sym__identifier] = STATE(247),
    [sym_scoped_symbol] = STATE(247),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(489),
    [sym_keyword] = ACTIONS(491),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [55] = {
    [sym__expr] = STATE(269),
    [sym_tuple] = STATE(269),
    [sym_sqr_tuple] = STATE(269),
    [sym_array] = STATE(269),
    [sym_sqr_array] = STATE(269),
    [sym_struct] = STATE(269),
    [sym_table] = STATE(269),
    [sym__special_forms] = STATE(269),
    [sym_def] = STATE(269),
    [sym_var] = STATE(269),
    [sym_quote] = STATE(269),
    [sym_splice] = STATE(269),
    [sym_quasiquote] = STATE(269),
    [sym_unquote] = STATE(269),
    [sym_break] = STATE(269),
    [sym_set] = STATE(269),
    [sym_if] = STATE(269),
    [sym_do] = STATE(269),
    [sym_while] = STATE(269),
    [sym_fn] = STATE(269),
    [sym__shorthand] = STATE(269),
    [sym_short_quote] = STATE(269),
    [sym_short_splice] = STATE(269),
    [sym_short_quasiquote] = STATE(269),
    [sym_short_unquote] = STATE(269),
    [sym_short_fn] = STATE(269),
    [sym__specials] = STATE(269),
    [sym_extra_defs] = STATE(269),
    [sym__literals] = STATE(269),
    [sym_str_literal] = STATE(269),
    [sym_long_str_literal] = STATE(269),
    [sym_buffer_literal] = STATE(269),
    [sym_long_buffer_literal] = STATE(269),
    [sym_number_literal] = STATE(269),
    [sym_bool_literal] = STATE(269),
    [sym__identifier] = STATE(269),
    [sym_scoped_symbol] = STATE(269),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(497),
    [sym_keyword] = ACTIONS(499),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [56] = {
    [sym__expr] = STATE(234),
    [sym_tuple] = STATE(234),
    [sym_sqr_tuple] = STATE(234),
    [sym_array] = STATE(234),
    [sym_sqr_array] = STATE(234),
    [sym_struct] = STATE(234),
    [sym_table] = STATE(234),
    [sym__special_forms] = STATE(234),
    [sym_def] = STATE(234),
    [sym_var] = STATE(234),
    [sym_quote] = STATE(234),
    [sym_splice] = STATE(234),
    [sym_quasiquote] = STATE(234),
    [sym_unquote] = STATE(234),
    [sym_break] = STATE(234),
    [sym_set] = STATE(234),
    [sym_if] = STATE(234),
    [sym_do] = STATE(234),
    [sym_while] = STATE(234),
    [sym_fn] = STATE(234),
    [sym__shorthand] = STATE(234),
    [sym_short_quote] = STATE(234),
    [sym_short_splice] = STATE(234),
    [sym_short_quasiquote] = STATE(234),
    [sym_short_unquote] = STATE(234),
    [sym_short_fn] = STATE(234),
    [sym__specials] = STATE(234),
    [sym_extra_defs] = STATE(234),
    [sym__literals] = STATE(234),
    [sym_str_literal] = STATE(234),
    [sym_long_str_literal] = STATE(234),
    [sym_buffer_literal] = STATE(234),
    [sym_long_buffer_literal] = STATE(234),
    [sym_number_literal] = STATE(234),
    [sym_bool_literal] = STATE(234),
    [sym__identifier] = STATE(234),
    [sym_scoped_symbol] = STATE(234),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(503),
    [sym_keyword] = ACTIONS(505),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [57] = {
    [sym__expr] = STATE(216),
    [sym_tuple] = STATE(216),
    [sym_sqr_tuple] = STATE(216),
    [sym_array] = STATE(216),
    [sym_sqr_array] = STATE(216),
    [sym_struct] = STATE(216),
    [sym_table] = STATE(216),
    [sym__special_forms] = STATE(216),
    [sym_def] = STATE(216),
    [sym_var] = STATE(216),
    [sym_quote] = STATE(216),
    [sym_splice] = STATE(216),
    [sym_quasiquote] = STATE(216),
    [sym_unquote] = STATE(216),
    [sym_break] = STATE(216),
    [sym_set] = STATE(216),
    [sym_if] = STATE(216),
    [sym_do] = STATE(216),
    [sym_while] = STATE(216),
    [sym_fn] = STATE(216),
    [sym__shorthand] = STATE(216),
    [sym_short_quote] = STATE(216),
    [sym_short_splice] = STATE(216),
    [sym_short_quasiquote] = STATE(216),
    [sym_short_unquote] = STATE(216),
    [sym_short_fn] = STATE(216),
    [sym__specials] = STATE(216),
    [sym_extra_defs] = STATE(216),
    [sym__literals] = STATE(216),
    [sym_str_literal] = STATE(216),
    [sym_long_str_literal] = STATE(216),
    [sym_buffer_literal] = STATE(216),
    [sym_long_buffer_literal] = STATE(216),
    [sym_number_literal] = STATE(216),
    [sym_bool_literal] = STATE(216),
    [sym__identifier] = STATE(216),
    [sym_scoped_symbol] = STATE(216),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(509),
    [sym_keyword] = ACTIONS(511),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [58] = {
    [sym__expr] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_sqr_tuple] = STATE(145),
    [sym_array] = STATE(145),
    [sym_sqr_array] = STATE(145),
    [sym_struct] = STATE(145),
    [sym_table] = STATE(145),
    [sym__special_forms] = STATE(145),
    [sym_def] = STATE(145),
    [sym_var] = STATE(145),
    [sym_quote] = STATE(145),
    [sym_splice] = STATE(145),
    [sym_quasiquote] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_break] = STATE(145),
    [sym_set] = STATE(145),
    [sym_if] = STATE(145),
    [sym_do] = STATE(145),
    [sym_while] = STATE(145),
    [sym_fn] = STATE(145),
    [sym__shorthand] = STATE(145),
    [sym_short_quote] = STATE(145),
    [sym_short_splice] = STATE(145),
    [sym_short_quasiquote] = STATE(145),
    [sym_short_unquote] = STATE(145),
    [sym_short_fn] = STATE(145),
    [sym__specials] = STATE(145),
    [sym_extra_defs] = STATE(145),
    [sym__literals] = STATE(145),
    [sym_str_literal] = STATE(145),
    [sym_long_str_literal] = STATE(145),
    [sym_buffer_literal] = STATE(145),
    [sym_long_buffer_literal] = STATE(145),
    [sym_number_literal] = STATE(145),
    [sym_bool_literal] = STATE(145),
    [sym__identifier] = STATE(145),
    [sym_scoped_symbol] = STATE(145),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(513),
    [sym_keyword] = ACTIONS(515),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [59] = {
    [sym__expr] = STATE(223),
    [sym_tuple] = STATE(223),
    [sym_sqr_tuple] = STATE(223),
    [sym_array] = STATE(223),
    [sym_sqr_array] = STATE(223),
    [sym_struct] = STATE(223),
    [sym_table] = STATE(223),
    [sym__special_forms] = STATE(223),
    [sym_def] = STATE(223),
    [sym_var] = STATE(223),
    [sym_quote] = STATE(223),
    [sym_splice] = STATE(223),
    [sym_quasiquote] = STATE(223),
    [sym_unquote] = STATE(223),
    [sym_break] = STATE(223),
    [sym_set] = STATE(223),
    [sym_if] = STATE(223),
    [sym_do] = STATE(223),
    [sym_while] = STATE(223),
    [sym_fn] = STATE(223),
    [sym__shorthand] = STATE(223),
    [sym_short_quote] = STATE(223),
    [sym_short_splice] = STATE(223),
    [sym_short_quasiquote] = STATE(223),
    [sym_short_unquote] = STATE(223),
    [sym_short_fn] = STATE(223),
    [sym__specials] = STATE(223),
    [sym_extra_defs] = STATE(223),
    [sym__literals] = STATE(223),
    [sym_str_literal] = STATE(223),
    [sym_long_str_literal] = STATE(223),
    [sym_buffer_literal] = STATE(223),
    [sym_long_buffer_literal] = STATE(223),
    [sym_number_literal] = STATE(223),
    [sym_bool_literal] = STATE(223),
    [sym__identifier] = STATE(223),
    [sym_scoped_symbol] = STATE(223),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(517),
    [sym_keyword] = ACTIONS(519),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [60] = {
    [sym__expr] = STATE(66),
    [sym_tuple] = STATE(66),
    [sym_sqr_tuple] = STATE(66),
    [sym_array] = STATE(66),
    [sym_sqr_array] = STATE(66),
    [sym_struct] = STATE(66),
    [sym_table] = STATE(66),
    [sym__special_forms] = STATE(66),
    [sym_def] = STATE(66),
    [sym_var] = STATE(66),
    [sym_quote] = STATE(66),
    [sym_splice] = STATE(66),
    [sym_quasiquote] = STATE(66),
    [sym_unquote] = STATE(66),
    [sym_break] = STATE(66),
    [sym_set] = STATE(66),
    [sym_if] = STATE(66),
    [sym_do] = STATE(66),
    [sym_while] = STATE(66),
    [sym_fn] = STATE(66),
    [sym__shorthand] = STATE(66),
    [sym_short_quote] = STATE(66),
    [sym_short_splice] = STATE(66),
    [sym_short_quasiquote] = STATE(66),
    [sym_short_unquote] = STATE(66),
    [sym_short_fn] = STATE(66),
    [sym__specials] = STATE(66),
    [sym_extra_defs] = STATE(66),
    [sym__literals] = STATE(66),
    [sym_str_literal] = STATE(66),
    [sym_long_str_literal] = STATE(66),
    [sym_buffer_literal] = STATE(66),
    [sym_long_buffer_literal] = STATE(66),
    [sym_number_literal] = STATE(66),
    [sym_bool_literal] = STATE(66),
    [sym__identifier] = STATE(66),
    [sym_scoped_symbol] = STATE(66),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(521),
    [sym_keyword] = ACTIONS(523),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [61] = {
    [sym__expr] = STATE(195),
    [sym_tuple] = STATE(195),
    [sym_sqr_tuple] = STATE(195),
    [sym_array] = STATE(195),
    [sym_sqr_array] = STATE(195),
    [sym_struct] = STATE(195),
    [sym_table] = STATE(195),
    [sym__special_forms] = STATE(195),
    [sym_def] = STATE(195),
    [sym_var] = STATE(195),
    [sym_quote] = STATE(195),
    [sym_splice] = STATE(195),
    [sym_quasiquote] = STATE(195),
    [sym_unquote] = STATE(195),
    [sym_break] = STATE(195),
    [sym_set] = STATE(195),
    [sym_if] = STATE(195),
    [sym_do] = STATE(195),
    [sym_while] = STATE(195),
    [sym_fn] = STATE(195),
    [sym__shorthand] = STATE(195),
    [sym_short_quote] = STATE(195),
    [sym_short_splice] = STATE(195),
    [sym_short_quasiquote] = STATE(195),
    [sym_short_unquote] = STATE(195),
    [sym_short_fn] = STATE(195),
    [sym__specials] = STATE(195),
    [sym_extra_defs] = STATE(195),
    [sym__literals] = STATE(195),
    [sym_str_literal] = STATE(195),
    [sym_long_str_literal] = STATE(195),
    [sym_buffer_literal] = STATE(195),
    [sym_long_buffer_literal] = STATE(195),
    [sym_number_literal] = STATE(195),
    [sym_bool_literal] = STATE(195),
    [sym__identifier] = STATE(195),
    [sym_scoped_symbol] = STATE(195),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(525),
    [sym_keyword] = ACTIONS(527),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [62] = {
    [sym__expr] = STATE(232),
    [sym_tuple] = STATE(232),
    [sym_sqr_tuple] = STATE(232),
    [sym_array] = STATE(232),
    [sym_sqr_array] = STATE(232),
    [sym_struct] = STATE(232),
    [sym_table] = STATE(232),
    [sym__special_forms] = STATE(232),
    [sym_def] = STATE(232),
    [sym_var] = STATE(232),
    [sym_quote] = STATE(232),
    [sym_splice] = STATE(232),
    [sym_quasiquote] = STATE(232),
    [sym_unquote] = STATE(232),
    [sym_break] = STATE(232),
    [sym_set] = STATE(232),
    [sym_if] = STATE(232),
    [sym_do] = STATE(232),
    [sym_while] = STATE(232),
    [sym_fn] = STATE(232),
    [sym__shorthand] = STATE(232),
    [sym_short_quote] = STATE(232),
    [sym_short_splice] = STATE(232),
    [sym_short_quasiquote] = STATE(232),
    [sym_short_unquote] = STATE(232),
    [sym_short_fn] = STATE(232),
    [sym__specials] = STATE(232),
    [sym_extra_defs] = STATE(232),
    [sym__literals] = STATE(232),
    [sym_str_literal] = STATE(232),
    [sym_long_str_literal] = STATE(232),
    [sym_buffer_literal] = STATE(232),
    [sym_long_buffer_literal] = STATE(232),
    [sym_number_literal] = STATE(232),
    [sym_bool_literal] = STATE(232),
    [sym__identifier] = STATE(232),
    [sym_scoped_symbol] = STATE(232),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(529),
    [sym_keyword] = ACTIONS(531),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [63] = {
    [sym__expr] = STATE(233),
    [sym_tuple] = STATE(233),
    [sym_sqr_tuple] = STATE(233),
    [sym_array] = STATE(233),
    [sym_sqr_array] = STATE(233),
    [sym_struct] = STATE(233),
    [sym_table] = STATE(233),
    [sym__special_forms] = STATE(233),
    [sym_def] = STATE(233),
    [sym_var] = STATE(233),
    [sym_quote] = STATE(233),
    [sym_splice] = STATE(233),
    [sym_quasiquote] = STATE(233),
    [sym_unquote] = STATE(233),
    [sym_break] = STATE(233),
    [sym_set] = STATE(233),
    [sym_if] = STATE(233),
    [sym_do] = STATE(233),
    [sym_while] = STATE(233),
    [sym_fn] = STATE(233),
    [sym__shorthand] = STATE(233),
    [sym_short_quote] = STATE(233),
    [sym_short_splice] = STATE(233),
    [sym_short_quasiquote] = STATE(233),
    [sym_short_unquote] = STATE(233),
    [sym_short_fn] = STATE(233),
    [sym__specials] = STATE(233),
    [sym_extra_defs] = STATE(233),
    [sym__literals] = STATE(233),
    [sym_str_literal] = STATE(233),
    [sym_long_str_literal] = STATE(233),
    [sym_buffer_literal] = STATE(233),
    [sym_long_buffer_literal] = STATE(233),
    [sym_number_literal] = STATE(233),
    [sym_bool_literal] = STATE(233),
    [sym__identifier] = STATE(233),
    [sym_scoped_symbol] = STATE(233),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(533),
    [sym_keyword] = ACTIONS(535),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [64] = {
    [sym__expr] = STATE(53),
    [sym_tuple] = STATE(53),
    [sym_sqr_tuple] = STATE(53),
    [sym_array] = STATE(53),
    [sym_sqr_array] = STATE(53),
    [sym_struct] = STATE(53),
    [sym_table] = STATE(53),
    [sym__special_forms] = STATE(53),
    [sym_def] = STATE(53),
    [sym_var] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_splice] = STATE(53),
    [sym_quasiquote] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_break] = STATE(53),
    [sym_set] = STATE(53),
    [sym_if] = STATE(53),
    [sym_do] = STATE(53),
    [sym_while] = STATE(53),
    [sym_fn] = STATE(53),
    [sym__shorthand] = STATE(53),
    [sym_short_quote] = STATE(53),
    [sym_short_splice] = STATE(53),
    [sym_short_quasiquote] = STATE(53),
    [sym_short_unquote] = STATE(53),
    [sym_short_fn] = STATE(53),
    [sym__specials] = STATE(53),
    [sym_extra_defs] = STATE(53),
    [sym__literals] = STATE(53),
    [sym_str_literal] = STATE(53),
    [sym_long_str_literal] = STATE(53),
    [sym_buffer_literal] = STATE(53),
    [sym_long_buffer_literal] = STATE(53),
    [sym_number_literal] = STATE(53),
    [sym_bool_literal] = STATE(53),
    [sym__identifier] = STATE(53),
    [sym_scoped_symbol] = STATE(53),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(537),
    [sym_keyword] = ACTIONS(539),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [65] = {
    [sym__expr] = STATE(240),
    [sym_tuple] = STATE(240),
    [sym_sqr_tuple] = STATE(240),
    [sym_array] = STATE(240),
    [sym_sqr_array] = STATE(240),
    [sym_struct] = STATE(240),
    [sym_table] = STATE(240),
    [sym__special_forms] = STATE(240),
    [sym_def] = STATE(240),
    [sym_var] = STATE(240),
    [sym_quote] = STATE(240),
    [sym_splice] = STATE(240),
    [sym_quasiquote] = STATE(240),
    [sym_unquote] = STATE(240),
    [sym_break] = STATE(240),
    [sym_set] = STATE(240),
    [sym_if] = STATE(240),
    [sym_do] = STATE(240),
    [sym_while] = STATE(240),
    [sym_fn] = STATE(240),
    [sym__shorthand] = STATE(240),
    [sym_short_quote] = STATE(240),
    [sym_short_splice] = STATE(240),
    [sym_short_quasiquote] = STATE(240),
    [sym_short_unquote] = STATE(240),
    [sym_short_fn] = STATE(240),
    [sym__specials] = STATE(240),
    [sym_extra_defs] = STATE(240),
    [sym__literals] = STATE(240),
    [sym_str_literal] = STATE(240),
    [sym_long_str_literal] = STATE(240),
    [sym_buffer_literal] = STATE(240),
    [sym_long_buffer_literal] = STATE(240),
    [sym_number_literal] = STATE(240),
    [sym_bool_literal] = STATE(240),
    [sym__identifier] = STATE(240),
    [sym_scoped_symbol] = STATE(240),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(541),
    [sym_keyword] = ACTIONS(543),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [66] = {
    [sym__expr] = STATE(54),
    [sym_tuple] = STATE(54),
    [sym_sqr_tuple] = STATE(54),
    [sym_array] = STATE(54),
    [sym_sqr_array] = STATE(54),
    [sym_struct] = STATE(54),
    [sym_table] = STATE(54),
    [sym__special_forms] = STATE(54),
    [sym_def] = STATE(54),
    [sym_var] = STATE(54),
    [sym_quote] = STATE(54),
    [sym_splice] = STATE(54),
    [sym_quasiquote] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_break] = STATE(54),
    [sym_set] = STATE(54),
    [sym_if] = STATE(54),
    [sym_do] = STATE(54),
    [sym_while] = STATE(54),
    [sym_fn] = STATE(54),
    [sym__shorthand] = STATE(54),
    [sym_short_quote] = STATE(54),
    [sym_short_splice] = STATE(54),
    [sym_short_quasiquote] = STATE(54),
    [sym_short_unquote] = STATE(54),
    [sym_short_fn] = STATE(54),
    [sym__specials] = STATE(54),
    [sym_extra_defs] = STATE(54),
    [sym__literals] = STATE(54),
    [sym_str_literal] = STATE(54),
    [sym_long_str_literal] = STATE(54),
    [sym_buffer_literal] = STATE(54),
    [sym_long_buffer_literal] = STATE(54),
    [sym_number_literal] = STATE(54),
    [sym_bool_literal] = STATE(54),
    [sym__identifier] = STATE(54),
    [sym_scoped_symbol] = STATE(54),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(545),
    [sym_keyword] = ACTIONS(547),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [67] = {
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
    [sym__specials] = STATE(25),
    [sym_extra_defs] = STATE(25),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(549),
    [sym_keyword] = ACTIONS(551),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [68] = {
    [sym__expr] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym_sqr_tuple] = STATE(70),
    [sym_array] = STATE(70),
    [sym_sqr_array] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_table] = STATE(70),
    [sym__special_forms] = STATE(70),
    [sym_def] = STATE(70),
    [sym_var] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_splice] = STATE(70),
    [sym_quasiquote] = STATE(70),
    [sym_unquote] = STATE(70),
    [sym_break] = STATE(70),
    [sym_set] = STATE(70),
    [sym_if] = STATE(70),
    [sym_do] = STATE(70),
    [sym_while] = STATE(70),
    [sym_fn] = STATE(70),
    [sym__shorthand] = STATE(70),
    [sym_short_quote] = STATE(70),
    [sym_short_splice] = STATE(70),
    [sym_short_quasiquote] = STATE(70),
    [sym_short_unquote] = STATE(70),
    [sym_short_fn] = STATE(70),
    [sym__specials] = STATE(70),
    [sym_extra_defs] = STATE(70),
    [sym__literals] = STATE(70),
    [sym_str_literal] = STATE(70),
    [sym_long_str_literal] = STATE(70),
    [sym_buffer_literal] = STATE(70),
    [sym_long_buffer_literal] = STATE(70),
    [sym_number_literal] = STATE(70),
    [sym_bool_literal] = STATE(70),
    [sym__identifier] = STATE(70),
    [sym_scoped_symbol] = STATE(70),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(553),
    [sym_keyword] = ACTIONS(555),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [69] = {
    [sym__expr] = STATE(274),
    [sym_tuple] = STATE(274),
    [sym_sqr_tuple] = STATE(274),
    [sym_array] = STATE(274),
    [sym_sqr_array] = STATE(274),
    [sym_struct] = STATE(274),
    [sym_table] = STATE(274),
    [sym__special_forms] = STATE(274),
    [sym_def] = STATE(274),
    [sym_var] = STATE(274),
    [sym_quote] = STATE(274),
    [sym_splice] = STATE(274),
    [sym_quasiquote] = STATE(274),
    [sym_unquote] = STATE(274),
    [sym_break] = STATE(274),
    [sym_set] = STATE(274),
    [sym_if] = STATE(274),
    [sym_do] = STATE(274),
    [sym_while] = STATE(274),
    [sym_fn] = STATE(274),
    [sym__shorthand] = STATE(274),
    [sym_short_quote] = STATE(274),
    [sym_short_splice] = STATE(274),
    [sym_short_quasiquote] = STATE(274),
    [sym_short_unquote] = STATE(274),
    [sym_short_fn] = STATE(274),
    [sym__specials] = STATE(274),
    [sym_extra_defs] = STATE(274),
    [sym__literals] = STATE(274),
    [sym_str_literal] = STATE(274),
    [sym_long_str_literal] = STATE(274),
    [sym_buffer_literal] = STATE(274),
    [sym_long_buffer_literal] = STATE(274),
    [sym_number_literal] = STATE(274),
    [sym_bool_literal] = STATE(274),
    [sym__identifier] = STATE(274),
    [sym_scoped_symbol] = STATE(274),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(557),
    [sym_keyword] = ACTIONS(559),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [70] = {
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
    [sym__specials] = STATE(55),
    [sym_extra_defs] = STATE(55),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(561),
    [sym_keyword] = ACTIONS(563),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [71] = {
    [sym__expr] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_sqr_tuple] = STATE(69),
    [sym_array] = STATE(69),
    [sym_sqr_array] = STATE(69),
    [sym_struct] = STATE(69),
    [sym_table] = STATE(69),
    [sym__special_forms] = STATE(69),
    [sym_def] = STATE(69),
    [sym_var] = STATE(69),
    [sym_quote] = STATE(69),
    [sym_splice] = STATE(69),
    [sym_quasiquote] = STATE(69),
    [sym_unquote] = STATE(69),
    [sym_break] = STATE(69),
    [sym_set] = STATE(69),
    [sym_if] = STATE(69),
    [sym_do] = STATE(69),
    [sym_while] = STATE(69),
    [sym_fn] = STATE(69),
    [sym__shorthand] = STATE(69),
    [sym_short_quote] = STATE(69),
    [sym_short_splice] = STATE(69),
    [sym_short_quasiquote] = STATE(69),
    [sym_short_unquote] = STATE(69),
    [sym_short_fn] = STATE(69),
    [sym__specials] = STATE(69),
    [sym_extra_defs] = STATE(69),
    [sym__literals] = STATE(69),
    [sym_str_literal] = STATE(69),
    [sym_long_str_literal] = STATE(69),
    [sym_buffer_literal] = STATE(69),
    [sym_long_buffer_literal] = STATE(69),
    [sym_number_literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [sym__identifier] = STATE(69),
    [sym_scoped_symbol] = STATE(69),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(565),
    [sym_keyword] = ACTIONS(567),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [72] = {
    [sym__expr] = STATE(220),
    [sym_tuple] = STATE(220),
    [sym_sqr_tuple] = STATE(220),
    [sym_array] = STATE(220),
    [sym_sqr_array] = STATE(220),
    [sym_struct] = STATE(220),
    [sym_table] = STATE(220),
    [sym__special_forms] = STATE(220),
    [sym_def] = STATE(220),
    [sym_var] = STATE(220),
    [sym_quote] = STATE(220),
    [sym_splice] = STATE(220),
    [sym_quasiquote] = STATE(220),
    [sym_unquote] = STATE(220),
    [sym_break] = STATE(220),
    [sym_set] = STATE(220),
    [sym_if] = STATE(220),
    [sym_do] = STATE(220),
    [sym_while] = STATE(220),
    [sym_fn] = STATE(220),
    [sym__shorthand] = STATE(220),
    [sym_short_quote] = STATE(220),
    [sym_short_splice] = STATE(220),
    [sym_short_quasiquote] = STATE(220),
    [sym_short_unquote] = STATE(220),
    [sym_short_fn] = STATE(220),
    [sym__specials] = STATE(220),
    [sym_extra_defs] = STATE(220),
    [sym__literals] = STATE(220),
    [sym_str_literal] = STATE(220),
    [sym_long_str_literal] = STATE(220),
    [sym_buffer_literal] = STATE(220),
    [sym_long_buffer_literal] = STATE(220),
    [sym_number_literal] = STATE(220),
    [sym_bool_literal] = STATE(220),
    [sym__identifier] = STATE(220),
    [sym_scoped_symbol] = STATE(220),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(569),
    [sym_keyword] = ACTIONS(571),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [73] = {
    [sym__expr] = STATE(221),
    [sym_tuple] = STATE(221),
    [sym_sqr_tuple] = STATE(221),
    [sym_array] = STATE(221),
    [sym_sqr_array] = STATE(221),
    [sym_struct] = STATE(221),
    [sym_table] = STATE(221),
    [sym__special_forms] = STATE(221),
    [sym_def] = STATE(221),
    [sym_var] = STATE(221),
    [sym_quote] = STATE(221),
    [sym_splice] = STATE(221),
    [sym_quasiquote] = STATE(221),
    [sym_unquote] = STATE(221),
    [sym_break] = STATE(221),
    [sym_set] = STATE(221),
    [sym_if] = STATE(221),
    [sym_do] = STATE(221),
    [sym_while] = STATE(221),
    [sym_fn] = STATE(221),
    [sym__shorthand] = STATE(221),
    [sym_short_quote] = STATE(221),
    [sym_short_splice] = STATE(221),
    [sym_short_quasiquote] = STATE(221),
    [sym_short_unquote] = STATE(221),
    [sym_short_fn] = STATE(221),
    [sym__specials] = STATE(221),
    [sym_extra_defs] = STATE(221),
    [sym__literals] = STATE(221),
    [sym_str_literal] = STATE(221),
    [sym_long_str_literal] = STATE(221),
    [sym_buffer_literal] = STATE(221),
    [sym_long_buffer_literal] = STATE(221),
    [sym_number_literal] = STATE(221),
    [sym_bool_literal] = STATE(221),
    [sym__identifier] = STATE(221),
    [sym_scoped_symbol] = STATE(221),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(573),
    [sym_keyword] = ACTIONS(575),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [74] = {
    [sym__expr] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_sqr_tuple] = STATE(222),
    [sym_array] = STATE(222),
    [sym_sqr_array] = STATE(222),
    [sym_struct] = STATE(222),
    [sym_table] = STATE(222),
    [sym__special_forms] = STATE(222),
    [sym_def] = STATE(222),
    [sym_var] = STATE(222),
    [sym_quote] = STATE(222),
    [sym_splice] = STATE(222),
    [sym_quasiquote] = STATE(222),
    [sym_unquote] = STATE(222),
    [sym_break] = STATE(222),
    [sym_set] = STATE(222),
    [sym_if] = STATE(222),
    [sym_do] = STATE(222),
    [sym_while] = STATE(222),
    [sym_fn] = STATE(222),
    [sym__shorthand] = STATE(222),
    [sym_short_quote] = STATE(222),
    [sym_short_splice] = STATE(222),
    [sym_short_quasiquote] = STATE(222),
    [sym_short_unquote] = STATE(222),
    [sym_short_fn] = STATE(222),
    [sym__specials] = STATE(222),
    [sym_extra_defs] = STATE(222),
    [sym__literals] = STATE(222),
    [sym_str_literal] = STATE(222),
    [sym_long_str_literal] = STATE(222),
    [sym_buffer_literal] = STATE(222),
    [sym_long_buffer_literal] = STATE(222),
    [sym_number_literal] = STATE(222),
    [sym_bool_literal] = STATE(222),
    [sym__identifier] = STATE(222),
    [sym_scoped_symbol] = STATE(222),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(577),
    [sym_keyword] = ACTIONS(579),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [75] = {
    [sym__expr] = STATE(230),
    [sym_tuple] = STATE(230),
    [sym_sqr_tuple] = STATE(230),
    [sym_array] = STATE(230),
    [sym_sqr_array] = STATE(230),
    [sym_struct] = STATE(230),
    [sym_table] = STATE(230),
    [sym__special_forms] = STATE(230),
    [sym_def] = STATE(230),
    [sym_var] = STATE(230),
    [sym_quote] = STATE(230),
    [sym_splice] = STATE(230),
    [sym_quasiquote] = STATE(230),
    [sym_unquote] = STATE(230),
    [sym_break] = STATE(230),
    [sym_set] = STATE(230),
    [sym_if] = STATE(230),
    [sym_do] = STATE(230),
    [sym_while] = STATE(230),
    [sym_fn] = STATE(230),
    [sym__shorthand] = STATE(230),
    [sym_short_quote] = STATE(230),
    [sym_short_splice] = STATE(230),
    [sym_short_quasiquote] = STATE(230),
    [sym_short_unquote] = STATE(230),
    [sym_short_fn] = STATE(230),
    [sym__specials] = STATE(230),
    [sym_extra_defs] = STATE(230),
    [sym__literals] = STATE(230),
    [sym_str_literal] = STATE(230),
    [sym_long_str_literal] = STATE(230),
    [sym_buffer_literal] = STATE(230),
    [sym_long_buffer_literal] = STATE(230),
    [sym_number_literal] = STATE(230),
    [sym_bool_literal] = STATE(230),
    [sym__identifier] = STATE(230),
    [sym_scoped_symbol] = STATE(230),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(581),
    [sym_keyword] = ACTIONS(583),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [76] = {
    [sym__expr] = STATE(260),
    [sym_tuple] = STATE(260),
    [sym_sqr_tuple] = STATE(260),
    [sym_array] = STATE(260),
    [sym_sqr_array] = STATE(260),
    [sym_struct] = STATE(260),
    [sym_table] = STATE(260),
    [sym__special_forms] = STATE(260),
    [sym_def] = STATE(260),
    [sym_var] = STATE(260),
    [sym_quote] = STATE(260),
    [sym_splice] = STATE(260),
    [sym_quasiquote] = STATE(260),
    [sym_unquote] = STATE(260),
    [sym_break] = STATE(260),
    [sym_set] = STATE(260),
    [sym_if] = STATE(260),
    [sym_do] = STATE(260),
    [sym_while] = STATE(260),
    [sym_fn] = STATE(260),
    [sym__shorthand] = STATE(260),
    [sym_short_quote] = STATE(260),
    [sym_short_splice] = STATE(260),
    [sym_short_quasiquote] = STATE(260),
    [sym_short_unquote] = STATE(260),
    [sym_short_fn] = STATE(260),
    [sym__specials] = STATE(260),
    [sym_extra_defs] = STATE(260),
    [sym__literals] = STATE(260),
    [sym_str_literal] = STATE(260),
    [sym_long_str_literal] = STATE(260),
    [sym_buffer_literal] = STATE(260),
    [sym_long_buffer_literal] = STATE(260),
    [sym_number_literal] = STATE(260),
    [sym_bool_literal] = STATE(260),
    [sym__identifier] = STATE(260),
    [sym_scoped_symbol] = STATE(260),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(585),
    [sym_keyword] = ACTIONS(587),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [77] = {
    [sym__expr] = STATE(42),
    [sym_tuple] = STATE(42),
    [sym_sqr_tuple] = STATE(42),
    [sym_array] = STATE(42),
    [sym_sqr_array] = STATE(42),
    [sym_struct] = STATE(42),
    [sym_table] = STATE(42),
    [sym__special_forms] = STATE(42),
    [sym_def] = STATE(42),
    [sym_var] = STATE(42),
    [sym_quote] = STATE(42),
    [sym_splice] = STATE(42),
    [sym_quasiquote] = STATE(42),
    [sym_unquote] = STATE(42),
    [sym_break] = STATE(42),
    [sym_set] = STATE(42),
    [sym_if] = STATE(42),
    [sym_do] = STATE(42),
    [sym_while] = STATE(42),
    [sym_fn] = STATE(42),
    [sym__shorthand] = STATE(42),
    [sym_short_quote] = STATE(42),
    [sym_short_splice] = STATE(42),
    [sym_short_quasiquote] = STATE(42),
    [sym_short_unquote] = STATE(42),
    [sym_short_fn] = STATE(42),
    [sym__specials] = STATE(42),
    [sym_extra_defs] = STATE(42),
    [sym__literals] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_long_str_literal] = STATE(42),
    [sym_buffer_literal] = STATE(42),
    [sym_long_buffer_literal] = STATE(42),
    [sym_number_literal] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym__identifier] = STATE(42),
    [sym_scoped_symbol] = STATE(42),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(589),
    [sym_keyword] = ACTIONS(591),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [78] = {
    [sym__expr] = STATE(241),
    [sym_tuple] = STATE(241),
    [sym_sqr_tuple] = STATE(241),
    [sym_array] = STATE(241),
    [sym_sqr_array] = STATE(241),
    [sym_struct] = STATE(241),
    [sym_table] = STATE(241),
    [sym__special_forms] = STATE(241),
    [sym_def] = STATE(241),
    [sym_var] = STATE(241),
    [sym_quote] = STATE(241),
    [sym_splice] = STATE(241),
    [sym_quasiquote] = STATE(241),
    [sym_unquote] = STATE(241),
    [sym_break] = STATE(241),
    [sym_set] = STATE(241),
    [sym_if] = STATE(241),
    [sym_do] = STATE(241),
    [sym_while] = STATE(241),
    [sym_fn] = STATE(241),
    [sym__shorthand] = STATE(241),
    [sym_short_quote] = STATE(241),
    [sym_short_splice] = STATE(241),
    [sym_short_quasiquote] = STATE(241),
    [sym_short_unquote] = STATE(241),
    [sym_short_fn] = STATE(241),
    [sym__specials] = STATE(241),
    [sym_extra_defs] = STATE(241),
    [sym__literals] = STATE(241),
    [sym_str_literal] = STATE(241),
    [sym_long_str_literal] = STATE(241),
    [sym_buffer_literal] = STATE(241),
    [sym_long_buffer_literal] = STATE(241),
    [sym_number_literal] = STATE(241),
    [sym_bool_literal] = STATE(241),
    [sym__identifier] = STATE(241),
    [sym_scoped_symbol] = STATE(241),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(593),
    [sym_keyword] = ACTIONS(595),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [79] = {
    [sym__expr] = STATE(242),
    [sym_tuple] = STATE(242),
    [sym_sqr_tuple] = STATE(242),
    [sym_array] = STATE(242),
    [sym_sqr_array] = STATE(242),
    [sym_struct] = STATE(242),
    [sym_table] = STATE(242),
    [sym__special_forms] = STATE(242),
    [sym_def] = STATE(242),
    [sym_var] = STATE(242),
    [sym_quote] = STATE(242),
    [sym_splice] = STATE(242),
    [sym_quasiquote] = STATE(242),
    [sym_unquote] = STATE(242),
    [sym_break] = STATE(242),
    [sym_set] = STATE(242),
    [sym_if] = STATE(242),
    [sym_do] = STATE(242),
    [sym_while] = STATE(242),
    [sym_fn] = STATE(242),
    [sym__shorthand] = STATE(242),
    [sym_short_quote] = STATE(242),
    [sym_short_splice] = STATE(242),
    [sym_short_quasiquote] = STATE(242),
    [sym_short_unquote] = STATE(242),
    [sym_short_fn] = STATE(242),
    [sym__specials] = STATE(242),
    [sym_extra_defs] = STATE(242),
    [sym__literals] = STATE(242),
    [sym_str_literal] = STATE(242),
    [sym_long_str_literal] = STATE(242),
    [sym_buffer_literal] = STATE(242),
    [sym_long_buffer_literal] = STATE(242),
    [sym_number_literal] = STATE(242),
    [sym_bool_literal] = STATE(242),
    [sym__identifier] = STATE(242),
    [sym_scoped_symbol] = STATE(242),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(597),
    [sym_keyword] = ACTIONS(599),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [80] = {
    [sym__expr] = STATE(244),
    [sym_tuple] = STATE(244),
    [sym_sqr_tuple] = STATE(244),
    [sym_array] = STATE(244),
    [sym_sqr_array] = STATE(244),
    [sym_struct] = STATE(244),
    [sym_table] = STATE(244),
    [sym__special_forms] = STATE(244),
    [sym_def] = STATE(244),
    [sym_var] = STATE(244),
    [sym_quote] = STATE(244),
    [sym_splice] = STATE(244),
    [sym_quasiquote] = STATE(244),
    [sym_unquote] = STATE(244),
    [sym_break] = STATE(244),
    [sym_set] = STATE(244),
    [sym_if] = STATE(244),
    [sym_do] = STATE(244),
    [sym_while] = STATE(244),
    [sym_fn] = STATE(244),
    [sym__shorthand] = STATE(244),
    [sym_short_quote] = STATE(244),
    [sym_short_splice] = STATE(244),
    [sym_short_quasiquote] = STATE(244),
    [sym_short_unquote] = STATE(244),
    [sym_short_fn] = STATE(244),
    [sym__specials] = STATE(244),
    [sym_extra_defs] = STATE(244),
    [sym__literals] = STATE(244),
    [sym_str_literal] = STATE(244),
    [sym_long_str_literal] = STATE(244),
    [sym_buffer_literal] = STATE(244),
    [sym_long_buffer_literal] = STATE(244),
    [sym_number_literal] = STATE(244),
    [sym_bool_literal] = STATE(244),
    [sym__identifier] = STATE(244),
    [sym_scoped_symbol] = STATE(244),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(601),
    [sym_keyword] = ACTIONS(603),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [81] = {
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
    [sym__shorthand] = STATE(44),
    [sym_short_quote] = STATE(44),
    [sym_short_splice] = STATE(44),
    [sym_short_quasiquote] = STATE(44),
    [sym_short_unquote] = STATE(44),
    [sym_short_fn] = STATE(44),
    [sym__specials] = STATE(44),
    [sym_extra_defs] = STATE(44),
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
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(605),
    [sym_keyword] = ACTIONS(607),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [82] = {
    [sym__expr] = STATE(251),
    [sym_tuple] = STATE(251),
    [sym_sqr_tuple] = STATE(251),
    [sym_array] = STATE(251),
    [sym_sqr_array] = STATE(251),
    [sym_struct] = STATE(251),
    [sym_table] = STATE(251),
    [sym__special_forms] = STATE(251),
    [sym_def] = STATE(251),
    [sym_var] = STATE(251),
    [sym_quote] = STATE(251),
    [sym_splice] = STATE(251),
    [sym_quasiquote] = STATE(251),
    [sym_unquote] = STATE(251),
    [sym_break] = STATE(251),
    [sym_set] = STATE(251),
    [sym_if] = STATE(251),
    [sym_do] = STATE(251),
    [sym_while] = STATE(251),
    [sym_fn] = STATE(251),
    [sym__shorthand] = STATE(251),
    [sym_short_quote] = STATE(251),
    [sym_short_splice] = STATE(251),
    [sym_short_quasiquote] = STATE(251),
    [sym_short_unquote] = STATE(251),
    [sym_short_fn] = STATE(251),
    [sym__specials] = STATE(251),
    [sym_extra_defs] = STATE(251),
    [sym__literals] = STATE(251),
    [sym_str_literal] = STATE(251),
    [sym_long_str_literal] = STATE(251),
    [sym_buffer_literal] = STATE(251),
    [sym_long_buffer_literal] = STATE(251),
    [sym_number_literal] = STATE(251),
    [sym_bool_literal] = STATE(251),
    [sym__identifier] = STATE(251),
    [sym_scoped_symbol] = STATE(251),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_AT_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_AT_LBRACE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_AT_DQUOTE] = ACTIONS(293),
    [aux_sym_number_literal_token1] = ACTIONS(295),
    [aux_sym_number_literal_token2] = ACTIONS(295),
    [aux_sym_number_literal_token3] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [sym_nil_literal] = ACTIONS(609),
    [sym_keyword] = ACTIONS(611),
    [sym_symbol] = ACTIONS(303),
    [sym__long_str] = ACTIONS(493),
    [sym__long_buffer] = ACTIONS(305),
  },
  [83] = {
    [sym__expr] = STATE(65),
    [sym_tuple] = STATE(65),
    [sym_sqr_tuple] = STATE(65),
    [sym_array] = STATE(65),
    [sym_sqr_array] = STATE(65),
    [sym_struct] = STATE(65),
    [sym_table] = STATE(65),
    [sym__special_forms] = STATE(65),
    [sym_def] = STATE(65),
    [sym_var] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_splice] = STATE(65),
    [sym_quasiquote] = STATE(65),
    [sym_unquote] = STATE(65),
    [sym_break] = STATE(65),
    [sym_set] = STATE(65),
    [sym_if] = STATE(65),
    [sym_do] = STATE(65),
    [sym_while] = STATE(65),
    [sym_fn] = STATE(65),
    [sym__shorthand] = STATE(65),
    [sym_short_quote] = STATE(65),
    [sym_short_splice] = STATE(65),
    [sym_short_quasiquote] = STATE(65),
    [sym_short_unquote] = STATE(65),
    [sym_short_fn] = STATE(65),
    [sym__specials] = STATE(65),
    [sym_extra_defs] = STATE(65),
    [sym__literals] = STATE(65),
    [sym_str_literal] = STATE(65),
    [sym_long_str_literal] = STATE(65),
    [sym_buffer_literal] = STATE(65),
    [sym_long_buffer_literal] = STATE(65),
    [sym_number_literal] = STATE(65),
    [sym_bool_literal] = STATE(65),
    [sym__identifier] = STATE(65),
    [sym_scoped_symbol] = STATE(65),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(613),
    [sym_keyword] = ACTIONS(615),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [84] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_sqr_tuple] = STATE(38),
    [sym_array] = STATE(38),
    [sym_sqr_array] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_table] = STATE(38),
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
    [sym__shorthand] = STATE(38),
    [sym_short_quote] = STATE(38),
    [sym_short_splice] = STATE(38),
    [sym_short_quasiquote] = STATE(38),
    [sym_short_unquote] = STATE(38),
    [sym_short_fn] = STATE(38),
    [sym__specials] = STATE(38),
    [sym_extra_defs] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_long_str_literal] = STATE(38),
    [sym_buffer_literal] = STATE(38),
    [sym_long_buffer_literal] = STATE(38),
    [sym_number_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym__identifier] = STATE(38),
    [sym_scoped_symbol] = STATE(38),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(617),
    [sym_keyword] = ACTIONS(619),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [85] = {
    [sym__expr] = STATE(36),
    [sym_tuple] = STATE(36),
    [sym_sqr_tuple] = STATE(36),
    [sym_array] = STATE(36),
    [sym_sqr_array] = STATE(36),
    [sym_struct] = STATE(36),
    [sym_table] = STATE(36),
    [sym__special_forms] = STATE(36),
    [sym_def] = STATE(36),
    [sym_var] = STATE(36),
    [sym_quote] = STATE(36),
    [sym_splice] = STATE(36),
    [sym_quasiquote] = STATE(36),
    [sym_unquote] = STATE(36),
    [sym_break] = STATE(36),
    [sym_set] = STATE(36),
    [sym_if] = STATE(36),
    [sym_do] = STATE(36),
    [sym_while] = STATE(36),
    [sym_fn] = STATE(36),
    [sym__shorthand] = STATE(36),
    [sym_short_quote] = STATE(36),
    [sym_short_splice] = STATE(36),
    [sym_short_quasiquote] = STATE(36),
    [sym_short_unquote] = STATE(36),
    [sym_short_fn] = STATE(36),
    [sym__specials] = STATE(36),
    [sym_extra_defs] = STATE(36),
    [sym__literals] = STATE(36),
    [sym_str_literal] = STATE(36),
    [sym_long_str_literal] = STATE(36),
    [sym_buffer_literal] = STATE(36),
    [sym_long_buffer_literal] = STATE(36),
    [sym_number_literal] = STATE(36),
    [sym_bool_literal] = STATE(36),
    [sym__identifier] = STATE(36),
    [sym_scoped_symbol] = STATE(36),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(621),
    [sym_keyword] = ACTIONS(623),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [86] = {
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
    [sym__shorthand] = STATE(104),
    [sym_short_quote] = STATE(104),
    [sym_short_splice] = STATE(104),
    [sym_short_quasiquote] = STATE(104),
    [sym_short_unquote] = STATE(104),
    [sym_short_fn] = STATE(104),
    [sym__specials] = STATE(104),
    [sym_extra_defs] = STATE(104),
    [sym__literals] = STATE(104),
    [sym_str_literal] = STATE(104),
    [sym_long_str_literal] = STATE(104),
    [sym_buffer_literal] = STATE(104),
    [sym_long_buffer_literal] = STATE(104),
    [sym_number_literal] = STATE(104),
    [sym_bool_literal] = STATE(104),
    [sym__identifier] = STATE(104),
    [sym_scoped_symbol] = STATE(104),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(625),
    [sym_keyword] = ACTIONS(627),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [87] = {
    [sym__expr] = STATE(94),
    [sym_tuple] = STATE(94),
    [sym_sqr_tuple] = STATE(94),
    [sym_array] = STATE(94),
    [sym_sqr_array] = STATE(94),
    [sym_struct] = STATE(94),
    [sym_table] = STATE(94),
    [sym__special_forms] = STATE(94),
    [sym_def] = STATE(94),
    [sym_var] = STATE(94),
    [sym_quote] = STATE(94),
    [sym_splice] = STATE(94),
    [sym_quasiquote] = STATE(94),
    [sym_unquote] = STATE(94),
    [sym_break] = STATE(94),
    [sym_set] = STATE(94),
    [sym_if] = STATE(94),
    [sym_do] = STATE(94),
    [sym_while] = STATE(94),
    [sym_fn] = STATE(94),
    [sym__shorthand] = STATE(94),
    [sym_short_quote] = STATE(94),
    [sym_short_splice] = STATE(94),
    [sym_short_quasiquote] = STATE(94),
    [sym_short_unquote] = STATE(94),
    [sym_short_fn] = STATE(94),
    [sym__specials] = STATE(94),
    [sym_extra_defs] = STATE(94),
    [sym__literals] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_long_str_literal] = STATE(94),
    [sym_buffer_literal] = STATE(94),
    [sym_long_buffer_literal] = STATE(94),
    [sym_number_literal] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym__identifier] = STATE(94),
    [sym_scoped_symbol] = STATE(94),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(629),
    [sym_keyword] = ACTIONS(631),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [88] = {
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
    [sym__shorthand] = STATE(105),
    [sym_short_quote] = STATE(105),
    [sym_short_splice] = STATE(105),
    [sym_short_quasiquote] = STATE(105),
    [sym_short_unquote] = STATE(105),
    [sym_short_fn] = STATE(105),
    [sym__specials] = STATE(105),
    [sym_extra_defs] = STATE(105),
    [sym__literals] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_long_str_literal] = STATE(105),
    [sym_buffer_literal] = STATE(105),
    [sym_long_buffer_literal] = STATE(105),
    [sym_number_literal] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym__identifier] = STATE(105),
    [sym_scoped_symbol] = STATE(105),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(633),
    [sym_keyword] = ACTIONS(635),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [89] = {
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
    [sym__specials] = STATE(111),
    [sym_extra_defs] = STATE(111),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(637),
    [sym_keyword] = ACTIONS(639),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
  [90] = {
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
    [sym__shorthand] = STATE(114),
    [sym_short_quote] = STATE(114),
    [sym_short_splice] = STATE(114),
    [sym_short_quasiquote] = STATE(114),
    [sym_short_unquote] = STATE(114),
    [sym_short_fn] = STATE(114),
    [sym__specials] = STATE(114),
    [sym_extra_defs] = STATE(114),
    [sym__literals] = STATE(114),
    [sym_str_literal] = STATE(114),
    [sym_long_str_literal] = STATE(114),
    [sym_buffer_literal] = STATE(114),
    [sym_long_buffer_literal] = STATE(114),
    [sym_number_literal] = STATE(114),
    [sym_bool_literal] = STATE(114),
    [sym__identifier] = STATE(114),
    [sym_scoped_symbol] = STATE(114),
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
    [anon_sym_AT_DQUOTE] = ACTIONS(31),
    [aux_sym_number_literal_token1] = ACTIONS(33),
    [aux_sym_number_literal_token2] = ACTIONS(33),
    [aux_sym_number_literal_token3] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_nil_literal] = ACTIONS(641),
    [sym_keyword] = ACTIONS(643),
    [sym_symbol] = ACTIONS(41),
    [sym__long_str] = ACTIONS(43),
    [sym__long_buffer] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(647), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(645), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [38] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(653), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(651), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [76] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(655), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(659), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [146] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(663), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(667), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(671), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(675), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [286] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(679), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [321] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(651), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(683), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(687), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [426] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(691), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(695), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(699), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [531] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(703), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [566] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(707), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [601] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(711), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(715), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [671] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(719), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [706] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(723), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [741] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(727), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [776] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(731), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [811] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(735), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(739), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(743), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [916] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(747), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [951] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(751), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [986] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(755), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(759), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1056] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(763), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1091] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(767), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(771), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1161] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(782), 1,
      sym_keyword,
    ACTIONS(785), 1,
      sym__long_str,
    STATE(124), 1,
      aux_sym__metadata,
    STATE(153), 1,
      sym_doc_str,
    STATE(152), 2,
      sym_str_literal,
      sym_long_str_literal,
    ACTIONS(780), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(775), 13,
      sym__long_buffer,
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
  [1208] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(788), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(792), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(796), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1313] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(800), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(806), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(804), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(808), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(812), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(818), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(816), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1488] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(820), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(824), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(828), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(832), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(836), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(840), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(844), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(850), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(848), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(854), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(852), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(858), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(856), 20,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(860), 18,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(864), 17,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(870), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(868), 17,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1935] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    ACTIONS(874), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(872), 16,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [1969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(876), 17,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(880), 17,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(884), 17,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2065] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(888), 16,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(872), 16,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(888), 16,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(896), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(894), 16,
      sym__long_str,
      sym__long_buffer,
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
      anon_sym_AT_DQUOTE,
      sym_keyword,
  [2192] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      sym_keyword,
    ACTIONS(904), 1,
      sym__long_str,
    STATE(33), 1,
      sym_parameters,
    STATE(158), 1,
      aux_sym__metadata,
    STATE(180), 1,
      sym_doc_str,
    STATE(176), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2221] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      sym_keyword,
    ACTIONS(904), 1,
      sym__long_str,
    STATE(48), 1,
      sym_parameters,
    STATE(154), 1,
      aux_sym__metadata,
    STATE(180), 1,
      sym_doc_str,
    STATE(176), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2250] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      sym_keyword,
    ACTIONS(904), 1,
      sym__long_str,
    STATE(39), 1,
      sym_parameters,
    STATE(157), 1,
      aux_sym__metadata,
    STATE(180), 1,
      sym_doc_str,
    STATE(176), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2279] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      sym_keyword,
    ACTIONS(904), 1,
      sym__long_str,
    STATE(32), 1,
      sym_parameters,
    STATE(158), 1,
      aux_sym__metadata,
    STATE(180), 1,
      sym_doc_str,
    STATE(176), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2308] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      sym_keyword,
    ACTIONS(912), 1,
      sym__long_str,
    STATE(158), 1,
      aux_sym__metadata,
    STATE(180), 1,
      sym_doc_str,
    STATE(176), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2334] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(915), 1,
      sym_keyword,
    ACTIONS(917), 1,
      sym_symbol,
    STATE(7), 1,
      sym_parameters,
    STATE(191), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2354] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(917), 1,
      sym_symbol,
    ACTIONS(919), 1,
      sym_keyword,
    STATE(18), 1,
      sym_parameters,
    STATE(192), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_SLASH,
    ACTIONS(645), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_SLASH,
    ACTIONS(651), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2400] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      aux_sym_str_literal_token1,
    ACTIONS(929), 1,
      sym_escape_sequence,
    STATE(165), 1,
      aux_sym_str_literal_repeat1,
  [2416] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(931), 1,
      sym_keyword,
    ACTIONS(933), 1,
      sym_symbol,
    STATE(155), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2430] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      aux_sym_str_literal_token1,
    ACTIONS(939), 1,
      sym_escape_sequence,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2446] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2456] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      aux_sym_str_literal_token1,
    ACTIONS(939), 1,
      sym_escape_sequence,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2472] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      aux_sym_str_literal_token1,
    ACTIONS(939), 1,
      sym_escape_sequence,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2488] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      aux_sym_str_literal_token1,
    ACTIONS(939), 1,
      sym_escape_sequence,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2504] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      sym_symbol,
    ACTIONS(947), 1,
      sym_keyword,
    STATE(156), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2518] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      aux_sym_str_literal_token1,
    ACTIONS(939), 1,
      sym_escape_sequence,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2534] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym_str_literal_token1,
    ACTIONS(955), 1,
      sym_escape_sequence,
    STATE(167), 1,
      aux_sym_str_literal_repeat1,
  [2550] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      aux_sym_str_literal_token1,
    ACTIONS(961), 1,
      sym_escape_sequence,
    STATE(168), 1,
      aux_sym_str_literal_repeat1,
  [2566] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(965), 1,
      aux_sym_str_literal_token1,
    ACTIONS(967), 1,
      sym_escape_sequence,
    STATE(171), 1,
      aux_sym_str_literal_repeat1,
  [2582] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    ACTIONS(971), 1,
      aux_sym_str_literal_token1,
    ACTIONS(974), 1,
      sym_escape_sequence,
    STATE(175), 1,
      aux_sym_str_literal_repeat1,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(888), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2608] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2618] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2648] = 5,
    ACTIONS(923), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
    ACTIONS(979), 1,
      aux_sym_str_literal_token1,
    ACTIONS(981), 1,
      sym_escape_sequence,
    STATE(169), 1,
      aux_sym_str_literal_repeat1,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 4,
      sym__long_str,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_keyword,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 1,
      anon_sym_SLASH,
    ACTIONS(645), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2685] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 1,
      anon_sym_SLASH,
    ACTIONS(651), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2696] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 1,
      anon_sym_RBRACK,
    ACTIONS(987), 1,
      sym_symbol,
    STATE(186), 1,
      aux_sym_parameters_repeat1,
  [2709] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 1,
      sym_symbol,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_parameters_repeat1,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    ACTIONS(993), 1,
      sym_symbol,
    STATE(187), 1,
      aux_sym_parameters_repeat1,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_symbol,
    STATE(189), 1,
      sym_scoped_symbol,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 2,
      anon_sym_RBRACK,
      sym_symbol,
  [2761] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_parameters,
  [2771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_parameters,
  [2781] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      sym_symbol,
    STATE(179), 1,
      sym_scoped_symbol,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      sym_symbol,
    STATE(100), 1,
      sym_scoped_symbol,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [2808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
  [3081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [3102] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [3130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [3151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
  [3158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
  [3186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [3235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [3242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [3249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [3291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
  [3298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      ts_builtin_sym_end,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
  [3326] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
  [3340] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
  [3354] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(91)] = 0,
  [SMALL_STATE(92)] = 38,
  [SMALL_STATE(93)] = 76,
  [SMALL_STATE(94)] = 111,
  [SMALL_STATE(95)] = 146,
  [SMALL_STATE(96)] = 181,
  [SMALL_STATE(97)] = 216,
  [SMALL_STATE(98)] = 251,
  [SMALL_STATE(99)] = 286,
  [SMALL_STATE(100)] = 321,
  [SMALL_STATE(101)] = 356,
  [SMALL_STATE(102)] = 391,
  [SMALL_STATE(103)] = 426,
  [SMALL_STATE(104)] = 461,
  [SMALL_STATE(105)] = 496,
  [SMALL_STATE(106)] = 531,
  [SMALL_STATE(107)] = 566,
  [SMALL_STATE(108)] = 601,
  [SMALL_STATE(109)] = 636,
  [SMALL_STATE(110)] = 671,
  [SMALL_STATE(111)] = 706,
  [SMALL_STATE(112)] = 741,
  [SMALL_STATE(113)] = 776,
  [SMALL_STATE(114)] = 811,
  [SMALL_STATE(115)] = 846,
  [SMALL_STATE(116)] = 881,
  [SMALL_STATE(117)] = 916,
  [SMALL_STATE(118)] = 951,
  [SMALL_STATE(119)] = 986,
  [SMALL_STATE(120)] = 1021,
  [SMALL_STATE(121)] = 1056,
  [SMALL_STATE(122)] = 1091,
  [SMALL_STATE(123)] = 1126,
  [SMALL_STATE(124)] = 1161,
  [SMALL_STATE(125)] = 1208,
  [SMALL_STATE(126)] = 1243,
  [SMALL_STATE(127)] = 1278,
  [SMALL_STATE(128)] = 1313,
  [SMALL_STATE(129)] = 1348,
  [SMALL_STATE(130)] = 1383,
  [SMALL_STATE(131)] = 1418,
  [SMALL_STATE(132)] = 1453,
  [SMALL_STATE(133)] = 1488,
  [SMALL_STATE(134)] = 1523,
  [SMALL_STATE(135)] = 1558,
  [SMALL_STATE(136)] = 1593,
  [SMALL_STATE(137)] = 1628,
  [SMALL_STATE(138)] = 1663,
  [SMALL_STATE(139)] = 1698,
  [SMALL_STATE(140)] = 1733,
  [SMALL_STATE(141)] = 1768,
  [SMALL_STATE(142)] = 1803,
  [SMALL_STATE(143)] = 1838,
  [SMALL_STATE(144)] = 1871,
  [SMALL_STATE(145)] = 1903,
  [SMALL_STATE(146)] = 1935,
  [SMALL_STATE(147)] = 1969,
  [SMALL_STATE(148)] = 2001,
  [SMALL_STATE(149)] = 2033,
  [SMALL_STATE(150)] = 2065,
  [SMALL_STATE(151)] = 2099,
  [SMALL_STATE(152)] = 2130,
  [SMALL_STATE(153)] = 2161,
  [SMALL_STATE(154)] = 2192,
  [SMALL_STATE(155)] = 2221,
  [SMALL_STATE(156)] = 2250,
  [SMALL_STATE(157)] = 2279,
  [SMALL_STATE(158)] = 2308,
  [SMALL_STATE(159)] = 2334,
  [SMALL_STATE(160)] = 2354,
  [SMALL_STATE(161)] = 2374,
  [SMALL_STATE(162)] = 2387,
  [SMALL_STATE(163)] = 2400,
  [SMALL_STATE(164)] = 2416,
  [SMALL_STATE(165)] = 2430,
  [SMALL_STATE(166)] = 2446,
  [SMALL_STATE(167)] = 2456,
  [SMALL_STATE(168)] = 2472,
  [SMALL_STATE(169)] = 2488,
  [SMALL_STATE(170)] = 2504,
  [SMALL_STATE(171)] = 2518,
  [SMALL_STATE(172)] = 2534,
  [SMALL_STATE(173)] = 2550,
  [SMALL_STATE(174)] = 2566,
  [SMALL_STATE(175)] = 2582,
  [SMALL_STATE(176)] = 2598,
  [SMALL_STATE(177)] = 2608,
  [SMALL_STATE(178)] = 2618,
  [SMALL_STATE(179)] = 2628,
  [SMALL_STATE(180)] = 2638,
  [SMALL_STATE(181)] = 2648,
  [SMALL_STATE(182)] = 2664,
  [SMALL_STATE(183)] = 2674,
  [SMALL_STATE(184)] = 2685,
  [SMALL_STATE(185)] = 2696,
  [SMALL_STATE(186)] = 2709,
  [SMALL_STATE(187)] = 2722,
  [SMALL_STATE(188)] = 2735,
  [SMALL_STATE(189)] = 2745,
  [SMALL_STATE(190)] = 2753,
  [SMALL_STATE(191)] = 2761,
  [SMALL_STATE(192)] = 2771,
  [SMALL_STATE(193)] = 2781,
  [SMALL_STATE(194)] = 2791,
  [SMALL_STATE(195)] = 2801,
  [SMALL_STATE(196)] = 2808,
  [SMALL_STATE(197)] = 2815,
  [SMALL_STATE(198)] = 2822,
  [SMALL_STATE(199)] = 2829,
  [SMALL_STATE(200)] = 2836,
  [SMALL_STATE(201)] = 2843,
  [SMALL_STATE(202)] = 2850,
  [SMALL_STATE(203)] = 2857,
  [SMALL_STATE(204)] = 2864,
  [SMALL_STATE(205)] = 2871,
  [SMALL_STATE(206)] = 2878,
  [SMALL_STATE(207)] = 2885,
  [SMALL_STATE(208)] = 2892,
  [SMALL_STATE(209)] = 2899,
  [SMALL_STATE(210)] = 2906,
  [SMALL_STATE(211)] = 2913,
  [SMALL_STATE(212)] = 2920,
  [SMALL_STATE(213)] = 2927,
  [SMALL_STATE(214)] = 2934,
  [SMALL_STATE(215)] = 2941,
  [SMALL_STATE(216)] = 2948,
  [SMALL_STATE(217)] = 2955,
  [SMALL_STATE(218)] = 2962,
  [SMALL_STATE(219)] = 2969,
  [SMALL_STATE(220)] = 2976,
  [SMALL_STATE(221)] = 2983,
  [SMALL_STATE(222)] = 2990,
  [SMALL_STATE(223)] = 2997,
  [SMALL_STATE(224)] = 3004,
  [SMALL_STATE(225)] = 3011,
  [SMALL_STATE(226)] = 3018,
  [SMALL_STATE(227)] = 3025,
  [SMALL_STATE(228)] = 3032,
  [SMALL_STATE(229)] = 3039,
  [SMALL_STATE(230)] = 3046,
  [SMALL_STATE(231)] = 3053,
  [SMALL_STATE(232)] = 3060,
  [SMALL_STATE(233)] = 3067,
  [SMALL_STATE(234)] = 3074,
  [SMALL_STATE(235)] = 3081,
  [SMALL_STATE(236)] = 3088,
  [SMALL_STATE(237)] = 3095,
  [SMALL_STATE(238)] = 3102,
  [SMALL_STATE(239)] = 3109,
  [SMALL_STATE(240)] = 3116,
  [SMALL_STATE(241)] = 3123,
  [SMALL_STATE(242)] = 3130,
  [SMALL_STATE(243)] = 3137,
  [SMALL_STATE(244)] = 3144,
  [SMALL_STATE(245)] = 3151,
  [SMALL_STATE(246)] = 3158,
  [SMALL_STATE(247)] = 3165,
  [SMALL_STATE(248)] = 3172,
  [SMALL_STATE(249)] = 3179,
  [SMALL_STATE(250)] = 3186,
  [SMALL_STATE(251)] = 3193,
  [SMALL_STATE(252)] = 3200,
  [SMALL_STATE(253)] = 3207,
  [SMALL_STATE(254)] = 3214,
  [SMALL_STATE(255)] = 3221,
  [SMALL_STATE(256)] = 3228,
  [SMALL_STATE(257)] = 3235,
  [SMALL_STATE(258)] = 3242,
  [SMALL_STATE(259)] = 3249,
  [SMALL_STATE(260)] = 3256,
  [SMALL_STATE(261)] = 3263,
  [SMALL_STATE(262)] = 3270,
  [SMALL_STATE(263)] = 3277,
  [SMALL_STATE(264)] = 3284,
  [SMALL_STATE(265)] = 3291,
  [SMALL_STATE(266)] = 3298,
  [SMALL_STATE(267)] = 3305,
  [SMALL_STATE(268)] = 3312,
  [SMALL_STATE(269)] = 3319,
  [SMALL_STATE(270)] = 3326,
  [SMALL_STATE(271)] = 3333,
  [SMALL_STATE(272)] = 3340,
  [SMALL_STATE(273)] = 3347,
  [SMALL_STATE(274)] = 3354,
  [SMALL_STATE(275)] = 3361,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(47),
  [11] = {.count = 1, .reusable = true}, SHIFT(51),
  [13] = {.count = 1, .reusable = true}, SHIFT(52),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(90),
  [21] = {.count = 1, .reusable = true}, SHIFT(89),
  [23] = {.count = 1, .reusable = true}, SHIFT(88),
  [25] = {.count = 1, .reusable = true}, SHIFT(87),
  [27] = {.count = 1, .reusable = true}, SHIFT(86),
  [29] = {.count = 1, .reusable = true}, SHIFT(181),
  [31] = {.count = 1, .reusable = true}, SHIFT(174),
  [33] = {.count = 1, .reusable = false}, SHIFT(126),
  [35] = {.count = 1, .reusable = false}, SHIFT(129),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(91),
  [43] = {.count = 1, .reusable = true}, SHIFT(131),
  [45] = {.count = 1, .reusable = true}, SHIFT(115),
  [47] = {.count = 1, .reusable = true}, SHIFT(258),
  [49] = {.count = 1, .reusable = false}, SHIFT(84),
  [51] = {.count = 1, .reusable = false}, SHIFT(85),
  [53] = {.count = 1, .reusable = false}, SHIFT(75),
  [55] = {.count = 1, .reusable = false}, SHIFT(61),
  [57] = {.count = 1, .reusable = false}, SHIFT(62),
  [59] = {.count = 1, .reusable = false}, SHIFT(63),
  [61] = {.count = 1, .reusable = false}, SHIFT(56),
  [63] = {.count = 1, .reusable = false}, SHIFT(83),
  [65] = {.count = 1, .reusable = false}, SHIFT(60),
  [67] = {.count = 1, .reusable = false}, SHIFT(14),
  [69] = {.count = 1, .reusable = false}, SHIFT(64),
  [71] = {.count = 1, .reusable = false}, SHIFT(159),
  [73] = {.count = 1, .reusable = false}, SHIFT(170),
  [75] = {.count = 1, .reusable = false}, SHIFT(143),
  [77] = {.count = 1, .reusable = true}, SHIFT(143),
  [79] = {.count = 1, .reusable = true}, SHIFT(135),
  [81] = {.count = 1, .reusable = false}, SHIFT(81),
  [83] = {.count = 1, .reusable = false}, SHIFT(77),
  [85] = {.count = 1, .reusable = false}, SHIFT(59),
  [87] = {.count = 1, .reusable = false}, SHIFT(74),
  [89] = {.count = 1, .reusable = false}, SHIFT(73),
  [91] = {.count = 1, .reusable = false}, SHIFT(72),
  [93] = {.count = 1, .reusable = false}, SHIFT(57),
  [95] = {.count = 1, .reusable = false}, SHIFT(71),
  [97] = {.count = 1, .reusable = false}, SHIFT(68),
  [99] = {.count = 1, .reusable = false}, SHIFT(16),
  [101] = {.count = 1, .reusable = false}, SHIFT(67),
  [103] = {.count = 1, .reusable = false}, SHIFT(160),
  [105] = {.count = 1, .reusable = false}, SHIFT(164),
  [107] = {.count = 1, .reusable = true}, SHIFT(134),
  [109] = {.count = 1, .reusable = false}, SHIFT(144),
  [111] = {.count = 1, .reusable = true}, SHIFT(144),
  [113] = {.count = 1, .reusable = true}, SHIFT(218),
  [115] = {.count = 1, .reusable = false}, SHIFT(58),
  [117] = {.count = 1, .reusable = true}, SHIFT(58),
  [119] = {.count = 1, .reusable = true}, SHIFT(217),
  [121] = {.count = 1, .reusable = true}, SHIFT(253),
  [123] = {.count = 1, .reusable = true}, SHIFT(200),
  [125] = {.count = 1, .reusable = true}, SHIFT(118),
  [127] = {.count = 1, .reusable = true}, SHIFT(116),
  [129] = {.count = 1, .reusable = true}, SHIFT(96),
  [131] = {.count = 1, .reusable = true}, SHIFT(95),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(3),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(47),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(51),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(52),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(9),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(10),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(90),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(89),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(88),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(87),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(86),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(181),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(174),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(126),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(129),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(58),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(58),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(91),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(131),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(115),
  [195] = {.count = 1, .reusable = true}, SHIFT(235),
  [197] = {.count = 1, .reusable = true}, SHIFT(252),
  [199] = {.count = 1, .reusable = true}, SHIFT(98),
  [201] = {.count = 1, .reusable = true}, SHIFT(254),
  [203] = {.count = 1, .reusable = true}, SHIFT(117),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(3),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(51),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(52),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(10),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(90),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(89),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(88),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(87),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(86),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(181),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(174),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(126),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(129),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(143),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(143),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(91),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(131),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(115),
  [267] = {.count = 1, .reusable = true}, SHIFT(256),
  [269] = {.count = 1, .reusable = true}, SHIFT(123),
  [271] = {.count = 1, .reusable = true}, SHIFT(2),
  [273] = {.count = 1, .reusable = true}, SHIFT(27),
  [275] = {.count = 1, .reusable = true}, SHIFT(20),
  [277] = {.count = 1, .reusable = true}, SHIFT(30),
  [279] = {.count = 1, .reusable = true}, SHIFT(17),
  [281] = {.count = 1, .reusable = true}, SHIFT(15),
  [283] = {.count = 1, .reusable = true}, SHIFT(82),
  [285] = {.count = 1, .reusable = true}, SHIFT(80),
  [287] = {.count = 1, .reusable = true}, SHIFT(79),
  [289] = {.count = 1, .reusable = true}, SHIFT(78),
  [291] = {.count = 1, .reusable = true}, SHIFT(76),
  [293] = {.count = 1, .reusable = true}, SHIFT(172),
  [295] = {.count = 1, .reusable = false}, SHIFT(237),
  [297] = {.count = 1, .reusable = false}, SHIFT(259),
  [299] = {.count = 1, .reusable = false}, SHIFT(246),
  [301] = {.count = 1, .reusable = true}, SHIFT(146),
  [303] = {.count = 1, .reusable = false}, SHIFT(183),
  [305] = {.count = 1, .reusable = true}, SHIFT(262),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [309] = {.count = 1, .reusable = false}, SHIFT(46),
  [311] = {.count = 1, .reusable = true}, SHIFT(46),
  [313] = {.count = 1, .reusable = false}, SHIFT(245),
  [315] = {.count = 1, .reusable = true}, SHIFT(113),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1, .production_id = 5),
  [319] = {.count = 1, .reusable = true}, SHIFT(257),
  [321] = {.count = 1, .reusable = true}, SHIFT(225),
  [323] = {.count = 1, .reusable = true}, SHIFT(224),
  [325] = {.count = 1, .reusable = true}, SHIFT(255),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(3),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(47),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(51),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(52),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(9),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(10),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(90),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(89),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(88),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(87),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(86),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(181),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(174),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(126),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(129),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(144),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(144),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(91),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(131),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(115),
  [389] = {.count = 1, .reusable = true}, SHIFT(219),
  [391] = {.count = 1, .reusable = true}, SHIFT(130),
  [393] = {.count = 1, .reusable = false}, SHIFT(239),
  [395] = {.count = 1, .reusable = true}, SHIFT(121),
  [397] = {.count = 1, .reusable = false}, SHIFT(238),
  [399] = {.count = 1, .reusable = true}, SHIFT(226),
  [401] = {.count = 1, .reusable = true}, SHIFT(137),
  [403] = {.count = 1, .reusable = false}, SHIFT(275),
  [405] = {.count = 1, .reusable = true}, SHIFT(138),
  [407] = {.count = 1, .reusable = false}, SHIFT(231),
  [409] = {.count = 1, .reusable = false}, SHIFT(270),
  [411] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [473] = {.count = 1, .reusable = true}, SHIFT(132),
  [475] = {.count = 1, .reusable = false}, SHIFT(271),
  [477] = {.count = 1, .reusable = true}, SHIFT(198),
  [479] = {.count = 1, .reusable = true}, SHIFT(120),
  [481] = {.count = 1, .reusable = true}, SHIFT(119),
  [483] = {.count = 1, .reusable = true}, SHIFT(264),
  [485] = {.count = 1, .reusable = true}, SHIFT(197),
  [487] = {.count = 1, .reusable = true}, SHIFT(173),
  [489] = {.count = 1, .reusable = false}, SHIFT(247),
  [491] = {.count = 1, .reusable = true}, SHIFT(247),
  [493] = {.count = 1, .reusable = true}, SHIFT(263),
  [495] = {.count = 1, .reusable = true}, SHIFT(128),
  [497] = {.count = 1, .reusable = false}, SHIFT(269),
  [499] = {.count = 1, .reusable = true}, SHIFT(269),
  [501] = {.count = 1, .reusable = true}, SHIFT(228),
  [503] = {.count = 1, .reusable = false}, SHIFT(234),
  [505] = {.count = 1, .reusable = true}, SHIFT(234),
  [507] = {.count = 1, .reusable = true}, SHIFT(101),
  [509] = {.count = 1, .reusable = false}, SHIFT(216),
  [511] = {.count = 1, .reusable = true}, SHIFT(216),
  [513] = {.count = 1, .reusable = false}, SHIFT(145),
  [515] = {.count = 1, .reusable = true}, SHIFT(145),
  [517] = {.count = 1, .reusable = false}, SHIFT(223),
  [519] = {.count = 1, .reusable = true}, SHIFT(223),
  [521] = {.count = 1, .reusable = false}, SHIFT(66),
  [523] = {.count = 1, .reusable = true}, SHIFT(66),
  [525] = {.count = 1, .reusable = false}, SHIFT(195),
  [527] = {.count = 1, .reusable = true}, SHIFT(195),
  [529] = {.count = 1, .reusable = false}, SHIFT(232),
  [531] = {.count = 1, .reusable = true}, SHIFT(232),
  [533] = {.count = 1, .reusable = false}, SHIFT(233),
  [535] = {.count = 1, .reusable = true}, SHIFT(233),
  [537] = {.count = 1, .reusable = false}, SHIFT(53),
  [539] = {.count = 1, .reusable = true}, SHIFT(53),
  [541] = {.count = 1, .reusable = false}, SHIFT(240),
  [543] = {.count = 1, .reusable = true}, SHIFT(240),
  [545] = {.count = 1, .reusable = false}, SHIFT(54),
  [547] = {.count = 1, .reusable = true}, SHIFT(54),
  [549] = {.count = 1, .reusable = false}, SHIFT(25),
  [551] = {.count = 1, .reusable = true}, SHIFT(25),
  [553] = {.count = 1, .reusable = false}, SHIFT(70),
  [555] = {.count = 1, .reusable = true}, SHIFT(70),
  [557] = {.count = 1, .reusable = false}, SHIFT(274),
  [559] = {.count = 1, .reusable = true}, SHIFT(274),
  [561] = {.count = 1, .reusable = false}, SHIFT(55),
  [563] = {.count = 1, .reusable = true}, SHIFT(55),
  [565] = {.count = 1, .reusable = false}, SHIFT(69),
  [567] = {.count = 1, .reusable = true}, SHIFT(69),
  [569] = {.count = 1, .reusable = false}, SHIFT(220),
  [571] = {.count = 1, .reusable = true}, SHIFT(220),
  [573] = {.count = 1, .reusable = false}, SHIFT(221),
  [575] = {.count = 1, .reusable = true}, SHIFT(221),
  [577] = {.count = 1, .reusable = false}, SHIFT(222),
  [579] = {.count = 1, .reusable = true}, SHIFT(222),
  [581] = {.count = 1, .reusable = false}, SHIFT(230),
  [583] = {.count = 1, .reusable = true}, SHIFT(230),
  [585] = {.count = 1, .reusable = false}, SHIFT(260),
  [587] = {.count = 1, .reusable = true}, SHIFT(260),
  [589] = {.count = 1, .reusable = false}, SHIFT(42),
  [591] = {.count = 1, .reusable = true}, SHIFT(42),
  [593] = {.count = 1, .reusable = false}, SHIFT(241),
  [595] = {.count = 1, .reusable = true}, SHIFT(241),
  [597] = {.count = 1, .reusable = false}, SHIFT(242),
  [599] = {.count = 1, .reusable = true}, SHIFT(242),
  [601] = {.count = 1, .reusable = false}, SHIFT(244),
  [603] = {.count = 1, .reusable = true}, SHIFT(244),
  [605] = {.count = 1, .reusable = false}, SHIFT(44),
  [607] = {.count = 1, .reusable = true}, SHIFT(44),
  [609] = {.count = 1, .reusable = false}, SHIFT(251),
  [611] = {.count = 1, .reusable = true}, SHIFT(251),
  [613] = {.count = 1, .reusable = false}, SHIFT(65),
  [615] = {.count = 1, .reusable = true}, SHIFT(65),
  [617] = {.count = 1, .reusable = false}, SHIFT(38),
  [619] = {.count = 1, .reusable = true}, SHIFT(38),
  [621] = {.count = 1, .reusable = false}, SHIFT(36),
  [623] = {.count = 1, .reusable = true}, SHIFT(36),
  [625] = {.count = 1, .reusable = false}, SHIFT(104),
  [627] = {.count = 1, .reusable = true}, SHIFT(104),
  [629] = {.count = 1, .reusable = false}, SHIFT(94),
  [631] = {.count = 1, .reusable = true}, SHIFT(94),
  [633] = {.count = 1, .reusable = false}, SHIFT(105),
  [635] = {.count = 1, .reusable = true}, SHIFT(105),
  [637] = {.count = 1, .reusable = false}, SHIFT(111),
  [639] = {.count = 1, .reusable = true}, SHIFT(111),
  [641] = {.count = 1, .reusable = false}, SHIFT(114),
  [643] = {.count = 1, .reusable = true}, SHIFT(114),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym__identifier, 1),
  [649] = {.count = 1, .reusable = true}, SHIFT(194),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_def, 6, .production_id = 28),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_def, 6, .production_id = 28),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_short_unquote, 2),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_short_unquote, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 9),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 9),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 9),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 9),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_break, 3),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_break, 3),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_short_quasiquote, 2),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_short_quasiquote, 2),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 4),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 4),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_splice, 4),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_splice, 4),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_quasiquote, 4),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_quasiquote, 4),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 4),
  [717] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 4),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_break, 4),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_break, 4),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_short_splice, 2),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_short_splice, 2),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_do, 4, .production_id = 14),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_do, 4, .production_id = 14),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_while, 4, .production_id = 16),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_while, 4, .production_id = 16),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 1),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 1),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4, .production_id = 18),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 4, .production_id = 18),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 6),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 6),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5, .production_id = 19),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_def, 5, .production_id = 19),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [775] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(181),
  [780] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 2, .production_id = 20),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(151),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(131),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_var, 5, .production_id = 19),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_var, 5, .production_id = 19),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_set, 5, .production_id = 21),
  [798] = {.count = 1, .reusable = false}, REDUCE(sym_set, 5, .production_id = 21),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5, .production_id = 22),
  [802] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5, .production_id = 22),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5, .production_id = 23),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_while, 5, .production_id = 23),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 1),
  [814] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 1),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [818] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 26),
  [822] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 26),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 27),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 27),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_extra_defs, 7, .production_id = 31),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym_extra_defs, 7, .production_id = 31),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 6),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 6),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_var, 6, .production_id = 28),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym_var, 6, .production_id = 28),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6, .production_id = 29),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6, .production_id = 29),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 30),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 30),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_extra_defs, 6, .production_id = 30),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym_extra_defs, 6, .production_id = 30),
  [860] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [862] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [864] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [866] = {.count = 1, .reusable = false}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [872] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 1, .production_id = 12),
  [874] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 1, .production_id = 12),
  [876] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [878] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3, .production_id = 24),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3, .production_id = 24),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_doc_str, 1),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym__literals, 1),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym_doc_str, 1),
  [894] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 1, .production_id = 13),
  [896] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 1, .production_id = 13),
  [898] = {.count = 1, .reusable = true}, SHIFT(185),
  [900] = {.count = 1, .reusable = true}, SHIFT(163),
  [902] = {.count = 1, .reusable = true}, SHIFT(178),
  [904] = {.count = 1, .reusable = true}, SHIFT(177),
  [906] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(163),
  [909] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(178),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(177),
  [915] = {.count = 1, .reusable = true}, SHIFT(191),
  [917] = {.count = 1, .reusable = true}, SHIFT(183),
  [919] = {.count = 1, .reusable = true}, SHIFT(192),
  [921] = {.count = 1, .reusable = true}, SHIFT(193),
  [923] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [925] = {.count = 1, .reusable = false}, SHIFT(166),
  [927] = {.count = 1, .reusable = false}, SHIFT(165),
  [929] = {.count = 1, .reusable = true}, SHIFT(165),
  [931] = {.count = 1, .reusable = true}, SHIFT(155),
  [933] = {.count = 1, .reusable = true}, SHIFT(161),
  [935] = {.count = 1, .reusable = false}, SHIFT(182),
  [937] = {.count = 1, .reusable = false}, SHIFT(175),
  [939] = {.count = 1, .reusable = true}, SHIFT(175),
  [941] = {.count = 1, .reusable = false}, SHIFT(214),
  [943] = {.count = 1, .reusable = false}, SHIFT(196),
  [945] = {.count = 1, .reusable = false}, SHIFT(97),
  [947] = {.count = 1, .reusable = true}, SHIFT(156),
  [949] = {.count = 1, .reusable = false}, SHIFT(99),
  [951] = {.count = 1, .reusable = false}, SHIFT(229),
  [953] = {.count = 1, .reusable = false}, SHIFT(167),
  [955] = {.count = 1, .reusable = true}, SHIFT(167),
  [957] = {.count = 1, .reusable = false}, SHIFT(215),
  [959] = {.count = 1, .reusable = false}, SHIFT(168),
  [961] = {.count = 1, .reusable = true}, SHIFT(168),
  [963] = {.count = 1, .reusable = false}, SHIFT(102),
  [965] = {.count = 1, .reusable = false}, SHIFT(171),
  [967] = {.count = 1, .reusable = true}, SHIFT(171),
  [969] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [971] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(175),
  [974] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(175),
  [977] = {.count = 1, .reusable = false}, SHIFT(103),
  [979] = {.count = 1, .reusable = false}, SHIFT(169),
  [981] = {.count = 1, .reusable = true}, SHIFT(169),
  [983] = {.count = 1, .reusable = true}, SHIFT(188),
  [985] = {.count = 1, .reusable = true}, SHIFT(149),
  [987] = {.count = 1, .reusable = true}, SHIFT(190),
  [989] = {.count = 1, .reusable = true}, SHIFT(148),
  [991] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 25),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 25), SHIFT_REPEAT(190),
  [996] = {.count = 1, .reusable = true}, SHIFT(184),
  [998] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 1, .production_id = 17),
  [1000] = {.count = 1, .reusable = true}, SHIFT(162),
  [1002] = {.count = 1, .reusable = true}, SHIFT(92),
  [1004] = {.count = 1, .reusable = true}, SHIFT(211),
  [1006] = {.count = 1, .reusable = true}, SHIFT(112),
  [1008] = {.count = 1, .reusable = true}, SHIFT(110),
  [1010] = {.count = 1, .reusable = true}, SHIFT(109),
  [1012] = {.count = 1, .reusable = true}, SHIFT(108),
  [1014] = {.count = 1, .reusable = true}, SHIFT(107),
  [1016] = {.count = 1, .reusable = true}, SHIFT(106),
  [1018] = {.count = 1, .reusable = true}, SHIFT(207),
  [1020] = {.count = 1, .reusable = true}, SHIFT(212),
  [1022] = {.count = 1, .reusable = true}, SHIFT(122),
  [1024] = {.count = 1, .reusable = true}, SHIFT(210),
  [1026] = {.count = 1, .reusable = true}, SHIFT(209),
  [1028] = {.count = 1, .reusable = true}, SHIFT(208),
  [1030] = {.count = 1, .reusable = true}, SHIFT(273),
  [1032] = {.count = 1, .reusable = true}, SHIFT(261),
  [1034] = {.count = 1, .reusable = true}, SHIFT(236),
  [1036] = {.count = 1, .reusable = true}, SHIFT(199),
  [1038] = {.count = 1, .reusable = true}, SHIFT(201),
  [1040] = {.count = 1, .reusable = true}, SHIFT(202),
  [1042] = {.count = 1, .reusable = true}, SHIFT(203),
  [1044] = {.count = 1, .reusable = true}, SHIFT(204),
  [1046] = {.count = 1, .reusable = true}, SHIFT(205),
  [1048] = {.count = 1, .reusable = true}, SHIFT(206),
  [1050] = {.count = 1, .reusable = true}, SHIFT(136),
  [1052] = {.count = 1, .reusable = true}, SHIFT(142),
  [1054] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1056] = {.count = 1, .reusable = true}, SHIFT(141),
  [1058] = {.count = 1, .reusable = true}, SHIFT(140),
  [1060] = {.count = 1, .reusable = true}, SHIFT(139),
  [1062] = {.count = 1, .reusable = true}, SHIFT(93),
  [1064] = {.count = 1, .reusable = true}, SHIFT(133),
  [1066] = {.count = 1, .reusable = true}, SHIFT(127),
  [1068] = {.count = 1, .reusable = true}, SHIFT(125),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_janet_external_scanner_create(void);
void tree_sitter_janet_external_scanner_destroy(void *);
bool tree_sitter_janet_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_janet_external_scanner_serialize(void *, char *);
void tree_sitter_janet_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_janet_external_scanner_create,
      tree_sitter_janet_external_scanner_destroy,
      tree_sitter_janet_external_scanner_scan,
      tree_sitter_janet_external_scanner_serialize,
      tree_sitter_janet_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
