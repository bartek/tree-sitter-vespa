const 
  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  letter = choice(unicodeLetter, '_'),
  newline = '\n',
  terminator = choice(newline, ';')


module.exports = grammar({
  name: 'vespa',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    schema_file: $ => repeat(choice(
      seq($.schema_declaration, optional(terminator)),
    )),

    schema_declaration: $ => seq(
        'schema',
        field('name', $.identifier),
        field('body', optional($.block)),
    ),

    // TODO:
    // Fields can be declared outside the document block, in the schema
    // Need to add the optional document block first
    field_declaration: $ => seq(
        'field',
        field('name', $.identifier),
        'type',
        $._field_types,
        field('body', optional($.block)), // Body can also be one line, name : body
    ),

    // NEXT:
    // https://docs.vespa.ai/en/reference/schema-reference.html#attribute
    // Get two field elements working
    // Note that attribute can be one line or defined with a block

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

    field_element: $ => seq(
      field('name', $.identifier),
      ':',
      field('arguments', optional($.field_arguments)),
    ),

    field_arguments: $ => seq(
      pipeSep($.identifier),
    ),

    _statement_list: $ => choice(
     seq(
       $._statement,
       repeat(seq(terminator, $._statement)),
       optional(seq(
         terminator,
         optional($.empty_statement),
       )),
     ),
    ),

    empty_statement: $ => '',

    _statement: $ => choice(
        $.block,
        $.field_declaration,
        $.field_element,
    ),

    comment: $ => token(seq('#', /.*/)),
  }
});

function pipeSep(rule) {
  return seq(rule, repeat(seq('|', rule)))
}
