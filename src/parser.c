#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 2
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_BQUOTE_BQUOTE = 36,
  aux_sym_long_str_literal_token1 = 37,
  anon_sym_AT_DQUOTE = 38,
  anon_sym_AT_BQUOTE_BQUOTE = 39,
  aux_sym_number_literal_token1 = 40,
  aux_sym_number_literal_token2 = 41,
  aux_sym_number_literal_token3 = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_nil_literal = 45,
  sym_escape_sequence = 46,
  anon_sym_SLASH = 47,
  sym_keyword = 48,
  sym_symbol = 49,
  sym_source_file = 50,
  sym__expr = 51,
  sym_tuple = 52,
  sym_sqr_tuple = 53,
  sym_array = 54,
  sym_sqr_array = 55,
  sym_struct = 56,
  sym_table = 57,
  sym__struct_tables_commom = 58,
  sym__special_forms = 59,
  sym_def = 60,
  sym_var = 61,
  sym_quote = 62,
  sym_splice = 63,
  sym_quasiquote = 64,
  sym_unquote = 65,
  sym_break = 66,
  sym_set = 67,
  sym_if = 68,
  sym_do = 69,
  sym_while = 70,
  sym_fn = 71,
  sym_parameters = 72,
  sym__shorthand = 73,
  sym_short_quote = 74,
  sym_short_splice = 75,
  sym_short_quasiquote = 76,
  sym_short_unquote = 77,
  sym_short_fn = 78,
  sym__specials = 79,
  sym_extra_defs = 80,
  sym__literals = 81,
  sym_str_literal = 82,
  sym_long_str_literal = 83,
  sym_buffer_literal = 84,
  sym_long_buffer_literal = 85,
  sym_number_literal = 86,
  sym_bool_literal = 87,
  aux_sym__metadata = 88,
  sym_doc_str = 89,
  sym_body = 90,
  sym__identifier = 91,
  sym_scoped_symbol = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_tuple_repeat1 = 94,
  aux_sym_struct_repeat1 = 95,
  aux_sym_while_repeat1 = 96,
  aux_sym_parameters_repeat1 = 97,
  aux_sym_str_literal_repeat1 = 98,
  aux_sym_long_str_literal_repeat1 = 99,
  alias_sym_mod_keyword = 100,
  alias_sym_module_symbol = 101,
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
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
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
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
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
  [aux_sym_long_str_literal_repeat1] = {
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
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('<' <= lookahead && lookahead <= '\\') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(67);
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
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
      ACCEPT_TOKEN(anon_sym_defn);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 57:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_varfn);
      if (lookahead == '-') ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 59:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '-') ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 61:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '&' ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(160);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '&') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(159);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (lookahead == '&') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 94:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 95:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 96:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 100:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '0') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(131);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 116:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 117:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 118:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 119:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 120:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 123:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 124:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 130:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(154);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'q') ADVANCE(156);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 143:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 147:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(166);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(98);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 165:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
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
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
      END_STATE();
    case 170:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(170);
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
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
    [sym_source_file] = STATE(139),
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
    [sym__specials] = STATE(20),
    [sym_extra_defs] = STATE(20),
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
    [anon_sym_defn] = ACTIONS(73),
    [anon_sym_defn_DASH] = ACTIONS(73),
    [anon_sym_varfn] = ACTIONS(73),
    [anon_sym_varfn_DASH] = ACTIONS(73),
    [anon_sym_defmacro] = ACTIONS(73),
    [anon_sym_defmacro_DASH] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [3] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__struct_tables_commom] = STATE(110),
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
    [aux_sym_struct_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(79),
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
    [sym_nil_literal] = ACTIONS(81),
    [sym_keyword] = ACTIONS(83),
    [sym_symbol] = ACTIONS(45),
  },
  [4] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__struct_tables_commom] = STATE(110),
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
    [aux_sym_struct_repeat1] = STATE(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_AT_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(85),
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
    [sym_nil_literal] = ACTIONS(81),
    [sym_keyword] = ACTIONS(83),
    [sym_symbol] = ACTIONS(45),
  },
  [5] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_body] = STATE(151),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(14),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(87),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [6] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__struct_tables_commom] = STATE(110),
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
    [aux_sym_struct_repeat1] = STATE(4),
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
    [sym_nil_literal] = ACTIONS(81),
    [sym_keyword] = ACTIONS(83),
    [sym_symbol] = ACTIONS(45),
  },
  [7] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__struct_tables_commom] = STATE(110),
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
    [aux_sym_struct_repeat1] = STATE(3),
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
    [sym_nil_literal] = ACTIONS(81),
    [sym_keyword] = ACTIONS(83),
    [sym_symbol] = ACTIONS(45),
  },
  [8] = {
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
    [aux_sym_tuple_repeat1] = STATE(8),
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
  [9] = {
    [sym__expr] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_sqr_tuple] = STATE(44),
    [sym_array] = STATE(44),
    [sym_sqr_array] = STATE(44),
    [sym_struct] = STATE(44),
    [sym_table] = STATE(44),
    [sym__struct_tables_commom] = STATE(110),
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
    [aux_sym_struct_repeat1] = STATE(9),
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
  [10] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_body] = STATE(146),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(14),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [11] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_body] = STATE(142),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(14),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [12] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_body] = STATE(143),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(14),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [13] = {
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
    [sym__specials] = STATE(147),
    [sym_extra_defs] = STATE(147),
    [sym__literals] = STATE(147),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(147),
    [sym_long_buffer_literal] = STATE(147),
    [sym_number_literal] = STATE(147),
    [sym_bool_literal] = STATE(147),
    [aux_sym__metadata] = STATE(78),
    [sym_doc_str] = STATE(112),
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
    [sym_nil_literal] = ACTIONS(225),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(45),
  },
  [14] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(229),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [15] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_body] = STATE(150),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(14),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
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
    [sym__specials] = STATE(16),
    [sym_extra_defs] = STATE(16),
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
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACK] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_AT_LBRACE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_TILDE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(269),
    [anon_sym_AT_DQUOTE] = ACTIONS(272),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(275),
    [aux_sym_number_literal_token1] = ACTIONS(278),
    [aux_sym_number_literal_token2] = ACTIONS(278),
    [aux_sym_number_literal_token3] = ACTIONS(278),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(281),
    [sym_nil_literal] = ACTIONS(284),
    [sym_keyword] = ACTIONS(287),
    [sym_symbol] = ACTIONS(290),
  },
  [17] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(293),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [18] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
    [aux_sym_while_repeat1] = STATE(18),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_AT_LPAREN] = ACTIONS(303),
    [anon_sym_AT_LBRACK] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_AT_LBRACE] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(333),
    [anon_sym_AT_DQUOTE] = ACTIONS(336),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(339),
    [aux_sym_number_literal_token1] = ACTIONS(342),
    [aux_sym_number_literal_token2] = ACTIONS(342),
    [aux_sym_number_literal_token3] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(345),
    [sym_nil_literal] = ACTIONS(348),
    [sym_keyword] = ACTIONS(351),
    [sym_symbol] = ACTIONS(354),
  },
  [19] = {
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
    [aux_sym_tuple_repeat1] = STATE(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(357),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
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
    [sym__specials] = STATE(16),
    [sym_extra_defs] = STATE(16),
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
    [ts_builtin_sym_end] = ACTIONS(359),
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
    [sym_nil_literal] = ACTIONS(361),
    [sym_keyword] = ACTIONS(363),
    [sym_symbol] = ACTIONS(45),
  },
  [21] = {
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
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(144),
    [sym_long_buffer_literal] = STATE(144),
    [sym_number_literal] = STATE(144),
    [sym_bool_literal] = STATE(144),
    [aux_sym__metadata] = STATE(78),
    [sym_doc_str] = STATE(112),
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
    [sym_nil_literal] = ACTIONS(365),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(45),
  },
  [22] = {
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
    [aux_sym_tuple_repeat1] = STATE(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(367),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [23] = {
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
    [sym__specials] = STATE(148),
    [sym_extra_defs] = STATE(148),
    [sym__literals] = STATE(148),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(148),
    [sym_long_buffer_literal] = STATE(148),
    [sym_number_literal] = STATE(148),
    [sym_bool_literal] = STATE(148),
    [aux_sym__metadata] = STATE(21),
    [sym_doc_str] = STATE(112),
    [sym__identifier] = STATE(148),
    [sym_scoped_symbol] = STATE(148),
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
    [sym_nil_literal] = ACTIONS(369),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(45),
  },
  [24] = {
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
    [sym__shorthand] = STATE(135),
    [sym_short_quote] = STATE(135),
    [sym_short_splice] = STATE(135),
    [sym_short_quasiquote] = STATE(135),
    [sym_short_unquote] = STATE(135),
    [sym_short_fn] = STATE(135),
    [sym__specials] = STATE(135),
    [sym_extra_defs] = STATE(135),
    [sym__literals] = STATE(135),
    [sym_str_literal] = STATE(108),
    [sym_long_str_literal] = STATE(108),
    [sym_buffer_literal] = STATE(135),
    [sym_long_buffer_literal] = STATE(135),
    [sym_number_literal] = STATE(135),
    [sym_bool_literal] = STATE(135),
    [aux_sym__metadata] = STATE(13),
    [sym_doc_str] = STATE(112),
    [sym__identifier] = STATE(135),
    [sym_scoped_symbol] = STATE(135),
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
    [sym_nil_literal] = ACTIONS(371),
    [sym_keyword] = ACTIONS(227),
    [sym_symbol] = ACTIONS(45),
  },
  [25] = {
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
    [aux_sym_tuple_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(373),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [26] = {
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
    [sym__shorthand] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_short_splice] = STATE(109),
    [sym_short_quasiquote] = STATE(109),
    [sym_short_unquote] = STATE(109),
    [sym_short_fn] = STATE(109),
    [sym__specials] = STATE(109),
    [sym_extra_defs] = STATE(109),
    [sym__literals] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_long_str_literal] = STATE(109),
    [sym_buffer_literal] = STATE(109),
    [sym_long_buffer_literal] = STATE(109),
    [sym_number_literal] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym__identifier] = STATE(109),
    [sym_scoped_symbol] = STATE(109),
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
    [sym_nil_literal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(91),
    [sym_symbol] = ACTIONS(45),
  },
  [27] = {
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
    [aux_sym_tuple_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(377),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [28] = {
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
    [aux_sym_tuple_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(379),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
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
    [aux_sym_tuple_repeat1] = STATE(8),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(381),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [30] = {
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
    [aux_sym_tuple_repeat1] = STATE(28),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(383),
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
    [sym_nil_literal] = ACTIONS(75),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(45),
  },
  [31] = {
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
    [sym__specials] = STATE(136),
    [sym_extra_defs] = STATE(136),
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
    [anon_sym_RPAREN] = ACTIONS(385),
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
    [sym_nil_literal] = ACTIONS(387),
    [sym_keyword] = ACTIONS(389),
    [sym_symbol] = ACTIONS(45),
  },
  [32] = {
    [sym__expr] = STATE(138),
    [sym_tuple] = STATE(138),
    [sym_sqr_tuple] = STATE(138),
    [sym_array] = STATE(138),
    [sym_sqr_array] = STATE(138),
    [sym_struct] = STATE(138),
    [sym_table] = STATE(138),
    [sym__special_forms] = STATE(138),
    [sym_def] = STATE(138),
    [sym_var] = STATE(138),
    [sym_quote] = STATE(138),
    [sym_splice] = STATE(138),
    [sym_quasiquote] = STATE(138),
    [sym_unquote] = STATE(138),
    [sym_break] = STATE(138),
    [sym_set] = STATE(138),
    [sym_if] = STATE(138),
    [sym_do] = STATE(138),
    [sym_while] = STATE(138),
    [sym_fn] = STATE(138),
    [sym__shorthand] = STATE(138),
    [sym_short_quote] = STATE(138),
    [sym_short_splice] = STATE(138),
    [sym_short_quasiquote] = STATE(138),
    [sym_short_unquote] = STATE(138),
    [sym_short_fn] = STATE(138),
    [sym__specials] = STATE(138),
    [sym_extra_defs] = STATE(138),
    [sym__literals] = STATE(138),
    [sym_str_literal] = STATE(138),
    [sym_long_str_literal] = STATE(138),
    [sym_buffer_literal] = STATE(138),
    [sym_long_buffer_literal] = STATE(138),
    [sym_number_literal] = STATE(138),
    [sym_bool_literal] = STATE(138),
    [sym__identifier] = STATE(138),
    [sym_scoped_symbol] = STATE(138),
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
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(393),
    [sym_keyword] = ACTIONS(395),
    [sym_symbol] = ACTIONS(45),
  },
  [33] = {
    [sym__expr] = STATE(49),
    [sym_tuple] = STATE(49),
    [sym_sqr_tuple] = STATE(49),
    [sym_array] = STATE(49),
    [sym_sqr_array] = STATE(49),
    [sym_struct] = STATE(49),
    [sym_table] = STATE(49),
    [sym__special_forms] = STATE(49),
    [sym_def] = STATE(49),
    [sym_var] = STATE(49),
    [sym_quote] = STATE(49),
    [sym_splice] = STATE(49),
    [sym_quasiquote] = STATE(49),
    [sym_unquote] = STATE(49),
    [sym_break] = STATE(49),
    [sym_set] = STATE(49),
    [sym_if] = STATE(49),
    [sym_do] = STATE(49),
    [sym_while] = STATE(49),
    [sym_fn] = STATE(49),
    [sym__shorthand] = STATE(49),
    [sym_short_quote] = STATE(49),
    [sym_short_splice] = STATE(49),
    [sym_short_quasiquote] = STATE(49),
    [sym_short_unquote] = STATE(49),
    [sym_short_fn] = STATE(49),
    [sym__specials] = STATE(49),
    [sym_extra_defs] = STATE(49),
    [sym__literals] = STATE(49),
    [sym_str_literal] = STATE(49),
    [sym_long_str_literal] = STATE(49),
    [sym_buffer_literal] = STATE(49),
    [sym_long_buffer_literal] = STATE(49),
    [sym_number_literal] = STATE(49),
    [sym_bool_literal] = STATE(49),
    [sym__identifier] = STATE(49),
    [sym_scoped_symbol] = STATE(49),
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
    [sym_nil_literal] = ACTIONS(397),
    [sym_keyword] = ACTIONS(399),
    [sym_symbol] = ACTIONS(45),
  },
  [34] = {
    [sym__expr] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym_sqr_tuple] = STATE(26),
    [sym_array] = STATE(26),
    [sym_sqr_array] = STATE(26),
    [sym_struct] = STATE(26),
    [sym_table] = STATE(26),
    [sym__special_forms] = STATE(26),
    [sym_def] = STATE(26),
    [sym_var] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_splice] = STATE(26),
    [sym_quasiquote] = STATE(26),
    [sym_unquote] = STATE(26),
    [sym_break] = STATE(26),
    [sym_set] = STATE(26),
    [sym_if] = STATE(26),
    [sym_do] = STATE(26),
    [sym_while] = STATE(26),
    [sym_fn] = STATE(26),
    [sym__shorthand] = STATE(26),
    [sym_short_quote] = STATE(26),
    [sym_short_splice] = STATE(26),
    [sym_short_quasiquote] = STATE(26),
    [sym_short_unquote] = STATE(26),
    [sym_short_fn] = STATE(26),
    [sym__specials] = STATE(26),
    [sym_extra_defs] = STATE(26),
    [sym__literals] = STATE(26),
    [sym_str_literal] = STATE(26),
    [sym_long_str_literal] = STATE(26),
    [sym_buffer_literal] = STATE(26),
    [sym_long_buffer_literal] = STATE(26),
    [sym_number_literal] = STATE(26),
    [sym_bool_literal] = STATE(26),
    [sym__identifier] = STATE(26),
    [sym_scoped_symbol] = STATE(26),
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
    [sym_nil_literal] = ACTIONS(401),
    [sym_keyword] = ACTIONS(403),
    [sym_symbol] = ACTIONS(45),
  },
  [35] = {
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
    [sym_nil_literal] = ACTIONS(405),
    [sym_keyword] = ACTIONS(407),
    [sym_symbol] = ACTIONS(45),
  },
  [36] = {
    [sym__expr] = STATE(60),
    [sym_tuple] = STATE(60),
    [sym_sqr_tuple] = STATE(60),
    [sym_array] = STATE(60),
    [sym_sqr_array] = STATE(60),
    [sym_struct] = STATE(60),
    [sym_table] = STATE(60),
    [sym__special_forms] = STATE(60),
    [sym_def] = STATE(60),
    [sym_var] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_splice] = STATE(60),
    [sym_quasiquote] = STATE(60),
    [sym_unquote] = STATE(60),
    [sym_break] = STATE(60),
    [sym_set] = STATE(60),
    [sym_if] = STATE(60),
    [sym_do] = STATE(60),
    [sym_while] = STATE(60),
    [sym_fn] = STATE(60),
    [sym__shorthand] = STATE(60),
    [sym_short_quote] = STATE(60),
    [sym_short_splice] = STATE(60),
    [sym_short_quasiquote] = STATE(60),
    [sym_short_unquote] = STATE(60),
    [sym_short_fn] = STATE(60),
    [sym__specials] = STATE(60),
    [sym_extra_defs] = STATE(60),
    [sym__literals] = STATE(60),
    [sym_str_literal] = STATE(60),
    [sym_long_str_literal] = STATE(60),
    [sym_buffer_literal] = STATE(60),
    [sym_long_buffer_literal] = STATE(60),
    [sym_number_literal] = STATE(60),
    [sym_bool_literal] = STATE(60),
    [sym__identifier] = STATE(60),
    [sym_scoped_symbol] = STATE(60),
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
    [sym_nil_literal] = ACTIONS(409),
    [sym_keyword] = ACTIONS(411),
    [sym_symbol] = ACTIONS(45),
  },
  [37] = {
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
    [sym__specials] = STATE(57),
    [sym_extra_defs] = STATE(57),
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
    [sym_nil_literal] = ACTIONS(413),
    [sym_keyword] = ACTIONS(415),
    [sym_symbol] = ACTIONS(45),
  },
  [38] = {
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
    [sym__specials] = STATE(59),
    [sym_extra_defs] = STATE(59),
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
    [sym_nil_literal] = ACTIONS(417),
    [sym_keyword] = ACTIONS(419),
    [sym_symbol] = ACTIONS(45),
  },
  [39] = {
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
    [sym__specials] = STATE(56),
    [sym_extra_defs] = STATE(56),
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
    [sym_nil_literal] = ACTIONS(421),
    [sym_keyword] = ACTIONS(423),
    [sym_symbol] = ACTIONS(45),
  },
  [40] = {
    [sym__expr] = STATE(47),
    [sym_tuple] = STATE(47),
    [sym_sqr_tuple] = STATE(47),
    [sym_array] = STATE(47),
    [sym_sqr_array] = STATE(47),
    [sym_struct] = STATE(47),
    [sym_table] = STATE(47),
    [sym__special_forms] = STATE(47),
    [sym_def] = STATE(47),
    [sym_var] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_splice] = STATE(47),
    [sym_quasiquote] = STATE(47),
    [sym_unquote] = STATE(47),
    [sym_break] = STATE(47),
    [sym_set] = STATE(47),
    [sym_if] = STATE(47),
    [sym_do] = STATE(47),
    [sym_while] = STATE(47),
    [sym_fn] = STATE(47),
    [sym__shorthand] = STATE(47),
    [sym_short_quote] = STATE(47),
    [sym_short_splice] = STATE(47),
    [sym_short_quasiquote] = STATE(47),
    [sym_short_unquote] = STATE(47),
    [sym_short_fn] = STATE(47),
    [sym__specials] = STATE(47),
    [sym_extra_defs] = STATE(47),
    [sym__literals] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_long_str_literal] = STATE(47),
    [sym_buffer_literal] = STATE(47),
    [sym_long_buffer_literal] = STATE(47),
    [sym_number_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym__identifier] = STATE(47),
    [sym_scoped_symbol] = STATE(47),
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
    [sym_nil_literal] = ACTIONS(425),
    [sym_keyword] = ACTIONS(427),
    [sym_symbol] = ACTIONS(45),
  },
  [41] = {
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
    [sym__specials] = STATE(137),
    [sym_extra_defs] = STATE(137),
    [sym__literals] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_long_str_literal] = STATE(137),
    [sym_buffer_literal] = STATE(137),
    [sym_long_buffer_literal] = STATE(137),
    [sym_number_literal] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym__identifier] = STATE(137),
    [sym_scoped_symbol] = STATE(137),
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
    [sym_nil_literal] = ACTIONS(429),
    [sym_keyword] = ACTIONS(431),
    [sym_symbol] = ACTIONS(45),
  },
  [42] = {
    [sym__expr] = STATE(140),
    [sym_tuple] = STATE(140),
    [sym_sqr_tuple] = STATE(140),
    [sym_array] = STATE(140),
    [sym_sqr_array] = STATE(140),
    [sym_struct] = STATE(140),
    [sym_table] = STATE(140),
    [sym__special_forms] = STATE(140),
    [sym_def] = STATE(140),
    [sym_var] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_splice] = STATE(140),
    [sym_quasiquote] = STATE(140),
    [sym_unquote] = STATE(140),
    [sym_break] = STATE(140),
    [sym_set] = STATE(140),
    [sym_if] = STATE(140),
    [sym_do] = STATE(140),
    [sym_while] = STATE(140),
    [sym_fn] = STATE(140),
    [sym__shorthand] = STATE(140),
    [sym_short_quote] = STATE(140),
    [sym_short_splice] = STATE(140),
    [sym_short_quasiquote] = STATE(140),
    [sym_short_unquote] = STATE(140),
    [sym_short_fn] = STATE(140),
    [sym__specials] = STATE(140),
    [sym_extra_defs] = STATE(140),
    [sym__literals] = STATE(140),
    [sym_str_literal] = STATE(140),
    [sym_long_str_literal] = STATE(140),
    [sym_buffer_literal] = STATE(140),
    [sym_long_buffer_literal] = STATE(140),
    [sym_number_literal] = STATE(140),
    [sym_bool_literal] = STATE(140),
    [sym__identifier] = STATE(140),
    [sym_scoped_symbol] = STATE(140),
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
    [sym_nil_literal] = ACTIONS(433),
    [sym_keyword] = ACTIONS(435),
    [sym_symbol] = ACTIONS(45),
  },
  [43] = {
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
    [sym__specials] = STATE(141),
    [sym_extra_defs] = STATE(141),
    [sym__literals] = STATE(141),
    [sym_str_literal] = STATE(141),
    [sym_long_str_literal] = STATE(141),
    [sym_buffer_literal] = STATE(141),
    [sym_long_buffer_literal] = STATE(141),
    [sym_number_literal] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym__identifier] = STATE(141),
    [sym_scoped_symbol] = STATE(141),
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
    [sym_nil_literal] = ACTIONS(437),
    [sym_keyword] = ACTIONS(439),
    [sym_symbol] = ACTIONS(45),
  },
  [44] = {
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
    [sym__specials] = STATE(106),
    [sym_extra_defs] = STATE(106),
    [sym__literals] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_long_str_literal] = STATE(106),
    [sym_buffer_literal] = STATE(106),
    [sym_long_buffer_literal] = STATE(106),
    [sym_number_literal] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym__identifier] = STATE(106),
    [sym_scoped_symbol] = STATE(106),
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
    [sym_nil_literal] = ACTIONS(441),
    [sym_keyword] = ACTIONS(443),
    [sym_symbol] = ACTIONS(45),
  },
  [45] = {
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
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_AT_DQUOTE] = ACTIONS(33),
    [anon_sym_AT_BQUOTE_BQUOTE] = ACTIONS(35),
    [aux_sym_number_literal_token1] = ACTIONS(37),
    [aux_sym_number_literal_token2] = ACTIONS(37),
    [aux_sym_number_literal_token3] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil_literal] = ACTIONS(445),
    [sym_keyword] = ACTIONS(447),
    [sym_symbol] = ACTIONS(45),
  },
  [46] = {
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
    [sym_nil_literal] = ACTIONS(449),
    [sym_keyword] = ACTIONS(451),
    [sym_symbol] = ACTIONS(45),
  },
  [47] = {
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
    [sym__specials] = STATE(149),
    [sym_extra_defs] = STATE(149),
    [sym__literals] = STATE(149),
    [sym_str_literal] = STATE(149),
    [sym_long_str_literal] = STATE(149),
    [sym_buffer_literal] = STATE(149),
    [sym_long_buffer_literal] = STATE(149),
    [sym_number_literal] = STATE(149),
    [sym_bool_literal] = STATE(149),
    [sym__identifier] = STATE(149),
    [sym_scoped_symbol] = STATE(149),
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
    [sym_nil_literal] = ACTIONS(453),
    [sym_keyword] = ACTIONS(455),
    [sym_symbol] = ACTIONS(45),
  },
  [48] = {
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
    [sym__specials] = STATE(24),
    [sym_extra_defs] = STATE(24),
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
    [sym_nil_literal] = ACTIONS(457),
    [sym_keyword] = ACTIONS(459),
    [sym_symbol] = ACTIONS(45),
  },
  [49] = {
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
    [sym__specials] = STATE(31),
    [sym_extra_defs] = STATE(31),
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
    [sym_nil_literal] = ACTIONS(461),
    [sym_keyword] = ACTIONS(463),
    [sym_symbol] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(467), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(465), 20,
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
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(473), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(471), 20,
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
    ACTIONS(477), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(475), 20,
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
  [111] = 3,
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
    ACTIONS(479), 20,
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
  [146] = 3,
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
    ACTIONS(483), 20,
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
  [181] = 3,
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
    ACTIONS(487), 20,
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
  [216] = 3,
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
    ACTIONS(491), 20,
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
  [251] = 3,
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
    ACTIONS(495), 20,
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
  [286] = 3,
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
    ACTIONS(499), 20,
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
  [321] = 3,
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
    ACTIONS(503), 20,
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
  [356] = 3,
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
    ACTIONS(507), 20,
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
  [391] = 3,
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
    ACTIONS(511), 20,
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
  [426] = 3,
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
    ACTIONS(515), 20,
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
  [461] = 3,
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
    ACTIONS(519), 20,
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
  [496] = 3,
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
    ACTIONS(523), 20,
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
  [531] = 3,
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
    ACTIONS(527), 20,
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
  [566] = 3,
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
    ACTIONS(531), 20,
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
  [601] = 3,
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
    ACTIONS(535), 20,
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
  [636] = 3,
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
    ACTIONS(539), 20,
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
  [671] = 3,
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
    ACTIONS(543), 20,
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
  [706] = 3,
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
    ACTIONS(547), 20,
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
  [741] = 3,
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
    ACTIONS(551), 20,
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
  [776] = 3,
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
    ACTIONS(555), 20,
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
  [811] = 3,
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
    ACTIONS(559), 20,
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
  [846] = 3,
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
    ACTIONS(563), 20,
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
  [881] = 3,
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
    ACTIONS(567), 20,
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
  [916] = 3,
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
    ACTIONS(571), 20,
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
  [951] = 3,
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
    ACTIONS(575), 20,
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
  [986] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    ACTIONS(584), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(589), 1,
      sym_keyword,
    STATE(78), 1,
      aux_sym__metadata,
    STATE(112), 1,
      sym_doc_str,
    STATE(113), 2,
      sym_str_literal,
      sym_long_str_literal,
    ACTIONS(587), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(579), 13,
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
  [1033] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(594), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(592), 20,
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
    ACTIONS(598), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(596), 20,
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
    ACTIONS(602), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(600), 20,
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
    ACTIONS(606), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(604), 20,
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
    ACTIONS(610), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(608), 20,
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
    ACTIONS(614), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(612), 20,
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
    ACTIONS(618), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(616), 20,
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
    ACTIONS(622), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(620), 20,
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
    ACTIONS(626), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(624), 20,
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
    ACTIONS(630), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(628), 20,
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
    ACTIONS(634), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(632), 20,
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
    ACTIONS(638), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(636), 20,
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
    ACTIONS(642), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(640), 20,
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
    ACTIONS(646), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(644), 20,
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
    ACTIONS(650), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(648), 20,
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
    ACTIONS(654), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(652), 20,
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
    ACTIONS(658), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(656), 20,
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
    ACTIONS(662), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(660), 20,
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
    ACTIONS(666), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(664), 20,
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
    ACTIONS(670), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(668), 20,
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
    ACTIONS(674), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(672), 20,
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
    ACTIONS(467), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(465), 20,
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
    ACTIONS(678), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(676), 20,
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
    ACTIONS(682), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(680), 20,
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
    ACTIONS(686), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(684), 20,
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
    ACTIONS(690), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(688), 18,
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
  [1941] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(692), 16,
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
  [1975] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(698), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(696), 17,
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
  [2007] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(702), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(700), 17,
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
  [2039] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(708), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(704), 16,
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
  [2073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(710), 17,
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
  [2105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(714), 17,
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
  [2137] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(718), 17,
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
  [2169] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(722), 16,
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
  [2200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(704), 16,
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
  [2231] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 7,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
      sym_symbol,
    ACTIONS(692), 16,
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
  [2262] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    ACTIONS(728), 1,
      sym_keyword,
    STATE(15), 1,
      sym_parameters,
    STATE(78), 1,
      aux_sym__metadata,
    STATE(112), 1,
      sym_doc_str,
    STATE(113), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2291] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    ACTIONS(728), 1,
      sym_keyword,
    STATE(12), 1,
      sym_parameters,
    STATE(112), 1,
      sym_doc_str,
    STATE(115), 1,
      aux_sym__metadata,
    STATE(113), 2,
      sym_str_literal,
      sym_long_str_literal,
  [2320] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    ACTIONS(730), 1,
      sym_keyword,
    ACTIONS(732), 1,
      sym_symbol,
    STATE(5), 1,
      sym_parameters,
    STATE(133), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2340] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      sym_symbol,
    ACTIONS(734), 1,
      sym_keyword,
    STATE(116), 2,
      sym__identifier,
      sym_scoped_symbol,
  [2354] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    ACTIONS(740), 1,
      aux_sym_str_literal_token1,
    ACTIONS(742), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_str_literal_repeat1,
  [2370] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym_str_literal_token1,
    ACTIONS(749), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_str_literal_repeat1,
  [2386] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(752), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(754), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(756), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2402] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(760), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(762), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym_long_str_literal_repeat1,
  [2418] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
    ACTIONS(766), 1,
      aux_sym_str_literal_token1,
    ACTIONS(768), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym_str_literal_repeat1,
  [2434] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(740), 1,
      aux_sym_str_literal_token1,
    ACTIONS(742), 1,
      sym_escape_sequence,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_str_literal_repeat1,
  [2450] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(756), 1,
      sym_escape_sequence,
    ACTIONS(772), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2466] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      aux_sym_str_literal_token1,
    ACTIONS(778), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym_str_literal_repeat1,
  [2482] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(782), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(784), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym_long_str_literal_repeat1,
  [2498] = 5,
    ACTIONS(736), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(788), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(791), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_long_str_literal_repeat1,
  [2514] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    ACTIONS(796), 1,
      sym_symbol,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [2527] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      sym_symbol,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_parameters_repeat1,
  [2540] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    ACTIONS(802), 1,
      sym_symbol,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 2,
      anon_sym_RBRACK,
      sym_symbol,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_parameters,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_symbol,
    STATE(100), 1,
      sym_scoped_symbol,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [2658] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [2672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(50)] = 0,
  [SMALL_STATE(51)] = 38,
  [SMALL_STATE(52)] = 76,
  [SMALL_STATE(53)] = 111,
  [SMALL_STATE(54)] = 146,
  [SMALL_STATE(55)] = 181,
  [SMALL_STATE(56)] = 216,
  [SMALL_STATE(57)] = 251,
  [SMALL_STATE(58)] = 286,
  [SMALL_STATE(59)] = 321,
  [SMALL_STATE(60)] = 356,
  [SMALL_STATE(61)] = 391,
  [SMALL_STATE(62)] = 426,
  [SMALL_STATE(63)] = 461,
  [SMALL_STATE(64)] = 496,
  [SMALL_STATE(65)] = 531,
  [SMALL_STATE(66)] = 566,
  [SMALL_STATE(67)] = 601,
  [SMALL_STATE(68)] = 636,
  [SMALL_STATE(69)] = 671,
  [SMALL_STATE(70)] = 706,
  [SMALL_STATE(71)] = 741,
  [SMALL_STATE(72)] = 776,
  [SMALL_STATE(73)] = 811,
  [SMALL_STATE(74)] = 846,
  [SMALL_STATE(75)] = 881,
  [SMALL_STATE(76)] = 916,
  [SMALL_STATE(77)] = 951,
  [SMALL_STATE(78)] = 986,
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
  [SMALL_STATE(105)] = 1941,
  [SMALL_STATE(106)] = 1975,
  [SMALL_STATE(107)] = 2007,
  [SMALL_STATE(108)] = 2039,
  [SMALL_STATE(109)] = 2073,
  [SMALL_STATE(110)] = 2105,
  [SMALL_STATE(111)] = 2137,
  [SMALL_STATE(112)] = 2169,
  [SMALL_STATE(113)] = 2200,
  [SMALL_STATE(114)] = 2231,
  [SMALL_STATE(115)] = 2262,
  [SMALL_STATE(116)] = 2291,
  [SMALL_STATE(117)] = 2320,
  [SMALL_STATE(118)] = 2340,
  [SMALL_STATE(119)] = 2354,
  [SMALL_STATE(120)] = 2370,
  [SMALL_STATE(121)] = 2386,
  [SMALL_STATE(122)] = 2402,
  [SMALL_STATE(123)] = 2418,
  [SMALL_STATE(124)] = 2434,
  [SMALL_STATE(125)] = 2450,
  [SMALL_STATE(126)] = 2466,
  [SMALL_STATE(127)] = 2482,
  [SMALL_STATE(128)] = 2498,
  [SMALL_STATE(129)] = 2514,
  [SMALL_STATE(130)] = 2527,
  [SMALL_STATE(131)] = 2540,
  [SMALL_STATE(132)] = 2553,
  [SMALL_STATE(133)] = 2561,
  [SMALL_STATE(134)] = 2571,
  [SMALL_STATE(135)] = 2581,
  [SMALL_STATE(136)] = 2588,
  [SMALL_STATE(137)] = 2595,
  [SMALL_STATE(138)] = 2602,
  [SMALL_STATE(139)] = 2609,
  [SMALL_STATE(140)] = 2616,
  [SMALL_STATE(141)] = 2623,
  [SMALL_STATE(142)] = 2630,
  [SMALL_STATE(143)] = 2637,
  [SMALL_STATE(144)] = 2644,
  [SMALL_STATE(145)] = 2651,
  [SMALL_STATE(146)] = 2658,
  [SMALL_STATE(147)] = 2665,
  [SMALL_STATE(148)] = 2672,
  [SMALL_STATE(149)] = 2679,
  [SMALL_STATE(150)] = 2686,
  [SMALL_STATE(151)] = 2693,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(30),
  [11] = {.count = 1, .reusable = true}, SHIFT(19),
  [13] = {.count = 1, .reusable = true}, SHIFT(22),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(39),
  [21] = {.count = 1, .reusable = true}, SHIFT(37),
  [23] = {.count = 1, .reusable = true}, SHIFT(35),
  [25] = {.count = 1, .reusable = true}, SHIFT(38),
  [27] = {.count = 1, .reusable = true}, SHIFT(36),
  [29] = {.count = 1, .reusable = true}, SHIFT(126),
  [31] = {.count = 1, .reusable = true}, SHIFT(127),
  [33] = {.count = 1, .reusable = true}, SHIFT(123),
  [35] = {.count = 1, .reusable = true}, SHIFT(122),
  [37] = {.count = 1, .reusable = false}, SHIFT(82),
  [39] = {.count = 1, .reusable = false}, SHIFT(89),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = false}, SHIFT(51),
  [47] = {.count = 1, .reusable = true}, SHIFT(94),
  [49] = {.count = 1, .reusable = false}, SHIFT(48),
  [51] = {.count = 1, .reusable = false}, SHIFT(46),
  [53] = {.count = 1, .reusable = false}, SHIFT(45),
  [55] = {.count = 1, .reusable = false}, SHIFT(43),
  [57] = {.count = 1, .reusable = false}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(41),
  [61] = {.count = 1, .reusable = false}, SHIFT(32),
  [63] = {.count = 1, .reusable = false}, SHIFT(40),
  [65] = {.count = 1, .reusable = false}, SHIFT(33),
  [67] = {.count = 1, .reusable = false}, SHIFT(10),
  [69] = {.count = 1, .reusable = false}, SHIFT(34),
  [71] = {.count = 1, .reusable = false}, SHIFT(117),
  [73] = {.count = 1, .reusable = false}, SHIFT(118),
  [75] = {.count = 1, .reusable = false}, SHIFT(104),
  [77] = {.count = 1, .reusable = true}, SHIFT(104),
  [79] = {.count = 1, .reusable = true}, SHIFT(92),
  [81] = {.count = 1, .reusable = false}, SHIFT(44),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, SHIFT(90),
  [87] = {.count = 1, .reusable = true}, SHIFT(80),
  [89] = {.count = 1, .reusable = false}, SHIFT(109),
  [91] = {.count = 1, .reusable = true}, SHIFT(109),
  [93] = {.count = 1, .reusable = true}, SHIFT(101),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(2),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(30),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(19),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(22),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(7),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(39),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(37),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(35),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(38),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(36),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(126),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(127),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(123),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(122),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(82),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(89),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(104),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(104),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 2, .production_id = 7), SHIFT_REPEAT(51),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(30),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(19),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(22),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(6),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(7),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(39),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(37),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(35),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(38),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(36),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(126),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(127),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(123),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(122),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(82),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(89),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(44),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(44),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 2, .production_id = 10), SHIFT_REPEAT(51),
  [221] = {.count = 1, .reusable = true}, SHIFT(76),
  [223] = {.count = 1, .reusable = true}, SHIFT(70),
  [225] = {.count = 1, .reusable = false}, SHIFT(147),
  [227] = {.count = 1, .reusable = true}, SHIFT(105),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1, .production_id = 5),
  [231] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [293] = {.count = 1, .reusable = true}, SHIFT(72),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(30),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(19),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(22),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(6),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(37),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(35),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(126),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(127),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(123),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(122),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(82),
  [345] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(89),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(109),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(109),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_while_repeat1, 2, .production_id = 15), SHIFT_REPEAT(51),
  [357] = {.count = 1, .reusable = true}, SHIFT(85),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [361] = {.count = 1, .reusable = false}, SHIFT(16),
  [363] = {.count = 1, .reusable = true}, SHIFT(16),
  [365] = {.count = 1, .reusable = false}, SHIFT(144),
  [367] = {.count = 1, .reusable = true}, SHIFT(81),
  [369] = {.count = 1, .reusable = false}, SHIFT(148),
  [371] = {.count = 1, .reusable = false}, SHIFT(135),
  [373] = {.count = 1, .reusable = true}, SHIFT(88),
  [375] = {.count = 1, .reusable = true}, SHIFT(83),
  [377] = {.count = 1, .reusable = true}, SHIFT(87),
  [379] = {.count = 1, .reusable = true}, SHIFT(86),
  [381] = {.count = 1, .reusable = true}, SHIFT(84),
  [383] = {.count = 1, .reusable = true}, SHIFT(91),
  [385] = {.count = 1, .reusable = true}, SHIFT(73),
  [387] = {.count = 1, .reusable = false}, SHIFT(136),
  [389] = {.count = 1, .reusable = true}, SHIFT(136),
  [391] = {.count = 1, .reusable = true}, SHIFT(74),
  [393] = {.count = 1, .reusable = false}, SHIFT(138),
  [395] = {.count = 1, .reusable = true}, SHIFT(138),
  [397] = {.count = 1, .reusable = false}, SHIFT(49),
  [399] = {.count = 1, .reusable = true}, SHIFT(49),
  [401] = {.count = 1, .reusable = false}, SHIFT(26),
  [403] = {.count = 1, .reusable = true}, SHIFT(26),
  [405] = {.count = 1, .reusable = false}, SHIFT(58),
  [407] = {.count = 1, .reusable = true}, SHIFT(58),
  [409] = {.count = 1, .reusable = false}, SHIFT(60),
  [411] = {.count = 1, .reusable = true}, SHIFT(60),
  [413] = {.count = 1, .reusable = false}, SHIFT(57),
  [415] = {.count = 1, .reusable = true}, SHIFT(57),
  [417] = {.count = 1, .reusable = false}, SHIFT(59),
  [419] = {.count = 1, .reusable = true}, SHIFT(59),
  [421] = {.count = 1, .reusable = false}, SHIFT(56),
  [423] = {.count = 1, .reusable = true}, SHIFT(56),
  [425] = {.count = 1, .reusable = false}, SHIFT(47),
  [427] = {.count = 1, .reusable = true}, SHIFT(47),
  [429] = {.count = 1, .reusable = false}, SHIFT(137),
  [431] = {.count = 1, .reusable = true}, SHIFT(137),
  [433] = {.count = 1, .reusable = false}, SHIFT(140),
  [435] = {.count = 1, .reusable = true}, SHIFT(140),
  [437] = {.count = 1, .reusable = false}, SHIFT(141),
  [439] = {.count = 1, .reusable = true}, SHIFT(141),
  [441] = {.count = 1, .reusable = false}, SHIFT(106),
  [443] = {.count = 1, .reusable = true}, SHIFT(106),
  [445] = {.count = 1, .reusable = false}, SHIFT(145),
  [447] = {.count = 1, .reusable = true}, SHIFT(145),
  [449] = {.count = 1, .reusable = false}, SHIFT(23),
  [451] = {.count = 1, .reusable = true}, SHIFT(23),
  [453] = {.count = 1, .reusable = false}, SHIFT(149),
  [455] = {.count = 1, .reusable = true}, SHIFT(149),
  [457] = {.count = 1, .reusable = false}, SHIFT(24),
  [459] = {.count = 1, .reusable = true}, SHIFT(24),
  [461] = {.count = 1, .reusable = false}, SHIFT(31),
  [463] = {.count = 1, .reusable = true}, SHIFT(31),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_scoped_symbol, 3, .production_id = 11),
  [469] = {.count = 1, .reusable = true}, SHIFT(134),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym__identifier, 1),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_do, 4, .production_id = 14),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_do, 4, .production_id = 14),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5, .production_id = 19),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_def, 5, .production_id = 19),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_extra_defs, 7, .production_id = 31),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_extra_defs, 7, .production_id = 31),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_short_splice, 2),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_short_splice, 2),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_short_quasiquote, 2),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_short_quasiquote, 2),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_short_unquote, 2),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_short_unquote, 2),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn, 2, .production_id = 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_extra_defs, 6, .production_id = 30),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_extra_defs, 6, .production_id = 30),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 2),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 6, .production_id = 30),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 6, .production_id = 30),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 2),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 2),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6, .production_id = 29),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6, .production_id = 29),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 2),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 2),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_var, 6, .production_id = 28),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_var, 6, .production_id = 28),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_def, 6, .production_id = 28),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_def, 6, .production_id = 28),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 27),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 27),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 5, .production_id = 26),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 5, .production_id = 26),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5, .production_id = 23),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_while, 5, .production_id = 23),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5, .production_id = 22),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5, .production_id = 22),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_break, 3),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_break, 3),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_set, 5, .production_id = 21),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_set, 5, .production_id = 21),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_do, 3),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_do, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_var, 5, .production_id = 19),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_var, 5, .production_id = 19),
  [579] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(126),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(127),
  [587] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 2, .production_id = 20),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym__metadata, 2, .production_id = 20), SHIFT_REPEAT(114),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_quasiquote, 4),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_quasiquote, 4),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4, .production_id = 18),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_fn, 4, .production_id = 18),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 2),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_number_literal, 1),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_number_literal, 1),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_while, 4, .production_id = 16),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym_while, 4, .production_id = 16),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3, .production_id = 6),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3, .production_id = 6),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 3, .production_id = 6),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3, .production_id = 6),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3, .production_id = 6),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_array, 3, .production_id = 6),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3, .production_id = 9),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3, .production_id = 9),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_sqr_tuple, 2),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym_sqr_tuple, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3, .production_id = 9),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3, .production_id = 9),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_long_str_literal, 3),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_long_str_literal, 3),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_break, 4),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym_break, 4),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_buffer_literal, 3),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_buffer_literal, 3),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_long_buffer_literal, 3),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_long_buffer_literal, 3),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_splice, 4),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym_splice, 4),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 4),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 4),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 4),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 4),
  [688] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [690] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tuple_repeat1, 1, .production_id = 1),
  [692] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 1, .production_id = 12),
  [694] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 1, .production_id = 12),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym__struct_tables_commom, 2, .production_id = 8),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3, .production_id = 24),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3, .production_id = 24),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_doc_str, 1),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym__literals, 1),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_doc_str, 1),
  [710] = {.count = 1, .reusable = true}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [712] = {.count = 1, .reusable = false}, REDUCE(aux_sym_while_repeat1, 1, .production_id = 4),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [716] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_repeat1, 1, .production_id = 2),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [722] = {.count = 1, .reusable = true}, REDUCE(aux_sym__metadata, 1, .production_id = 13),
  [724] = {.count = 1, .reusable = false}, REDUCE(aux_sym__metadata, 1, .production_id = 13),
  [726] = {.count = 1, .reusable = true}, SHIFT(130),
  [728] = {.count = 1, .reusable = true}, SHIFT(114),
  [730] = {.count = 1, .reusable = true}, SHIFT(133),
  [732] = {.count = 1, .reusable = true}, SHIFT(51),
  [734] = {.count = 1, .reusable = true}, SHIFT(116),
  [736] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [738] = {.count = 1, .reusable = false}, SHIFT(93),
  [740] = {.count = 1, .reusable = false}, SHIFT(120),
  [742] = {.count = 1, .reusable = true}, SHIFT(120),
  [744] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [746] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(120),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(120),
  [752] = {.count = 1, .reusable = false}, SHIFT(95),
  [754] = {.count = 1, .reusable = false}, SHIFT(128),
  [756] = {.count = 1, .reusable = true}, SHIFT(128),
  [758] = {.count = 1, .reusable = false}, SHIFT(67),
  [760] = {.count = 1, .reusable = false}, SHIFT(125),
  [762] = {.count = 1, .reusable = true}, SHIFT(125),
  [764] = {.count = 1, .reusable = false}, SHIFT(65),
  [766] = {.count = 1, .reusable = false}, SHIFT(124),
  [768] = {.count = 1, .reusable = true}, SHIFT(124),
  [770] = {.count = 1, .reusable = false}, SHIFT(97),
  [772] = {.count = 1, .reusable = false}, SHIFT(98),
  [774] = {.count = 1, .reusable = false}, SHIFT(61),
  [776] = {.count = 1, .reusable = false}, SHIFT(119),
  [778] = {.count = 1, .reusable = true}, SHIFT(119),
  [780] = {.count = 1, .reusable = false}, SHIFT(63),
  [782] = {.count = 1, .reusable = false}, SHIFT(121),
  [784] = {.count = 1, .reusable = true}, SHIFT(121),
  [786] = {.count = 1, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [788] = {.count = 2, .reusable = false}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(128),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(128),
  [794] = {.count = 1, .reusable = true}, SHIFT(107),
  [796] = {.count = 1, .reusable = true}, SHIFT(132),
  [798] = {.count = 1, .reusable = true}, SHIFT(111),
  [800] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 25),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 25), SHIFT_REPEAT(132),
  [805] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 1, .production_id = 17),
  [807] = {.count = 1, .reusable = true}, SHIFT(50),
  [809] = {.count = 1, .reusable = true}, SHIFT(53),
  [811] = {.count = 1, .reusable = true}, SHIFT(66),
  [813] = {.count = 1, .reusable = true}, SHIFT(102),
  [815] = {.count = 1, .reusable = true}, SHIFT(96),
  [817] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [819] = {.count = 1, .reusable = true}, SHIFT(79),
  [821] = {.count = 1, .reusable = true}, SHIFT(99),
  [823] = {.count = 1, .reusable = true}, SHIFT(64),
  [825] = {.count = 1, .reusable = true}, SHIFT(62),
  [827] = {.count = 1, .reusable = true}, SHIFT(68),
  [829] = {.count = 1, .reusable = true}, SHIFT(103),
  [831] = {.count = 1, .reusable = true}, SHIFT(52),
  [833] = {.count = 1, .reusable = true}, SHIFT(69),
  [835] = {.count = 1, .reusable = true}, SHIFT(77),
  [837] = {.count = 1, .reusable = true}, SHIFT(75),
  [839] = {.count = 1, .reusable = true}, SHIFT(54),
  [841] = {.count = 1, .reusable = true}, SHIFT(71),
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
