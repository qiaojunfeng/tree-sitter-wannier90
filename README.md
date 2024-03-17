# tree-sitter-wannier90

[wannier90](https://github.com/wannier-developers/wannier90) grammar for tree-sitter.

## Usage

- For `neovim`, see <https://github.com/nvim-treesitter/nvim-treesitter>
- For `helix`, see <https://docs.helix-editor.com/languages.html#tree-sitter-grammar-configuration>
- Test it in CLI

    ```shell
    # Highlight file
    tree-sitter highlight example.win
    ```

## Development

```shell
# Install dev dependencies
npm build

# Generate parser & language bindings
tree-sitter generate

# Test grammar
tree-sitter test
```

## Reference

- <https://tree-sitter.github.io/tree-sitter/creating-parsers>
- <https://github.com/ikatyang/tree-sitter-toml>
- <https://github.com/stadelmanma/tree-sitter-fortran>
- <https://github.com/wannier-developers/wannier90>
