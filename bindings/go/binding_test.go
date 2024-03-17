package tree_sitter_wannier90_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-wannier90"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wannier90.Language())
	if language == nil {
		t.Errorf("Error loading Wannier90 grammar")
	}
}
