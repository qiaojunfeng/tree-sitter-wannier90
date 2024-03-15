module.exports = grammar({
  name: "wannier90",

  extras: ($) => [
    $.comment, // inline comment
    /[ \t]/, // whitespace without newline, exclude newline
  ],

  conflicts: ($) => [
    [$._block_length_unit, $._block_matrix],
    [$._block_length_unit, $._block_projections],
  ],

  rules: {
    document: ($) =>
      repeat(
        choice(
          // key-value pairs
          $.pair,
          // blocks
          $.atoms_frac,
          $.unit_cell_cart,
          $.kpoint_path,
          $.kpoints,
          $.projections,
          // empty line or single-line comment
          $._newline
        )
      ),

    _newline: ($) => /\n/,
    comment: ($) => /[!#].*/,

    // Note it is necessary to keep these types ordered:
    // from https://tree-sitter.github.io/tree-sitter/creating-parsers#conflicting-tokens
    // "Tree-sitter will prefer the token that appears earlier in the grammar."
    // Most importantly, put `identifier` to the last to decrease its precedence,
    // otherwise `identifier` often matches lots of other symbols.
    _keyword_begin: ($) => alias(ignoreCase("begin"), "keyword"),
    _keyword_end: ($) => alias(ignoreCase("end"), "keyword"),
    // I still keep block names as identifier, to have the same color as key-value pairs
    _keyword_atoms_frac: $ => alias(ignoreCase("atoms_frac"), "identifier"),
    _keyword_unit_cell_cart: $ => alias(ignoreCase("unit_cell_cart"), "identifier"),
    _keyword_projections: $ => alias(ignoreCase("projections"), "identifier"),
    orbital_random: ($) => alias(ignoreCase("random"), "keyword"),
    _keyword_kpoint_path: $=> alias(ignoreCase("kpoint_path"), "identifier"),
    _keyword_kpoints: $=> alias(ignoreCase("kpoints"), "identifier"),
    _op_comma: ($) => alias(",", ","),
    _op_dot: ($) => alias(".", "."),
    _op_eq: ($) => alias("=", "="),
    _op_colon: ($) => alias(":", ":"),
    _op_semicolon: ($) => alias(";", ";"),
    boolean: ($) =>
      choice(
        ignoreCase(".true."),
        ignoreCase("true"),
        ignoreCase(".false."),
        ignoreCase("false")
      ),
    number: ($) => /[\+\-]?\d+(\.(\d+)?)?([dDeE][\+\-]?\d+)?/,
    range: ($) => /[\d\-,]+/,
    coordinate_type: ($) => /[fFcC]/, // in projections block: fractional or cartesian
    sph_ham: ($) => /[spdfxyz\d\-]+/,
    // identifier: ($) => /[a-zA-Z][0-9a-zA-Z_]*/,
    identifier: ($) => /[\p{L}\w][\p{L}\w]*/, // allow unicode

    pair: ($) =>
      seq(
        $.identifier,
        choice($._op_eq, $._op_colon),
        choice($.number, seq($.number, $.number, $.number), $.boolean, $.range),
        $._newline
      ),

    vec3: ($) =>
      seq($.number, optional($._op_comma), $.number, optional($._op_comma), $.number),
    _str_vec3: ($) => seq($.identifier, $.vec3),

    atoms_frac: ($) =>
      seq(
        seq($._keyword_begin, $._keyword_atoms_frac, $._newline),
        repeat(
          choice(
            seq($._str_vec3, $._newline),
            $._newline // empty or comment line
          )
        ),
        seq($._keyword_end, $._keyword_atoms_frac, $._newline)
      ),

    _block_length_unit: ($) =>
      seq(
        repeat($._newline), // empty or comment line
        seq($.identifier, $._newline) // length unit
      ),
    _block_matrix: ($) =>
      seq(
        // at least one line
        // note this will consume all the remaining empty lines
        repeat1(
          choice(
            seq($.vec3, $._newline),
            $._newline // empty or comment line
          )
        )
      ),

    unit_cell_cart: ($) =>
      seq(
        seq($._keyword_begin, $._keyword_unit_cell_cart, $._newline),
        prec(2, optional($._block_length_unit)),
        prec(1, $._block_matrix),
        seq($._keyword_end, $._keyword_unit_cell_cart, $._newline)
      ),

    kpoint_path: ($) =>
      seq(
        seq($._keyword_begin, $._keyword_kpoint_path, $._newline),
        repeat(
          choice(
            seq($._str_vec3, $._str_vec3, $._newline),
            $._newline // empty line
          )
        ),
        seq($._keyword_end, $._keyword_kpoint_path, $._newline)
      ),

    kpoints: ($) =>
      seq(
        seq($._keyword_begin, $._keyword_kpoints, $._newline),
        repeat(
          choice(
            seq($.vec3, optional($.number), $._newline),
            $._newline // empty line
          )
        ),
        seq($._keyword_end, $._keyword_kpoints, $._newline)
      ),

    orbital_def: ($) =>
      seq(
        choice(
          seq($.coordinate_type, $._op_eq, $.vec3), // fractional or cartesian coordinates
          $.identifier // atom label
        ),
        $._op_colon,
        repeat(seq($.sph_ham, $._op_semicolon)),
        $.sph_ham,
        optional($._op_semicolon)
      ),
    _block_projections: ($) =>
      seq(
        // at least one line
        // note this will consume all the remaining empty lines
        repeat1(
          choice(
            seq($.orbital_random, $._newline),
            seq($.orbital_def, $._newline),
            $._newline // empty line
          )
        )
      ),
    projections: ($) =>
      seq(
        seq($._keyword_begin, $._keyword_projections, $._newline),
        prec(2, optional($._block_length_unit)),
        prec(1, optional($._block_projections)),
        seq($._keyword_end, $._keyword_projections, $._newline)
      ),
  },
});

function ignoreCase(word) {
  return new RegExp(caseInsensitive(word));
}

function caseInsensitive(word) {
  return word
    .split("")
    .map((letter) => {
      if (letter.toLowerCase() === letter.toUpperCase()) {
        return `[${letter}]`;
      }
      return `[${letter.toLowerCase()}${letter.toUpperCase()}]`;
    })
    .join("");
}
