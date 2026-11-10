# Vacuum crawler thesis workspace

Open `vacuum_thesis.code-workspace` in VS Code. All thesis content lives in `thesis/`; `thesis/main.tex` is the root document.

```text
vacuum_thesis/
  .vscode/                  Existing LaTeX Workshop build settings
  vacuum_thesis.code-workspace
  thesis/
    main.tex                Root document; controls chapter and front-matter order
    main.pdf                Compiled thesis preview
    metadata.tex            Author, title, degree, and year
    fiu_thesis.sty          Shared draft formatting
    chapters/               Chapter 1 through Chapter 6
    frontmatter/            Title-related pages, abstract, lists, abbreviations
    references/             BibTeX database, source register, saved source PDFs
    figures/                Images for figures; existing filenames preserved
    data/                   Experimental CSV templates
    notes/                  Source and template decisions
    template_examples/      Theo's and Benjamin's example theses
```

## Write and build

Edit the chapter files and save. The existing LaTeX Workshop MiKTeX texify recipe builds `thesis/main.tex` and updates `thesis/main.pdf`. Use LaTeX Workshop's Build command if an external edit has not triggered a rebuild. Changes to citations or page numbers can require BibTeX and multiple LaTeX passes. The compiler handles generated files; they are hidden in the VS Code Explorer to reduce clutter, not deleted. The PDF remains visible.

## Contents, figures, tables, and abbreviations

Set these up now and check them throughout writing. `frontmatter/lists.tex` generates the contents from chapter/section commands, and the figure/table lists from numbered captions. Do not type list entries or page numbers manually. Images saved in `figures/` do not appear in the list until inserted as captioned figures. Empty figure and table lists are expected until that happens.

Use `\caption{...}` followed by `\label{fig:...}` or `\label{tab:...}` inside the corresponding figure or table environment. Refer to them with `Figure~\ref{fig:...}` or `Table~\ref{tab:...}`. Do not hard-code numbers.

`frontmatter/abbreviations.tex` is an alphabetical list maintained as the thesis grows. Add abbreviations actually used, spell them out at first use in the text, and check for unused entries before submission. This page is a glossary, not a numbered research table, so it does not appear in the list of tables.

## References

Use [the source register](thesis/references/source_register.md) to track each source and why it is cited. Citation metadata lives only in `thesis/references/references.bib`. Add citations using `\citep{key}`; BibTeX handles numbering and bibliography entries. Downloaded PDFs may be stored beside the database. Keep example theses in `template_examples/`.

## Folder cleanup and draft status

The unused, empty top-level `chapters/` and `frontmatter/` duplicates were removed. The populated versions under `thesis/` are the active folders. Data CSVs are intentional templates for future measurements. Figures are source assets awaiting selection and insertion. Remaining drafting notes identify work still needed; they are not results.

The layout follows the supplied FIU thesis examples and is not an official FIU class. Confirm final graduate-school formatting, committee details, and submission requirements before filing.

## Internship report use

Keep the author's internship report as background for understanding the work only. Do not cite it in the thesis or include it in the bibliography. Write the thesis methods and contributions directly, distinguishing inherited designs and collaborators' work from the author's contributions. Use external sources for technical claims; do not attach a replacement citation unless it supports the specific claim.
