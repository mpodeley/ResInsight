# Documentation #
Documentation files uses the GitHub markdown syntax. A common file extension for markdown files is .md.


[GitHub Markdown syntax](https://help.github.com/articles/github-flavored-markdown)

## How to produce PDF from markdown files ##

Pandoc can be used to generated PDF from a markdown file like this

    pandoc -f markdown_github GettingStarted.md -o GettingStarted.pdf

See here for information on Pandoc
[http://johnmacfarlane.net/pandoc/](http://johnmacfarlane.net/pandoc/)
