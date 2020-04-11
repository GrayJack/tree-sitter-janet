module.exports = grammar({
  name: 'janet',

  rules: {
    source_file: $ => repeat($._anything),

    _anything: $ => choice(
      $._literals,
      $._identifier,
      $._s_expr
    ),

    _s_expr: $ => seq(
      '(',
      $._anything,
      ')',
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
