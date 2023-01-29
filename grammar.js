const 
  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  letter = choice(unicodeLetter, '_', '-'),
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
    // field = ["repeated"] fieldName type { [ "[" elementDeclarations "]" ] ";"
    field_declaration: $ => seq(
        'field',
        field('name', $.identifier),
        'type',
        $._field_types,
        $.element_declaration_list,
    ),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _field_types: $ => choice(
        $.array_type,
        $.weighted_set_type,
        'bool',
        'byte',
        'double',
        'float',
        'int',
        'long',
        'position',
        'predicate',
        'raw',
        'string',
        'structname',
        $.map_type,
        'uri',
        $.reference_type,
    ),

    reference_type: $ => seq(
      'reference',
      '<',
      $.identifier,
      '>',
    ),

    map_type: $ => seq(
      'map',
      '<',
      $.identifier,
      ',',
      $.identifier,
      '>',
    ),

    weighted_set_type: $ => seq(
      'weightedset',
      '<',
      $.identifier,
      '>',
    ),

    array_type: $ => seq(
      'array',
      '<',
      $.identifier,
      '>',
    ),

    element_declaration_list: $ => seq(
      '{',
        optional(seq(
        $.element,
        repeat(seq(terminator, $.element)),
        optional(terminator)
        )),
      '}',
    ),


    block: $ => seq(
      '{',
      optional($._statement_list),
      '}',
    ),

    element: $ => seq(
      field('identifier', $.identifier),
      optional(field('name', $.identifier)),
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
        $.element,
    ),

    comment: $ => token(seq('#', /.*/)),
  }
});

function pipeSep(rule) {
  return seq(rule, repeat(seq('|', rule)))
}
