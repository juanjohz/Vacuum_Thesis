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
    chapters/               Seven active chapters, in main.tex order
    archive/                Preserved legacy outlines; excluded from the build
    frontmatter/            Title-related pages, abstract, lists, abbreviations
    references/             BibTeX database, source register, saved source PDFs
    figures/                Images for figures; existing filenames preserved
    data/                   Experimental CSV templates
    notes/                  Source and template decisions
    template_examples/      Theo's and Benjamin's example theses
  tmp/                      Rendered previews, source extracts, recovery drafts, review checkouts
  vacuum_pressure_test/     Arduino pressure-test sketch (separate from the thesis build)
```

## Write and build

`thesis/main.tex` is the sole thesis build entry point. The active chapter files are:

1. `01_introduction.tex`
2. `02_literature_review.tex`
3. `03_Vacuum_system_design.tex`
4. `04_Crawler_Design.tex`
5. `05_Control_System.tex`
6. `06_Experimental_Validation.tex`
7. `07_Conclusions.tex`

The former results and conclusions outlines are preserved in [the archive](thesis/archive/README.md). They are not alternative active chapters. Keep one active file per chapter number; update `main.tex` if a chapter filename changes.

Edit the chapter files and save. The existing LaTeX Workshop MiKTeX texify recipe builds `thesis/main.tex` and updates `thesis/main.pdf`. Use LaTeX Workshop's Build command if an external edit has not triggered a rebuild. Changes to citations or page numbers can require BibTeX and multiple LaTeX passes. The compiler handles generated files; they are hidden in the VS Code Explorer to reduce clutter, not deleted. The PDF remains visible.

## Contents, figures, tables, and abbreviations

Set these up now and check them throughout writing. `frontmatter/lists.tex` generates the contents from chapter/section commands, and the figure/table lists from numbered captions. Do not type list entries or page numbers manually. Images saved in `figures/` do not appear in the list until inserted as captioned figures. Empty figure and table lists are expected until that happens.

Use `\caption{...}` followed by `\label{fig:...}` or `\label{tab:...}` inside the corresponding figure or table environment. Refer to them with `Figure~\ref{fig:...}` or `Table~\ref{tab:...}`. Do not hard-code numbers.

`frontmatter/abbreviations.tex` is an alphabetical list maintained as the thesis grows. Add abbreviations actually used, spell them out at first use in the text, and check for unused entries before submission. This page is a glossary, not a numbered research table, so it does not appear in the list of tables.

## References

Use [the source register](thesis/references/source_register.md) to track each source and why it is cited. Citation metadata lives only in `thesis/references/references.bib`. Add citations using `\citep{key}`; BibTeX handles numbering and bibliography entries. Downloaded PDFs may be stored beside the database. Keep example theses in `template_examples/`.

## Folder cleanup and draft status

The populated folders under `thesis/` are active. Data CSVs are intentional templates for future measurements. Unused figures, source PDFs, writing samples, experiment code, and recovery drafts are retained; being absent from the current build is not a reason to delete them. Remaining drafting notes identify work still needed; they are not results.

Generated page previews and the two temporary review checkouts are ignored for new Git additions and hidden from the Explorer. Already tracked previews remain tracked and unchanged. `tmp/recovery/` and extracted source text are not ignored by Git. Temporary folders and `thesis/archive/` are excluded from ordinary editor searches; turn off **Use Exclude Settings and Ignore Files** in VS Code Search when looking for historical material. Hidden files still exist on disk.

The root `.vscode/settings.json` supports this workspace; `thesis/.vscode/settings.json` retains equivalent build settings for opening `thesis/` directly. This duplication is intentional. The workspace's separate `Pressure_Sensor_test` folder points to the existing PlatformIO project outside this repository and is preserved.

See [the workspace audit](thesis/notes/workspace_audit.md) for checks, preserved material, and remaining issues. Store new page-render checks in root `tmp/pdfs/`; `thesis/tmp/pdfs/` is retained as a historical location.

The layout follows the supplied FIU thesis examples and is not an official FIU class. Confirm final graduate-school formatting, committee details, and submission requirements before filing.

## Internship report use

Keep the author's internship report as background for understanding the work only. Do not cite it in the thesis or include it in the bibliography. Write the thesis methods and contributions directly, distinguishing inherited designs and collaborators' work from the author's contributions. Use external sources for technical claims; do not attach a replacement citation unless it supports the specific claim.
