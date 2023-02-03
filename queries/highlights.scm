; Declarations

[
  (field_declaration)
  (schema_declaration)
] @function.method

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
