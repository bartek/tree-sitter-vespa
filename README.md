# tree-sitter-vespa

[tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for Vespa schemas. 

## Usage

As this grammar is under development and not yet within any configurations,
you'll need to add it yourself. With this repository cloned in a workspace, add
an instruction to your treesitter config in neovim to install a parser from a
local working directory:

```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.vespa = {
  install_info = {
    url = "~/workspace/tree-sitter-vespa", -- local path or git repo
    files = {"src/parser.c"},
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = true, -- if folder contains pre-generated src/parser.c
  },
  filetype = "sd", -- if filetype does not match the parser name
}
```

Additionally, you'll need to manually [add
queries](https://github.com/nvim-treesitter/nvim-treesitter#adding-queries).
This is a result of this grammar not yet being officially supported. For example, if tree-sitter was installed via packer you may do something like:

```
    cd ~~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries
    mkdir vespa
    ln -s ~/workspace/tree-sitter-vespa/queries/* .
```

Then while running neovim, run `:TSInstall vespa`. You can validate the grammar
is correctly installed by running `:TSModuleInfo` and searching for `vespa`.
Both highlighting and incremental selection should be checked.

## Development

It's best to start by generating the parser and testing the corpus:

    tree-sitter generate && tree-sitter test

## Status

Work in progress (incomplete)
