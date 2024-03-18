#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_comment = 2,
  aux_sym__keyword_begin_token1 = 3,
  aux_sym__keyword_end_token1 = 4,
  aux_sym__keyword_atoms_frac_token1 = 5,
  aux_sym__keyword_unit_cell_cart_token1 = 6,
  aux_sym__keyword_projections_token1 = 7,
  aux_sym_orbital_random_token1 = 8,
  aux_sym__keyword_kpoint_path_token1 = 9,
  aux_sym__keyword_kpoints_token1 = 10,
  anon_sym_COMMA = 11,
  anon_sym_DOT = 12,
  anon_sym_EQ = 13,
  anon_sym_DASH = 14,
  anon_sym_COLON = 15,
  anon_sym_SEMI = 16,
  aux_sym_boolean_token1 = 17,
  aux_sym_boolean_token2 = 18,
  aux_sym_boolean_token3 = 19,
  aux_sym_boolean_token4 = 20,
  sym_number = 21,
  sym_range = 22,
  aux_sym__list_element_token1 = 23,
  sym_coordinate_type = 24,
  sym_sph_ham = 25,
  sym_identifier = 26,
  sym_document = 27,
  sym__keyword_begin = 28,
  sym__keyword_end = 29,
  sym__keyword_atoms_frac = 30,
  sym__keyword_unit_cell_cart = 31,
  sym__keyword_projections = 32,
  sym_orbital_random = 33,
  sym__keyword_kpoint_path = 34,
  sym__keyword_kpoints = 35,
  sym__op_comma = 36,
  sym__op_eq = 37,
  sym__op_colon = 38,
  sym__op_semicolon = 39,
  sym_boolean = 40,
  sym_vec3 = 41,
  sym__str_vec3 = 42,
  sym_list = 43,
  sym__list_element = 44,
  sym_pair = 45,
  sym_atoms_frac = 46,
  sym__block_length_unit = 47,
  sym__block_matrix = 48,
  sym_unit_cell_cart = 49,
  sym_kpoint_path = 50,
  sym_kpoints = 51,
  sym_orbital_def = 52,
  sym__block_projections = 53,
  sym_projections = 54,
  aux_sym_document_repeat1 = 55,
  aux_sym_list_repeat1 = 56,
  aux_sym_atoms_frac_repeat1 = 57,
  aux_sym__block_length_unit_repeat1 = 58,
  aux_sym__block_matrix_repeat1 = 59,
  aux_sym_kpoint_path_repeat1 = 60,
  aux_sym_kpoints_repeat1 = 61,
  aux_sym_orbital_def_repeat1 = 62,
  aux_sym__block_projections_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [aux_sym__keyword_begin_token1] = "keyword",
  [aux_sym__keyword_end_token1] = "keyword",
  [aux_sym__keyword_atoms_frac_token1] = "identifier",
  [aux_sym__keyword_unit_cell_cart_token1] = "identifier",
  [aux_sym__keyword_projections_token1] = "identifier",
  [aux_sym_orbital_random_token1] = "keyword",
  [aux_sym__keyword_kpoint_path_token1] = "identifier",
  [aux_sym__keyword_kpoints_token1] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [aux_sym_boolean_token3] = "boolean_token3",
  [aux_sym_boolean_token4] = "boolean_token4",
  [sym_number] = "number",
  [sym_range] = "range",
  [aux_sym__list_element_token1] = "number",
  [sym_coordinate_type] = "coordinate_type",
  [sym_sph_ham] = "sph_ham",
  [sym_identifier] = "identifier",
  [sym_document] = "document",
  [sym__keyword_begin] = "_keyword_begin",
  [sym__keyword_end] = "_keyword_end",
  [sym__keyword_atoms_frac] = "_keyword_atoms_frac",
  [sym__keyword_unit_cell_cart] = "_keyword_unit_cell_cart",
  [sym__keyword_projections] = "_keyword_projections",
  [sym_orbital_random] = "orbital_random",
  [sym__keyword_kpoint_path] = "_keyword_kpoint_path",
  [sym__keyword_kpoints] = "_keyword_kpoints",
  [sym__op_comma] = "_op_comma",
  [sym__op_eq] = "_op_eq",
  [sym__op_colon] = "_op_colon",
  [sym__op_semicolon] = "_op_semicolon",
  [sym_boolean] = "boolean",
  [sym_vec3] = "vec3",
  [sym__str_vec3] = "_str_vec3",
  [sym_list] = "list",
  [sym__list_element] = "_list_element",
  [sym_pair] = "pair",
  [sym_atoms_frac] = "atoms_frac",
  [sym__block_length_unit] = "_block_length_unit",
  [sym__block_matrix] = "_block_matrix",
  [sym_unit_cell_cart] = "unit_cell_cart",
  [sym_kpoint_path] = "kpoint_path",
  [sym_kpoints] = "kpoints",
  [sym_orbital_def] = "orbital_def",
  [sym__block_projections] = "_block_projections",
  [sym_projections] = "projections",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_atoms_frac_repeat1] = "atoms_frac_repeat1",
  [aux_sym__block_length_unit_repeat1] = "_block_length_unit_repeat1",
  [aux_sym__block_matrix_repeat1] = "_block_matrix_repeat1",
  [aux_sym_kpoint_path_repeat1] = "kpoint_path_repeat1",
  [aux_sym_kpoints_repeat1] = "kpoints_repeat1",
  [aux_sym_orbital_def_repeat1] = "orbital_def_repeat1",
  [aux_sym__block_projections_repeat1] = "_block_projections_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [aux_sym__keyword_begin_token1] = aux_sym__keyword_begin_token1,
  [aux_sym__keyword_end_token1] = aux_sym__keyword_begin_token1,
  [aux_sym__keyword_atoms_frac_token1] = aux_sym__keyword_atoms_frac_token1,
  [aux_sym__keyword_unit_cell_cart_token1] = aux_sym__keyword_atoms_frac_token1,
  [aux_sym__keyword_projections_token1] = aux_sym__keyword_atoms_frac_token1,
  [aux_sym_orbital_random_token1] = aux_sym__keyword_begin_token1,
  [aux_sym__keyword_kpoint_path_token1] = aux_sym__keyword_atoms_frac_token1,
  [aux_sym__keyword_kpoints_token1] = aux_sym__keyword_atoms_frac_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [aux_sym_boolean_token3] = aux_sym_boolean_token3,
  [aux_sym_boolean_token4] = aux_sym_boolean_token4,
  [sym_number] = sym_number,
  [sym_range] = sym_range,
  [aux_sym__list_element_token1] = sym_number,
  [sym_coordinate_type] = sym_coordinate_type,
  [sym_sph_ham] = sym_sph_ham,
  [sym_identifier] = sym_identifier,
  [sym_document] = sym_document,
  [sym__keyword_begin] = sym__keyword_begin,
  [sym__keyword_end] = sym__keyword_end,
  [sym__keyword_atoms_frac] = sym__keyword_atoms_frac,
  [sym__keyword_unit_cell_cart] = sym__keyword_unit_cell_cart,
  [sym__keyword_projections] = sym__keyword_projections,
  [sym_orbital_random] = sym_orbital_random,
  [sym__keyword_kpoint_path] = sym__keyword_kpoint_path,
  [sym__keyword_kpoints] = sym__keyword_kpoints,
  [sym__op_comma] = sym__op_comma,
  [sym__op_eq] = sym__op_eq,
  [sym__op_colon] = sym__op_colon,
  [sym__op_semicolon] = sym__op_semicolon,
  [sym_boolean] = sym_boolean,
  [sym_vec3] = sym_vec3,
  [sym__str_vec3] = sym__str_vec3,
  [sym_list] = sym_list,
  [sym__list_element] = sym__list_element,
  [sym_pair] = sym_pair,
  [sym_atoms_frac] = sym_atoms_frac,
  [sym__block_length_unit] = sym__block_length_unit,
  [sym__block_matrix] = sym__block_matrix,
  [sym_unit_cell_cart] = sym_unit_cell_cart,
  [sym_kpoint_path] = sym_kpoint_path,
  [sym_kpoints] = sym_kpoints,
  [sym_orbital_def] = sym_orbital_def,
  [sym__block_projections] = sym__block_projections,
  [sym_projections] = sym_projections,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_atoms_frac_repeat1] = aux_sym_atoms_frac_repeat1,
  [aux_sym__block_length_unit_repeat1] = aux_sym__block_length_unit_repeat1,
  [aux_sym__block_matrix_repeat1] = aux_sym__block_matrix_repeat1,
  [aux_sym_kpoint_path_repeat1] = aux_sym_kpoint_path_repeat1,
  [aux_sym_kpoints_repeat1] = aux_sym_kpoints_repeat1,
  [aux_sym_orbital_def_repeat1] = aux_sym_orbital_def_repeat1,
  [aux_sym__block_projections_repeat1] = aux_sym__block_projections_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__keyword_begin_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_end_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_atoms_frac_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_unit_cell_cart_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_projections_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_orbital_random_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_kpoint_path_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_kpoints_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__list_element_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_coordinate_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sph_ham] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_end] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_atoms_frac] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_unit_cell_cart] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_projections] = {
    .visible = false,
    .named = true,
  },
  [sym_orbital_random] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_kpoint_path] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_kpoints] = {
    .visible = false,
    .named = true,
  },
  [sym__op_comma] = {
    .visible = false,
    .named = true,
  },
  [sym__op_eq] = {
    .visible = false,
    .named = true,
  },
  [sym__op_colon] = {
    .visible = false,
    .named = true,
  },
  [sym__op_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_vec3] = {
    .visible = true,
    .named = true,
  },
  [sym__str_vec3] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__list_element] = {
    .visible = false,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_atoms_frac] = {
    .visible = true,
    .named = true,
  },
  [sym__block_length_unit] = {
    .visible = false,
    .named = true,
  },
  [sym__block_matrix] = {
    .visible = false,
    .named = true,
  },
  [sym_unit_cell_cart] = {
    .visible = true,
    .named = true,
  },
  [sym_kpoint_path] = {
    .visible = true,
    .named = true,
  },
  [sym_kpoints] = {
    .visible = true,
    .named = true,
  },
  [sym_orbital_def] = {
    .visible = true,
    .named = true,
  },
  [sym__block_projections] = {
    .visible = false,
    .named = true,
  },
  [sym_projections] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atoms_frac_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_length_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_matrix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kpoint_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kpoints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_orbital_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_projections_repeat1] = {
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 58,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 48,
  [65] = 65,
  [66] = 66,
  [67] = 51,
  [68] = 68,
  [69] = 19,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 21,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 74,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 57,
  [130] = 130,
  [131] = 68,
  [132] = 132,
  [133] = 58,
  [134] = 134,
  [135] = 135,
  [136] = 110,
  [137] = 137,
  [138] = 111,
  [139] = 123,
  [140] = 108,
  [141] = 141,
  [142] = 142,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'D' && c <= 'Z')
                  : (c <= '_' || (c >= 'd' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'B'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'F' ||
          lookahead == 'c' ||
          lookahead == 'f') ADVANCE(115);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'p' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(23);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__keyword_begin_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__keyword_end_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__keyword_end_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__keyword_atoms_frac_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__keyword_atoms_frac_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__keyword_unit_cell_cart_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__keyword_unit_cell_cart_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__keyword_projections_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__keyword_projections_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_orbital_random_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__keyword_kpoint_path_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__keyword_kpoint_path_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__keyword_kpoints_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__keyword_kpoints_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(177);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(177);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__list_element_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_coordinate_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(177);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_coordinate_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_sph_ham);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'p' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(137);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(177);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(177);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(129);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(177);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(128);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(177);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(177);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(177);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(177);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(177);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(164);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__keyword_begin_token1] = ACTIONS(1),
    [aux_sym__keyword_end_token1] = ACTIONS(1),
    [aux_sym__keyword_atoms_frac_token1] = ACTIONS(1),
    [aux_sym__keyword_unit_cell_cart_token1] = ACTIONS(1),
    [aux_sym__keyword_projections_token1] = ACTIONS(1),
    [aux_sym_orbital_random_token1] = ACTIONS(1),
    [aux_sym__keyword_kpoint_path_token1] = ACTIONS(1),
    [aux_sym__keyword_kpoints_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [aux_sym_boolean_token3] = ACTIONS(1),
    [aux_sym_boolean_token4] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__list_element_token1] = ACTIONS(1),
    [sym_coordinate_type] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(142),
    [sym__keyword_begin] = STATE(6),
    [sym_pair] = STATE(2),
    [sym_atoms_frac] = STATE(2),
    [sym_unit_cell_cart] = STATE(2),
    [sym_kpoint_path] = STATE(2),
    [sym_kpoints] = STATE(2),
    [sym_projections] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym__keyword_begin_token1] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym__keyword_begin_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__newline,
    STATE(6), 1,
      sym__keyword_begin,
    STATE(3), 7,
      sym_pair,
      sym_atoms_frac,
      sym_unit_cell_cart,
      sym_kpoint_path,
      sym_kpoints,
      sym_projections,
      aux_sym_document_repeat1,
  [28] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__newline,
    ACTIONS(22), 1,
      aux_sym__keyword_begin_token1,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(6), 1,
      sym__keyword_begin,
    STATE(3), 7,
      sym_pair,
      sym_atoms_frac,
      sym_unit_cell_cart,
      sym_kpoint_path,
      sym_kpoints,
      sym_projections,
      aux_sym_document_repeat1,
  [56] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym__newline,
    ACTIONS(30), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(32), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(34), 1,
      sym_coordinate_type,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(7), 1,
      sym__block_length_unit,
    STATE(8), 1,
      aux_sym__block_projections_repeat1,
    STATE(48), 1,
      aux_sym__block_length_unit_repeat1,
    STATE(73), 1,
      sym__keyword_end,
    STATE(77), 1,
      sym__block_projections,
    STATE(137), 2,
      sym_orbital_random,
      sym_orbital_def,
  [94] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(42), 1,
      sym_range,
    ACTIONS(44), 1,
      aux_sym__list_element_token1,
    STATE(44), 1,
      sym__list_element,
    STATE(115), 3,
      sym_boolean,
      sym_vec3,
      sym_list,
    ACTIONS(38), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [121] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__keyword_atoms_frac_token1,
    ACTIONS(48), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    ACTIONS(50), 1,
      aux_sym__keyword_projections_token1,
    ACTIONS(52), 1,
      aux_sym__keyword_kpoint_path_token1,
    ACTIONS(54), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(106), 1,
      sym__keyword_projections,
    STATE(118), 1,
      sym__keyword_kpoints,
    STATE(119), 1,
      sym__keyword_kpoint_path,
    STATE(130), 1,
      sym__keyword_unit_cell_cart,
    STATE(132), 1,
      sym__keyword_atoms_frac,
  [155] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(34), 1,
      sym_coordinate_type,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(58), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym__block_projections_repeat1,
    STATE(79), 1,
      sym__keyword_end,
    STATE(80), 1,
      sym__block_projections,
    STATE(137), 2,
      sym_orbital_random,
      sym_orbital_def,
  [187] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(34), 1,
      sym_coordinate_type,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym__newline,
    ACTIONS(64), 1,
      aux_sym__keyword_end_token1,
    STATE(9), 1,
      aux_sym__block_projections_repeat1,
    STATE(137), 2,
      sym_orbital_random,
      sym_orbital_def,
  [213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym__newline,
    ACTIONS(69), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(71), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(74), 1,
      sym_coordinate_type,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__block_projections_repeat1,
    STATE(137), 2,
      sym_orbital_random,
      sym_orbital_def,
  [239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym__block_matrix_repeat1,
    STATE(29), 1,
      sym__block_length_unit,
    STATE(64), 1,
      aux_sym__block_length_unit_repeat1,
    STATE(81), 1,
      sym__block_matrix,
    STATE(128), 1,
      sym_vec3,
  [267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(88), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(90), 1,
      sym_number,
    STATE(13), 1,
      aux_sym_kpoints_repeat1,
    STATE(93), 1,
      sym__keyword_end,
    STATE(98), 1,
      sym_vec3,
  [289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__newline,
    ACTIONS(94), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(84), 1,
      sym__keyword_end,
    STATE(85), 1,
      sym__str_vec3,
  [311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(98), 1,
      sym__newline,
    ACTIONS(100), 1,
      aux_sym__keyword_end_token1,
    STATE(17), 1,
      aux_sym_kpoints_repeat1,
    STATE(88), 1,
      sym__keyword_end,
    STATE(98), 1,
      sym_vec3,
  [333] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__newline,
    ACTIONS(104), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(102), 1,
      sym__keyword_end,
    STATE(114), 1,
      sym__str_vec3,
  [355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      sym__newline,
    ACTIONS(110), 1,
      aux_sym__keyword_end_token1,
    STATE(14), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(101), 1,
      sym__keyword_end,
    STATE(114), 1,
      sym__str_vec3,
  [377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym__newline,
    ACTIONS(114), 1,
      aux_sym__keyword_end_token1,
    STATE(12), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(82), 1,
      sym__keyword_end,
    STATE(85), 1,
      sym__str_vec3,
  [399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(119), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(121), 1,
      sym_number,
    STATE(17), 1,
      aux_sym_kpoints_repeat1,
    STATE(98), 1,
      sym_vec3,
  [418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym__newline,
    ACTIONS(127), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(85), 1,
      sym__str_vec3,
  [437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__newline,
    ACTIONS(134), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      aux_sym__list_element_token1,
    STATE(60), 1,
      sym__op_comma,
    ACTIONS(136), 2,
      sym__newline,
      sym_range,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_range,
    ACTIONS(151), 1,
      aux_sym__list_element_token1,
    STATE(22), 2,
      sym__list_element,
      aux_sym_list_repeat1,
  [497] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__newline,
    ACTIONS(157), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(114), 1,
      sym__str_vec3,
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(165), 3,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
  [531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(172), 1,
      aux_sym__keyword_end_token1,
    STATE(26), 1,
      aux_sym__block_matrix_repeat1,
    STATE(128), 1,
      sym_vec3,
  [550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(179), 1,
      sym_number,
    STATE(26), 1,
      aux_sym__block_matrix_repeat1,
    STATE(128), 1,
      sym_vec3,
  [569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_range,
    ACTIONS(44), 1,
      aux_sym__list_element_token1,
    ACTIONS(182), 1,
      sym__newline,
    STATE(22), 2,
      sym__list_element,
      aux_sym_list_repeat1,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(69), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(186), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym__block_matrix_repeat1,
    STATE(71), 1,
      sym__block_matrix,
    STATE(128), 1,
      sym_vec3,
  [618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(5), 2,
      sym__op_eq,
      sym__op_colon,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(192), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(197), 2,
      aux_sym__keyword_end_token1,
      sym_number,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(203), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      sym_number,
    STATE(108), 1,
      sym__op_comma,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(213), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(217), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(221), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(225), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(229), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(233), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(237), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(241), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(245), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_range,
    ACTIONS(44), 1,
      aux_sym__list_element_token1,
    STATE(27), 2,
      sym__list_element,
      aux_sym_list_repeat1,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(249), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym__block_length_unit_repeat1,
  [840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym__block_length_unit_repeat1,
  [853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__newline,
    ACTIONS(264), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym__op_colon,
  [866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_number,
    STATE(139), 1,
      sym__op_comma,
  [879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      sym_number,
    STATE(140), 1,
      sym__op_comma,
  [892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      sym_number,
    STATE(136), 1,
      sym__op_comma,
  [905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym__op_semicolon,
  [918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym__op_semicolon,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym__op_semicolon,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      sym_number,
    STATE(110), 1,
      sym__op_comma,
  [957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      sym_number,
    STATE(123), 1,
      sym__op_comma,
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__list_element_token1,
    ACTIONS(302), 2,
      sym__newline,
      sym_range,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(308), 2,
      aux_sym__keyword_end_token1,
      sym_identifier,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__newline,
    ACTIONS(157), 2,
      aux_sym__keyword_end_token1,
      sym_identifier,
  [1021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym__op_semicolon,
  [1034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym__block_length_unit_repeat1,
  [1047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      sym_number,
    STATE(108), 1,
      sym__op_comma,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym__newline,
      sym_number,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      sym__newline,
      sym_identifier,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym__keyword_end_token1,
    STATE(92), 1,
      sym__keyword_end,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    STATE(121), 1,
      sym__keyword_unit_cell_cart,
  [1123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__keyword_projections_token1,
    STATE(141), 1,
      sym__keyword_projections,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_number,
    STATE(70), 1,
      sym_vec3,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_number,
    STATE(95), 1,
      sym_vec3,
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_sph_ham,
    STATE(97), 1,
      aux_sym_orbital_def_repeat1,
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym__keyword_end_token1,
    STATE(79), 1,
      sym__keyword_end,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym__op_colon,
  [1183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym__keyword_projections_token1,
    STATE(113), 1,
      sym__keyword_projections,
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym__keyword_end_token1,
    STATE(100), 1,
      sym__keyword_end,
  [1203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__keyword_end_token1,
    STATE(72), 1,
      sym__keyword_end,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym__keyword_kpoint_path_token1,
    STATE(135), 1,
      sym__keyword_kpoint_path,
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym_sph_ham,
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__keyword_kpoint_path_token1,
    STATE(112), 1,
      sym__keyword_kpoint_path,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(134), 1,
      sym__str_vec3,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym_sph_ham,
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym__newline,
      sym_number,
  [1271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(107), 1,
      sym__keyword_kpoints,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym__op_semicolon,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym_sph_ham,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_sph_ham,
    STATE(94), 1,
      aux_sym_orbital_def_repeat1,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    STATE(109), 1,
      sym__keyword_unit_cell_cart,
  [1321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(126), 1,
      sym__keyword_kpoints,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_sph_ham,
    STATE(94), 1,
      aux_sym_orbital_def_repeat1,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym__op_colon,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym__op_eq,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_sph_ham,
    STATE(94), 1,
      aux_sym_orbital_def_repeat1,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym_number,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym_sph_ham,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym__keyword_projections_token1,
    STATE(116), 1,
      sym__keyword_projections,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym__keyword_atoms_frac_token1,
    STATE(124), 1,
      sym__keyword_atoms_frac,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym__keyword_atoms_frac_token1,
    STATE(122), 1,
      sym__keyword_atoms_frac,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_sph_ham,
    STATE(91), 1,
      aux_sym_orbital_def_repeat1,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_number,
    STATE(70), 1,
      sym_vec3,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__newline,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__newline,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__newline,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_number,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__newline,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_number,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__newline,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__newline,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym__newline,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__newline,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__newline,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym__newline,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__newline,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__newline,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__newline,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__newline,
  [1553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__newline,
  [1560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__newline,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_number,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__newline,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__newline,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__newline,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_sph_ham,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__newline,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_identifier,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__newline,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__newline,
  [1637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__newline,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__newline,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_number,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym__newline,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__newline,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_number,
  [1686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_number,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__newline,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 355,
  [SMALL_STATE(16)] = 377,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 437,
  [SMALL_STATE(20)] = 450,
  [SMALL_STATE(21)] = 467,
  [SMALL_STATE(22)] = 480,
  [SMALL_STATE(23)] = 497,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 569,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 599,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 642,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 668,
  [SMALL_STATE(35)] = 684,
  [SMALL_STATE(36)] = 696,
  [SMALL_STATE(37)] = 708,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 732,
  [SMALL_STATE(40)] = 744,
  [SMALL_STATE(41)] = 756,
  [SMALL_STATE(42)] = 768,
  [SMALL_STATE(43)] = 780,
  [SMALL_STATE(44)] = 792,
  [SMALL_STATE(45)] = 806,
  [SMALL_STATE(46)] = 818,
  [SMALL_STATE(47)] = 827,
  [SMALL_STATE(48)] = 840,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 866,
  [SMALL_STATE(51)] = 879,
  [SMALL_STATE(52)] = 892,
  [SMALL_STATE(53)] = 905,
  [SMALL_STATE(54)] = 918,
  [SMALL_STATE(55)] = 931,
  [SMALL_STATE(56)] = 944,
  [SMALL_STATE(57)] = 957,
  [SMALL_STATE(58)] = 966,
  [SMALL_STATE(59)] = 975,
  [SMALL_STATE(60)] = 988,
  [SMALL_STATE(61)] = 999,
  [SMALL_STATE(62)] = 1010,
  [SMALL_STATE(63)] = 1021,
  [SMALL_STATE(64)] = 1034,
  [SMALL_STATE(65)] = 1047,
  [SMALL_STATE(66)] = 1056,
  [SMALL_STATE(67)] = 1065,
  [SMALL_STATE(68)] = 1078,
  [SMALL_STATE(69)] = 1087,
  [SMALL_STATE(70)] = 1095,
  [SMALL_STATE(71)] = 1103,
  [SMALL_STATE(72)] = 1113,
  [SMALL_STATE(73)] = 1123,
  [SMALL_STATE(74)] = 1133,
  [SMALL_STATE(75)] = 1143,
  [SMALL_STATE(76)] = 1153,
  [SMALL_STATE(77)] = 1163,
  [SMALL_STATE(78)] = 1173,
  [SMALL_STATE(79)] = 1183,
  [SMALL_STATE(80)] = 1193,
  [SMALL_STATE(81)] = 1203,
  [SMALL_STATE(82)] = 1213,
  [SMALL_STATE(83)] = 1223,
  [SMALL_STATE(84)] = 1233,
  [SMALL_STATE(85)] = 1243,
  [SMALL_STATE(86)] = 1253,
  [SMALL_STATE(87)] = 1263,
  [SMALL_STATE(88)] = 1271,
  [SMALL_STATE(89)] = 1281,
  [SMALL_STATE(90)] = 1291,
  [SMALL_STATE(91)] = 1301,
  [SMALL_STATE(92)] = 1311,
  [SMALL_STATE(93)] = 1321,
  [SMALL_STATE(94)] = 1331,
  [SMALL_STATE(95)] = 1341,
  [SMALL_STATE(96)] = 1351,
  [SMALL_STATE(97)] = 1361,
  [SMALL_STATE(98)] = 1371,
  [SMALL_STATE(99)] = 1381,
  [SMALL_STATE(100)] = 1391,
  [SMALL_STATE(101)] = 1401,
  [SMALL_STATE(102)] = 1411,
  [SMALL_STATE(103)] = 1421,
  [SMALL_STATE(104)] = 1431,
  [SMALL_STATE(105)] = 1441,
  [SMALL_STATE(106)] = 1448,
  [SMALL_STATE(107)] = 1455,
  [SMALL_STATE(108)] = 1462,
  [SMALL_STATE(109)] = 1469,
  [SMALL_STATE(110)] = 1476,
  [SMALL_STATE(111)] = 1483,
  [SMALL_STATE(112)] = 1490,
  [SMALL_STATE(113)] = 1497,
  [SMALL_STATE(114)] = 1504,
  [SMALL_STATE(115)] = 1511,
  [SMALL_STATE(116)] = 1518,
  [SMALL_STATE(117)] = 1525,
  [SMALL_STATE(118)] = 1532,
  [SMALL_STATE(119)] = 1539,
  [SMALL_STATE(120)] = 1546,
  [SMALL_STATE(121)] = 1553,
  [SMALL_STATE(122)] = 1560,
  [SMALL_STATE(123)] = 1567,
  [SMALL_STATE(124)] = 1574,
  [SMALL_STATE(125)] = 1581,
  [SMALL_STATE(126)] = 1588,
  [SMALL_STATE(127)] = 1595,
  [SMALL_STATE(128)] = 1602,
  [SMALL_STATE(129)] = 1609,
  [SMALL_STATE(130)] = 1616,
  [SMALL_STATE(131)] = 1623,
  [SMALL_STATE(132)] = 1630,
  [SMALL_STATE(133)] = 1637,
  [SMALL_STATE(134)] = 1644,
  [SMALL_STATE(135)] = 1651,
  [SMALL_STATE(136)] = 1658,
  [SMALL_STATE(137)] = 1665,
  [SMALL_STATE(138)] = 1672,
  [SMALL_STATE(139)] = 1679,
  [SMALL_STATE(140)] = 1686,
  [SMALL_STATE(141)] = 1693,
  [SMALL_STATE(142)] = 1700,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_projections, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(9),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(120),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(96),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(78),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2), SHIFT_REPEAT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2), SHIFT_REPEAT(67),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoint_path_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 2), SHIFT_REPEAT(74),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_length_unit, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_length_unit, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_element, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_element, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_length_unit, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_length_unit, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atoms_frac_repeat1, 2), SHIFT_REPEAT(23),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atoms_frac_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atoms_frac_repeat1, 2), SHIFT_REPEAT(104),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_projections_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 1),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_projections_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_matrix, 1),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(67),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_projections_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoint_path, 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoint_path, 7),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_matrix_repeat1, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_matrix_repeat1, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_length_unit_repeat1, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoints, 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoints, 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_cell_cart, 8),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_cell_cart, 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atoms_frac, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atoms_frac, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoint_path, 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoint_path, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoints, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoints, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atoms_frac, 7),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atoms_frac, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_cell_cart, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_cell_cart, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 3),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 2), SHIFT_REPEAT(47),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_element, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_element, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoint_path_repeat1, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atoms_frac_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_vec3, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_def_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_def_repeat1, 2), SHIFT_REPEAT(89),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_random, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [441] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wannier90() {
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
