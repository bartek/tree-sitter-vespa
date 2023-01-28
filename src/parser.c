#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_field = 1,
  anon_sym_type = 2,
  anon_sym_LBRACE = 3,
  anon_sym_LF = 4,
  anon_sym_SEMI = 5,
  anon_sym_RBRACE = 6,
  sym_field_name = 7,
  sym_int_type = 8,
  sym_string_type = 9,
  sym_field = 10,
  sym__field_properties = 11,
  sym__field_types = 12,
  aux_sym_field_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_field] = "field",
  [anon_sym_type] = "type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [sym_field_name] = "field_name",
  [sym_int_type] = "int_type",
  [sym_string_type] = "string_type",
  [sym_field] = "field",
  [sym__field_properties] = "_field_properties",
  [sym__field_types] = "_field_types",
  [aux_sym_field_repeat1] = "field_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_field_name] = sym_field_name,
  [sym_int_type] = sym_int_type,
  [sym_string_type] = sym_string_type,
  [sym_field] = sym_field,
  [sym__field_properties] = sym__field_properties,
  [sym__field_types] = sym__field_types,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_int_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__field_properties] = {
    .visible = false,
    .named = true,
  },
  [sym__field_types] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_int_type);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string_type);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_int_type] = ACTIONS(1),
    [sym_string_type] = ACTIONS(1),
  },
  [1] = {
    [sym_field] = STATE(10),
    [anon_sym_field] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__field_properties,
  [13] = 4,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_field_repeat1,
  [26] = 4,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_field_repeat1,
  [39] = 4,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_field_repeat1,
  [52] = 2,
    STATE(12), 1,
      sym__field_types,
    ACTIONS(27), 2,
      sym_int_type,
      sym_string_type,
  [60] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym__field_properties,
  [70] = 2,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(25), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [78] = 1,
    ACTIONS(35), 1,
      sym_field_name,
  [82] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [86] = 1,
    ACTIONS(39), 1,
      anon_sym_type,
  [90] = 1,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
  [94] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vespa(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
