#!/bin/bash

if [[ -z "$1" ]]; then
    echo "Usage: $0 <markdown_file>"
    exit 1
fi

file_name="$(basename "$1" .md)"

pandoc "$file_name.md" -o "$file_name.pdf" --pdf-engine=xelatex && firefox 2>/dev/null $file_name.pdf
