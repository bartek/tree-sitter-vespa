; Declarations

[
  (field_declaration)
  (schema_declaration)
] @function.method

[
  (field_type)
] @type

[
  (int_literal)
] @number

(identifier) @string

[ "|" ":" ] @operator
(comment) @comment

[
  "{"
  "}"
]  @punctuation.bracket
