module.exports = grammar({
  name: 'janet',

  externals: $ => [$._long_str, $._long_buffer],

  extras: $ => [/\s/, $.line_comment],

  conflicts: $ => [],

  word: $ => $.symbol,

  supertypes: $ => [
    $._expr,
    $._literals,
    $._special_forms,
    $._shorthand,
    $._specials,
    $._identifier,
  ],

  rules: {
    source_file: $ => repeat($._expr),

    line_comment: $ => token(seq('#', /.*/)),

    _expr: $ => choice(
      $._literals,
      $._identifier,
      $._special_forms,
      $._shorthand,
      $._specials,
      $.array,
      $.sqr_array,
      $.tuple,
      $.sqr_tuple,
      $.struct,
      $.table,
      $.peg_set,
    ),

    tuple: $ => seq(
      '(',
      repeat(field('item', $._expr)),
      ')'
    ),

    sqr_tuple: $ => seq(
      '[',
      repeat(field('item', $._expr)),
      ']'
    ),

    array: $ => seq(
      '@(',
      repeat(field('item', $._expr)),
      ')'
    ),

    sqr_array: $ => seq(
      '@[',
      repeat(field('item', $._expr)),
      ']'
    ),

    struct: $ => seq(
      '{',
      repeat($._struct_tables_commom),
      '}'
    ),

    table: $ => seq(
      '@{',
      repeat($._struct_tables_commom),
      '}'
    ),

    _struct_tables_commom: $ => seq(
      field('key', $._expr),
      field('value', $._expr),
    ),

    peg_set: $ => seq(
      '(',
      'set',
      choice($.str_literal, $.long_str_literal, $.quote, $.short_quote),
      ')'
    ),

    _special_forms: $ => choice(
      $.def,
      $.var,
      $.quote,
      $.splice,
      $.quasiquote,
      $.unquote,
      $.break,
      $.set,
      $.if,
      $.do,
      $.while,
      $.fn,
    ),

    def: $ => seq(
      '(',
      'def',
      field('name', $._expr),
      repeat(field('metadata', $.metadata)),
      field('value', $._expr),
      ')'
    ),

    var: $ => seq(
      '(',
      'var',
      field('name', $._expr),
      repeat(field('metadata', $.metadata)),
      field('value', $._expr),
      ')'
    ),

    quote: $ => seq(
      '(',
      'quote',
      $._expr,
      ')'
    ),

    splice: $ => seq(
      '(',
      'splice',
      $._expr,
      ')'
    ),

    quasiquote: $ => seq(
      '(',
      'quasiquote',
      $._expr,
      ')'
    ),

    unquote: $ => seq(
      '(',
      'unquote',
      $._expr,
      ')'
    ),

    break: $ => seq(
      '(',
      'break',
      optional($._expr),
      ')'
    ),

    set: $ => seq(
      '(',
      'set',
      field('l_value', $._expr),
      field('r_value', $._expr),
      ')'
    ),

    if: $ => seq(
      '(',
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      optional(field('else', $._expr)),
      ')'
    ),

    do: $ => seq(
      '(',
      'do',
      optional(field('body', $.body)),
      ')'
    ),

    while: $ => seq(
      '(',
      'while',
      field('condition', $._expr),
      repeat(field('form', $._expr)),
      ')'
    ),

    fn: $ => seq(
      '(',
      'fn',
      optional(field('name', $._name)),
      field('parameters', $._parameters),
      optional(field('body', $.body)),
      ')'
    ),

    _parameters: $ => prec(1, choice(
      $._identifier, $.quote, $.splice, $.quasiquote, $.unquote,
      $.short_quote, $.short_splice, $.short_quasiquote, $.short_unquote,
      $.parameters, $.tuple_parameters,
    )),

    parameters: $ => seq(
      '[',
      repeat(field('parameter', $._expr)),
      optional(seq(
        choice($.variadic_marker, $.optional_marker, $.keys_marker),
        repeat(field('parameter', $._expr)),
      )),
      ']'
    ),

    tuple_parameters: $ => seq(
      '(',
      repeat(field('parameter', $._expr)),
      optional(seq(
        choice($.variadic_marker, $.optional_marker, $.keys_marker),
        repeat(field('parameter', $._expr)),
      )),
      ')'
    ),


    variadic_marker: $ => "&",
    optional_marker: $ => "&opt",
    keys_marker: $ => "&keys",

    _shorthand: $ => choice(
      $.short_quote,
      $.short_splice,
      $.short_quasiquote,
      $.short_unquote,
      $.short_fn,
    ),

    short_quote: $ => seq(
      '\'',
      $._expr,
    ),

    short_splice: $ => seq(
      ';',
      $._expr,
    ),

    short_quasiquote: $ => seq(
      '~',
      $._expr,
    ),

    short_unquote: $ => seq(
      ',',
      $._expr,
    ),

    short_fn: $ => seq(
      '|',
      field('body', $._expr),
    ),

    // Specials are not part of the language per see, but having defined here
    // is convenient for highlighters

    _specials: $ => choice(
      $.extra_defs,
    ),

    extra_defs: $ => seq(
      '(',
      choice('defn', 'defn-', 'varfn', 'varfn-', 'defmacro', 'defmacro-'),
      field('name', $._name),
      repeat(field('metadata', $.metadata)),
      field('parameters', $._parameters),
      optional(field('body', $.body)),
      ')'
    ),

    _literals: $ => choice(
      $.bool_literal,
      $.nil_literal,
      $.number_literal,
      $.str_literal,
      $.long_str_literal,
      $.buffer_literal,
      $.long_buffer_literal,
    ),

    str_literal: $ => token(seq(
      '"',
      repeat(choice(
        /[^"\\]+/,
        /\\[^xu]/,
        /\\u[0-9a-fA-F]{4}/,
        /\\u{[0-9a-fA-F]+}/,
        /\\x[0-9a-fA-F]{2}/
      )),
      '"'
    )),

    long_str_literal: $ => $._long_str,

    buffer_literal: $ => token(seq(
      '@"',
      repeat(choice(
        /[^"\\]+/,
        /\\[^xu]/,
        /\\u[0-9a-fA-F]{4}/,
        /\\u{[0-9a-fA-F]+}/,
        /\\x[0-9a-fA-F]{2}/
      )),
      '"'
    )),

    long_buffer_literal: $ => $._long_buffer,

    number_literal: $ => choice(
      /[-+]?(\d[_\d]*|\d[_\d]*\.[_\d]*|\.[_\d]+)([eE&][+-]?[\d]+)?/,
      /[-+]?0x([_\da-fA-F]+|[_\da-fA-F]+\.[_\da-fA-F]*|\.[_\da-fA-F]+)(&[+-]?[\da-fA-F]+)?/,
      /[-+]?\d\d?r([_\w]+|[_\w]+\.[_\w]*|\.[_\w]+)(&[+-]?[\w]+)?/,
    ),

    bool_literal: $ => choice('true', 'false'),

    nil_literal: $ => 'nil',

    escape_sequence: $ => token.immediate(choice(
        /\\[^xu]/,
        /\\u[0-9a-fA-F]{4}/,
        /\\u{[0-9a-fA-F]+}/,
        /\\x[0-9a-fA-F]{2}/
    )),

    // EXTRA HELPERS

    metadata: $ => prec.left(2, choice(
      $.keyword, $.str_literal, $.long_str_literal,
      $.quote, $.splice, $.quasiquote, $.unquote,
      $.short_quote, $.short_splice, $.short_quasiquote, $.short_unquote,
    )),

    _name: $ => prec(3, choice(
      $._identifier, $.quote, $.splice, $.quasiquote, $.unquote,
      $.short_quote, $.short_splice, $.short_quasiquote, $.short_unquote,
    )),

    doc_str: $ => choice($.str_literal, $.long_str_literal),

    body: $ => repeat1(field('form', $._expr)),

    // identifier
    _identifier: $ => choice($.symbol, $.keyword),

    // keyword: $ => /:[a-zA-Zα-ωΑ-Ω0-9µ!@$%^&*_+=|~:<>.?\\-]*/,
    // symbol: $ => /[a-zA-Zα-ωΑ-Ωµ!@$%^&/*_+=<>.?\\-][a-zA-Zα-ωΑ-Ω0-9µ!@$%^&/*_+=|~:<>.?\\-]*/,
    keyword: $ => /:[^({\["'|`;,~\]}\s)]*/,
    symbol: $ => /[^({\["'|`;,~\]}\s):][^({\["'|`;,~\]}\s)]*/
  }
});
