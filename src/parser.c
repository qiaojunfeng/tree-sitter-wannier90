#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  anon_sym_COLON = 14,
  anon_sym_SEMI = 15,
  aux_sym_boolean_token1 = 16,
  aux_sym_boolean_token2 = 17,
  aux_sym_boolean_token3 = 18,
  aux_sym_boolean_token4 = 19,
  sym_number = 20,
  sym_range = 21,
  sym_coordinate_type = 22,
  sym_sph_ham = 23,
  sym_identifier = 24,
  sym_document = 25,
  sym__keyword_begin = 26,
  sym__keyword_end = 27,
  sym__keyword_atoms_frac = 28,
  sym__keyword_unit_cell_cart = 29,
  sym__keyword_projections = 30,
  sym_orbital_random = 31,
  sym__keyword_kpoint_path = 32,
  sym__keyword_kpoints = 33,
  sym__op_comma = 34,
  sym__op_eq = 35,
  sym__op_colon = 36,
  sym__op_semicolon = 37,
  sym_boolean = 38,
  sym_pair = 39,
  sym_vec3 = 40,
  sym__str_vec3 = 41,
  sym_atoms_frac = 42,
  sym__block_length_unit = 43,
  sym__block_matrix = 44,
  sym_unit_cell_cart = 45,
  sym_kpoint_path = 46,
  sym_kpoints = 47,
  sym_orbital_def = 48,
  sym__block_projections = 49,
  sym_projections = 50,
  aux_sym_document_repeat1 = 51,
  aux_sym_atoms_frac_repeat1 = 52,
  aux_sym__block_length_unit_repeat1 = 53,
  aux_sym__block_matrix_repeat1 = 54,
  aux_sym_kpoint_path_repeat1 = 55,
  aux_sym_kpoints_repeat1 = 56,
  aux_sym_orbital_def_repeat1 = 57,
  aux_sym__block_projections_repeat1 = 58,
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
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [aux_sym_boolean_token3] = "boolean_token3",
  [aux_sym_boolean_token4] = "boolean_token4",
  [sym_number] = "number",
  [sym_range] = "range",
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
  [sym_pair] = "pair",
  [sym_vec3] = "vec3",
  [sym__str_vec3] = "_str_vec3",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [aux_sym_boolean_token3] = aux_sym_boolean_token3,
  [aux_sym_boolean_token4] = aux_sym_boolean_token4,
  [sym_number] = sym_number,
  [sym_range] = sym_range,
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
  [sym_pair] = sym_pair,
  [sym_vec3] = sym_vec3,
  [sym__str_vec3] = sym__str_vec3,
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
  [sym_pair] = {
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
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 48,
  [61] = 51,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 22,
  [79] = 79,
  [80] = 80,
  [81] = 67,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 23,
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
  [104] = 104,
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
  [128] = 50,
  [129] = 129,
  [130] = 46,
  [131] = 52,
  [132] = 132,
  [133] = 133,
  [134] = 110,
  [135] = 135,
  [136] = 105,
  [137] = 137,
  [138] = 138,
  [139] = 117,
  [140] = 133,
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
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      if (lookahead == 'C' ||
          lookahead == 'F' ||
          lookahead == 'c' ||
          lookahead == 'f') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'p' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__keyword_begin_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__keyword_end_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__keyword_end_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__keyword_atoms_frac_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__keyword_atoms_frac_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__keyword_unit_cell_cart_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__keyword_unit_cell_cart_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__keyword_projections_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__keyword_projections_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_orbital_random_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__keyword_kpoint_path_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__keyword_kpoint_path_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__keyword_kpoints_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__keyword_kpoints_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ',' ||
          lookahead == '-') ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_range);
      if (lookahead == ',' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_range);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_coordinate_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_coordinate_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_sph_ham);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'p' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(133);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(173);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(173);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(125);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(173);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(124);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(173);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(160);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 73},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [aux_sym_boolean_token3] = ACTIONS(1),
    [aux_sym_boolean_token4] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_coordinate_type] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(138),
    [sym__keyword_begin] = STATE(5),
    [sym_pair] = STATE(3),
    [sym_atoms_frac] = STATE(3),
    [sym_unit_cell_cart] = STATE(3),
    [sym_kpoint_path] = STATE(3),
    [sym_kpoints] = STATE(3),
    [sym_projections] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym__keyword_begin_token1] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(17), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(19), 1,
      sym_coordinate_type,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(6), 1,
      sym__block_length_unit,
    STATE(9), 1,
      aux_sym__block_projections_repeat1,
    STATE(62), 1,
      aux_sym__block_length_unit_repeat1,
    STATE(99), 1,
      sym__keyword_end,
    STATE(100), 1,
      sym__block_projections,
    STATE(126), 2,
      sym_orbital_random,
      sym_orbital_def,
  [38] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym__keyword_begin_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__newline,
    STATE(5), 1,
      sym__keyword_begin,
    STATE(4), 7,
      sym_pair,
      sym_atoms_frac,
      sym_unit_cell_cart,
      sym_kpoint_path,
      sym_kpoints,
      sym_projections,
      aux_sym_document_repeat1,
  [66] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(32), 1,
      aux_sym__keyword_begin_token1,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(5), 1,
      sym__keyword_begin,
    STATE(4), 7,
      sym_pair,
      sym_atoms_frac,
      sym_unit_cell_cart,
      sym_kpoint_path,
      sym_kpoints,
      sym_projections,
      aux_sym_document_repeat1,
  [94] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      aux_sym__keyword_atoms_frac_token1,
    ACTIONS(40), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    ACTIONS(42), 1,
      aux_sym__keyword_projections_token1,
    ACTIONS(44), 1,
      aux_sym__keyword_kpoint_path_token1,
    ACTIONS(46), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(127), 1,
      sym__keyword_kpoints,
    STATE(129), 1,
      sym__keyword_kpoint_path,
    STATE(132), 1,
      sym__keyword_projections,
    STATE(135), 1,
      sym__keyword_unit_cell_cart,
    STATE(137), 1,
      sym__keyword_atoms_frac,
  [128] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(19), 1,
      sym_coordinate_type,
    ACTIONS(48), 1,
      sym__newline,
    ACTIONS(50), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__block_projections_repeat1,
    STATE(64), 1,
      sym__keyword_end,
    STATE(72), 1,
      sym__block_projections,
    STATE(126), 2,
      sym_orbital_random,
      sym_orbital_def,
  [160] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym__newline,
    ACTIONS(56), 1,
      sym_number,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(18), 1,
      sym__block_length_unit,
    STATE(24), 1,
      aux_sym__block_matrix_repeat1,
    STATE(54), 1,
      aux_sym__block_length_unit_repeat1,
    STATE(86), 1,
      sym__block_matrix,
    STATE(112), 1,
      sym_vec3,
  [188] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym__newline,
    ACTIONS(63), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(65), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(68), 1,
      sym_coordinate_type,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym__block_projections_repeat1,
    STATE(126), 2,
      sym_orbital_random,
      sym_orbital_def,
  [214] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_orbital_random_token1,
    ACTIONS(19), 1,
      sym_coordinate_type,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym__newline,
    ACTIONS(76), 1,
      aux_sym__keyword_end_token1,
    STATE(8), 1,
      aux_sym__block_projections_repeat1,
    STATE(126), 2,
      sym_orbital_random,
      sym_orbital_def,
  [240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(82), 1,
      sym_range,
    STATE(122), 1,
      sym_boolean,
    ACTIONS(78), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(86), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(82), 1,
      sym__keyword_end,
    STATE(102), 1,
      sym__str_vec3,
  [281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 1,
      aux_sym__keyword_end_token1,
    STATE(11), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(83), 1,
      sym__keyword_end,
    STATE(102), 1,
      sym__str_vec3,
  [303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(96), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(75), 1,
      sym__keyword_end,
    STATE(97), 1,
      sym__str_vec3,
  [325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(104), 1,
      sym_number,
    STATE(16), 1,
      aux_sym_kpoints_repeat1,
    STATE(92), 1,
      sym_vec3,
    STATE(94), 1,
      sym__keyword_end,
  [347] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(108), 1,
      aux_sym__keyword_end_token1,
    STATE(13), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(97), 1,
      sym__str_vec3,
    STATE(98), 1,
      sym__keyword_end,
  [369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(110), 1,
      sym__newline,
    ACTIONS(112), 1,
      aux_sym__keyword_end_token1,
    STATE(21), 1,
      aux_sym_kpoints_repeat1,
    STATE(80), 1,
      sym__keyword_end,
    STATE(92), 1,
      sym_vec3,
  [391] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_kpoint_path_repeat1,
    STATE(97), 1,
      sym__str_vec3,
  [410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(122), 1,
      sym__newline,
    STATE(24), 1,
      aux_sym__block_matrix_repeat1,
    STATE(73), 1,
      sym__block_matrix,
    STATE(112), 1,
      sym_vec3,
  [429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym__newline,
    ACTIONS(63), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(129), 3,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
  [457] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(137), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(139), 1,
      sym_number,
    STATE(21), 1,
      aux_sym_kpoints_repeat1,
    STATE(92), 1,
      sym_vec3,
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 4,
      aux_sym__keyword_end_token1,
      aux_sym_orbital_random_token1,
      sym_coordinate_type,
      sym_identifier,
  [502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(152), 1,
      aux_sym__keyword_end_token1,
    STATE(25), 1,
      aux_sym__block_matrix_repeat1,
    STATE(112), 1,
      sym_vec3,
  [521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__newline,
    ACTIONS(157), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(159), 1,
      sym_number,
    STATE(25), 1,
      aux_sym__block_matrix_repeat1,
    STATE(112), 1,
      sym_vec3,
  [540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(165), 1,
      aux_sym__keyword_end_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_atoms_frac_repeat1,
    STATE(102), 1,
      sym__str_vec3,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(172), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(176), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__newline,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(181), 2,
      aux_sym__keyword_end_token1,
      sym_number,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(187), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(191), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(195), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(199), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(10), 2,
      sym__op_eq,
      sym__op_colon,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(205), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(209), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(213), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(217), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(221), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(225), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(229), 2,
      aux_sym__keyword_begin_token1,
      sym_identifier,
  [741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym__op_semicolon,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__newline,
    ACTIONS(165), 2,
      aux_sym__keyword_end_token1,
      sym_identifier,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(241), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__op_colon,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__newline,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym__op_semicolon,
  [809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      sym_number,
    STATE(105), 1,
      sym__op_comma,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym__op_semicolon,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_number,
    STATE(117), 1,
      sym__op_comma,
  [857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      sym__newline,
      anon_sym_COLON,
      sym_number,
  [866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__newline,
    ACTIONS(267), 2,
      aux_sym__keyword_end_token1,
      sym_identifier,
  [877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__newline,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(63), 1,
      aux_sym__block_length_unit_repeat1,
  [890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym__op_semicolon,
  [903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_number,
    STATE(110), 1,
      sym__op_comma,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      sym_number,
    STATE(134), 1,
      sym__op_comma,
  [938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      sym__newline,
      aux_sym__keyword_end_token1,
      sym_number,
  [947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      sym_number,
    STATE(136), 1,
      sym__op_comma,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      sym_number,
    STATE(139), 1,
      sym__op_comma,
  [973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__newline,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(63), 1,
      aux_sym__block_length_unit_repeat1,
  [986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym__newline,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(63), 1,
      aux_sym__block_length_unit_repeat1,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__keyword_projections_token1,
    STATE(104), 1,
      sym__keyword_projections,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(302), 1,
      sym_sph_ham,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    STATE(108), 1,
      sym__keyword_unit_cell_cart,
  [1029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_number,
    STATE(85), 1,
      sym_vec3,
  [1039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    STATE(91), 1,
      sym_vec3,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_sph_ham,
    STATE(93), 1,
      aux_sym_orbital_def_repeat1,
  [1059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_sph_ham,
    ACTIONS(310), 1,
      sym__newline,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__op_colon,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__keyword_end_token1,
    STATE(96), 1,
      sym__keyword_end,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym__keyword_end_token1,
    STATE(88), 1,
      sym__keyword_end,
  [1099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      sym__op_semicolon,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__keyword_kpoint_path_token1,
    STATE(103), 1,
      sym__keyword_kpoint_path,
  [1119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__newline,
    ACTIONS(322), 1,
      sym_number,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(302), 1,
      sym_sph_ham,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym__newline,
      sym_number,
  [1147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_sph_ham,
    STATE(84), 1,
      aux_sym_orbital_def_repeat1,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(119), 1,
      sym__keyword_kpoints,
  [1167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    STATE(85), 1,
      sym_vec3,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__keyword_atoms_frac_token1,
    STATE(111), 1,
      sym__keyword_atoms_frac,
  [1187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__keyword_atoms_frac_token1,
    STATE(116), 1,
      sym__keyword_atoms_frac,
  [1197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_sph_ham,
    STATE(84), 1,
      aux_sym_orbital_def_repeat1,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym__newline,
      sym_identifier,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym__keyword_end_token1,
    STATE(66), 1,
      sym__keyword_end,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(302), 1,
      sym_sph_ham,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym__keyword_unit_cell_cart_token1,
    STATE(106), 1,
      sym__keyword_unit_cell_cart,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_sph_ham,
    STATE(79), 1,
      aux_sym_orbital_def_repeat1,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym__newline,
      sym_number,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym__op_colon,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__newline,
    ACTIONS(347), 1,
      sym_number,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_sph_ham,
    STATE(84), 1,
      aux_sym_orbital_def_repeat1,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym__keyword_kpoints_token1,
    STATE(115), 1,
      sym__keyword_kpoints,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym__op_eq,
  [1313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym__keyword_projections_token1,
    STATE(113), 1,
      sym__keyword_projections,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(101), 1,
      sym__str_vec3,
  [1333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym__keyword_kpoint_path_token1,
    STATE(123), 1,
      sym__keyword_kpoint_path,
  [1343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__keyword_projections_token1,
    STATE(121), 1,
      sym__keyword_projections,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__keyword_end_token1,
    STATE(64), 1,
      sym__keyword_end,
  [1363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__newline,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__newline,
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
  [1384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__newline,
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_number,
  [1398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__newline,
  [1405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__newline,
  [1412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym__newline,
  [1419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__newline,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_number,
  [1433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__newline,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__newline,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__newline,
  [1454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__newline,
  [1461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__newline,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__newline,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_number,
  [1482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_number,
  [1489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym__newline,
  [1496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__newline,
  [1503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__newline,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__newline,
  [1517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__newline,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__newline,
  [1531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_sph_ham,
  [1538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__newline,
  [1545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__newline,
  [1552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
  [1559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__newline,
  [1566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_identifier,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
  [1580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__newline,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__newline,
  [1594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_number,
  [1601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__newline,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_number,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__newline,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_number,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 281,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 369,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 410,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 442,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 502,
  [SMALL_STATE(25)] = 521,
  [SMALL_STATE(26)] = 540,
  [SMALL_STATE(27)] = 559,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 583,
  [SMALL_STATE(30)] = 597,
  [SMALL_STATE(31)] = 609,
  [SMALL_STATE(32)] = 621,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 657,
  [SMALL_STATE(36)] = 669,
  [SMALL_STATE(37)] = 681,
  [SMALL_STATE(38)] = 693,
  [SMALL_STATE(39)] = 705,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 729,
  [SMALL_STATE(42)] = 741,
  [SMALL_STATE(43)] = 754,
  [SMALL_STATE(44)] = 765,
  [SMALL_STATE(45)] = 774,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 822,
  [SMALL_STATE(50)] = 835,
  [SMALL_STATE(51)] = 844,
  [SMALL_STATE(52)] = 857,
  [SMALL_STATE(53)] = 866,
  [SMALL_STATE(54)] = 877,
  [SMALL_STATE(55)] = 890,
  [SMALL_STATE(56)] = 903,
  [SMALL_STATE(57)] = 916,
  [SMALL_STATE(58)] = 925,
  [SMALL_STATE(59)] = 938,
  [SMALL_STATE(60)] = 947,
  [SMALL_STATE(61)] = 960,
  [SMALL_STATE(62)] = 973,
  [SMALL_STATE(63)] = 986,
  [SMALL_STATE(64)] = 999,
  [SMALL_STATE(65)] = 1009,
  [SMALL_STATE(66)] = 1019,
  [SMALL_STATE(67)] = 1029,
  [SMALL_STATE(68)] = 1039,
  [SMALL_STATE(69)] = 1049,
  [SMALL_STATE(70)] = 1059,
  [SMALL_STATE(71)] = 1069,
  [SMALL_STATE(72)] = 1079,
  [SMALL_STATE(73)] = 1089,
  [SMALL_STATE(74)] = 1099,
  [SMALL_STATE(75)] = 1109,
  [SMALL_STATE(76)] = 1119,
  [SMALL_STATE(77)] = 1129,
  [SMALL_STATE(78)] = 1139,
  [SMALL_STATE(79)] = 1147,
  [SMALL_STATE(80)] = 1157,
  [SMALL_STATE(81)] = 1167,
  [SMALL_STATE(82)] = 1177,
  [SMALL_STATE(83)] = 1187,
  [SMALL_STATE(84)] = 1197,
  [SMALL_STATE(85)] = 1207,
  [SMALL_STATE(86)] = 1215,
  [SMALL_STATE(87)] = 1225,
  [SMALL_STATE(88)] = 1235,
  [SMALL_STATE(89)] = 1245,
  [SMALL_STATE(90)] = 1255,
  [SMALL_STATE(91)] = 1263,
  [SMALL_STATE(92)] = 1273,
  [SMALL_STATE(93)] = 1283,
  [SMALL_STATE(94)] = 1293,
  [SMALL_STATE(95)] = 1303,
  [SMALL_STATE(96)] = 1313,
  [SMALL_STATE(97)] = 1323,
  [SMALL_STATE(98)] = 1333,
  [SMALL_STATE(99)] = 1343,
  [SMALL_STATE(100)] = 1353,
  [SMALL_STATE(101)] = 1363,
  [SMALL_STATE(102)] = 1370,
  [SMALL_STATE(103)] = 1377,
  [SMALL_STATE(104)] = 1384,
  [SMALL_STATE(105)] = 1391,
  [SMALL_STATE(106)] = 1398,
  [SMALL_STATE(107)] = 1405,
  [SMALL_STATE(108)] = 1412,
  [SMALL_STATE(109)] = 1419,
  [SMALL_STATE(110)] = 1426,
  [SMALL_STATE(111)] = 1433,
  [SMALL_STATE(112)] = 1440,
  [SMALL_STATE(113)] = 1447,
  [SMALL_STATE(114)] = 1454,
  [SMALL_STATE(115)] = 1461,
  [SMALL_STATE(116)] = 1468,
  [SMALL_STATE(117)] = 1475,
  [SMALL_STATE(118)] = 1482,
  [SMALL_STATE(119)] = 1489,
  [SMALL_STATE(120)] = 1496,
  [SMALL_STATE(121)] = 1503,
  [SMALL_STATE(122)] = 1510,
  [SMALL_STATE(123)] = 1517,
  [SMALL_STATE(124)] = 1524,
  [SMALL_STATE(125)] = 1531,
  [SMALL_STATE(126)] = 1538,
  [SMALL_STATE(127)] = 1545,
  [SMALL_STATE(128)] = 1552,
  [SMALL_STATE(129)] = 1559,
  [SMALL_STATE(130)] = 1566,
  [SMALL_STATE(131)] = 1573,
  [SMALL_STATE(132)] = 1580,
  [SMALL_STATE(133)] = 1587,
  [SMALL_STATE(134)] = 1594,
  [SMALL_STATE(135)] = 1601,
  [SMALL_STATE(136)] = 1608,
  [SMALL_STATE(137)] = 1615,
  [SMALL_STATE(138)] = 1622,
  [SMALL_STATE(139)] = 1629,
  [SMALL_STATE(140)] = 1636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(107),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(95),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 2), SHIFT_REPEAT(71),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_projections, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoint_path_repeat1, 2), SHIFT_REPEAT(17),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 2), SHIFT_REPEAT(67),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_projections_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_projections_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_projections_repeat1, 1),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_projections_repeat1, 1),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2), SHIFT_REPEAT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 2), SHIFT_REPEAT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_length_unit, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_length_unit, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_length_unit, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_length_unit, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_matrix, 1),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(51),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atoms_frac_repeat1, 2), SHIFT_REPEAT(26),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atoms_frac_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atoms_frac_repeat1, 2), SHIFT_REPEAT(81),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_cell_cart, 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_cell_cart, 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 1), REDUCE(aux_sym__block_matrix_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_matrix_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_length_unit_repeat1, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 7),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atoms_frac, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atoms_frac, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoints, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoints, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoint_path, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoint_path, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atoms_frac, 7),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atoms_frac, 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_projections, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_projections, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoint_path, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoint_path, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kpoints, 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kpoints, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_cell_cart, 8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_cell_cart, 8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atoms_frac_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoints_repeat1, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kpoint_path_repeat1, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_kpoint_path_repeat1, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 2), SHIFT_REPEAT(63),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_length_unit_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_orbital_def_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_def, 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_orbital_def_repeat1, 2), SHIFT_REPEAT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_vec3, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orbital_random, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
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
