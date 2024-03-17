# Set up tree-sitter for `helix`

For details, see <https://docs.helix-editor.com/languages.html#tree-sitter-grammar-configuration>

## Shortcut

1. Add the following to `~/.config/helix/languages.toml`

    ```toml
    [[language]]
    name = "wannier90"
    scope = "source.wannier90"
    file-types = ["win"]
    roots = []

    [[grammar]]
    name = "wannier90"
    source = { git = "https://github.com/qiaojunfeng/tree-sitter-wannier90", rev = "main" }
    ```

2. Build & enable syntax highlighting

    ```shell
    hx --grammar fetch
    hx --grammar build

    mkdir -p ~/.config/helix/runtime/queries/wannier90
    cd ~/.config/helix/runtime/queries/wannier90
    ln -s ../../grammars/sources/wannier90/queries/highlights.scm
    ```

3. Test any `win` file with `hx example.win`
