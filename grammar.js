const 
  newline = '\n'
  terminator = choice(newline, ';')


module.exports = grammar({
  name: 'vespa',

  rules: {
    field: $ => seq(
        'field',
        $.field_name,
        'type',
        $._field_types,
        '{',
        $._field_properties,
        '}',
    ),

    field_name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _field_properties: $ => seq(
        terminator,
    ),

    _field_types: $ => choice(
        $.string_type,
        $.int_type
    ),

    int_type: $ => 'int',
    string_type: $ => 'string',
  }
});
