const PREC = {

}

module.exports = grammar({
  name: 'janet',

  extras: $ => [/\s/, $.line_comment],

  rules: {
    source_file: $ => repeat($._expr),

    line_comment: $ => token(seq('#', /.*/)),

    _expr: $ => choice(
      $._literals,
      $._identifier,
      $._special_forms,
      $._shorthand,
      $.array,
      $.sqr_array,
      $.tuple,
      $.sqr_tuple,
      $.struct,
      $.table,
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
      optional(repeat(choice(
        field('doc_string', $.doc_str),
        field('modifier', $.keyword),
      ))),
      field('value', $._expr),
      ')'
    ),

    var: $ => seq(
      '(',
      'var',
      field('name', $._expr),
      optional(repeat(choice(
        field('doc_string', $.doc_str),
        field('modifier', $.keyword),
      ))),
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
      optional(field('name', $._identifier)),
      optional(field('doc_string', $.doc_str)),
      field('parameters', $.fn_parameters),
      optional(field('body', $.body)),
      ')'
    ),

    fn_parameters: $ => seq(
      '[',
      repeat(field('parameter', $.symbol)),
      ']'
    ),

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

    _literals: $ => choice(
      $.bool_literal,
      $.nil_literal,
      $.number_literal,
      $.str_literal,
      $.long_str_literal,
      $.buffer_literal,
      $.long_buffer_literal,
    ),

    str_literal: $ => seq(
      '"',
      repeat(choice(
        /[^"\\]+/,
        $.escape_sequence,
      )),
      '"'
    ),

    long_str_literal: $ => seq(
      '``',
      repeat(choice(
        /[^`\\]+/,
        $.escape_sequence,
      )),
      '``'
    ),

    buffer_literal: $ => seq(
      '@"',
      repeat(choice(
        /[^"\\]+/,
        $.escape_sequence,
      )),
      '"'
    ),

    long_buffer_literal: $ => seq(
      '@``',
      repeat(choice(
        /[^`\\]+/,
        $.escape_sequence,
      )),
      '``'
    ),

    number_literal: $ => choice(
      /[-+]?(\d[_\d]*|\d[_\d]*\.[_\d]*|\.[_\d]+)([eE&][+-]?[\d]+)?/,
      /[-+]?0x([_\da-fA-F]+|[_\da-fA-F]+\.[_\da-fA-F]*|\.[_\da-fA-F]+)(&[+-]?[\da-fA-F]+)?/,
      /[-+]?\d\d?r([_\w]+|[_\w]+\.[_\w]*|\.[_\w]+)(&[+-]?[\w]+)?/,
    ),

    bool_literal: $ => choice('true', 'false'),

    nil_literal: $ => 'nil',

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )
    ),

    doc_str: $ => choice($.str_literal, $.long_str_literal),

    body: $ => repeat1(field('form', $._expr)),

    // identifier
    _identifier: $ => choice($.symbol, $.keyword, $.scoped_symbol),

    scoped_symbol: $ => seq(
      field('path', alias($.symbol, $.module_symbol)),
      '/',
      choice($.scoped_symbol, $.symbol),
    ),

    keyword: $ => /:[a-zA-Zα-ωΑ-Ω0-9µ!@$%^&*_+=|~:<>.?\\-]*/,
    symbol: $ => /[a-zA-Zα-ωΑ-Ωµ!@$%^&*_+=<>.?\\-][a-zA-Zα-ωΑ-Ω0-9µ!@$%^&*_+=|~:<>.?\\-]*/,
  }
});
