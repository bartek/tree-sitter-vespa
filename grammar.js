const 
  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  letter = choice(unicodeLetter, '_'),
  newline = '\n',
  terminator = choice(newline, ';')


module.exports = grammar({
  name: 'vespa',

  rules: {
    field_declaration: $ => seq(
        'field',
        field('name', $.identifier),
        'type',
        $._field_types,
        field('body', optional($.block)),
    ),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _field_types: $ => choice(
        $.string_type,
        $.int_type
    ),

    int_type: $ => 'int',
    string_type: $ => 'string',

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}',
    ),

    _statement_list: $ => choice(
     seq(
       $._statement,
       repeat(seq(terminator, $._statement)),
     ),
    ),

    _statement: $ => choice(
        $.empty_statement,
        $.block,
    ),

    empty_statement: $ => '',
  }
});
