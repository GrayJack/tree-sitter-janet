const PREC = {

}

module.exports = grammar({
  name: 'janet',

  extras: $ => [/\s/, ',', $.line_comment],

  rules: {
    source_file: $ => repeat($._expr),

    line_comment: $ => token(seq('#', /.*/)),

    _expr: $ => choice(
      $._literals,
      $._identifier,
      $._special_forms,
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
      field('name', $.symbol),
      field('value', $._expr),
      ')'
    ),

    var: $ => seq(
      '(',
      'var',
      field('name', $.symbol),
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
      repeat(field('form', $._expr)),
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
      optional(field('name', $.symbol)),
      field('parameters', $.fn_parameters),
      repeat(field('form', $._expr)),
      ')'
    ),

    fn_parameters: $ => seq(
      '[',
      repeat(field('parameter', $.symbol)),
      ']'
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

    // identifier
    _identifier: $ => choice($.symbol, $.keyword),
    keyword: $ => /:[a-zA-Zα-ωΑ-Ω0-9µ!@$%^&*_+=|~:<>.?\\-]*/,
    symbol: $ => /[a-zA-Zα-ωΑ-Ωµ!@$%^&*_+=|~<>.?\\-][a-zA-Zα-ωΑ-Ω0-9µ!@$%^&*_+=|~:<>.?\\-]*/,
  }
});
