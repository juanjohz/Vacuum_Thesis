# Workspace audit — November 14, 2026

## Outcome

The active thesis has one file for each of Chapters 1–7. `thesis/main.tex` is the sole build entry point. No files were deleted by this cleanup, and no technical thesis prose, experimental data, citations, or figure assets were changed.

## Changes made

| Area | Action |
| --- | --- |
| Duplicate chapter numbers | Moved inactive `05_results.tex` and `06_conclusions.tex` to `thesis/archive/legacy_chapters/`, verifying identical SHA-256 hashes before and after each move. |
| Obsolete source comments | Preserved the former Chapter 3 design outline in `thesis/archive/legacy_chapters/former_chapter3_outline.txt`; replaced the obsolete header comments with an archive pointer. Corrected Chapter 4's statement that Chapters 5–7 were all outlines. |
| Root document | Removed redundant blank lines; preserved the chapter order and existing filenames. |
| Workspace documentation | Updated README to the seven-chapter structure, explained archives and temporary material, and removed obsolete planned-image names from the figures guide. Updated the source map's current validation description. |
| Editor settings | Normalized both JSON settings files and aligned preview/search exclusions. Kept both build configurations so opening either the workspace root or `thesis/` directly continues to work. Preserved the nested folder's existing clean-method setting. |
| Git noise | Added narrowly scoped ignores for generated PNG previews and two temporary review checkouts. Existing tracked previews remain tracked. Source extracts and recovery drafts are not ignored. |
| Provenance | Added an archive inventory and recorded this cleanup in the source register. |

## Checks completed

- Followed the root document's active input graph: 14 TeX files, including all seven chapters; no missing inputs.
- Checked 127 active labels: no duplicate labels or unresolved cross-references. Existing compatibility labels such as `chap:methods`, `chap:results`, and `chap:design` are intentional and were retained.
- Checked 54 explicitly cited source keys against 65 bibliography entries: no missing or duplicate keys. Uncited entries were retained for research provenance.
- Resolved all 22 active image references, including `thesis/references/Rolls Royce Cleaner.png`, which is intentionally outside `figures/`.
- Compared SHA-256 hashes of files in `figures/`: no byte-identical duplicates. Unused images were retained because they can be source alternatives or future figures; visual similarity does not establish redundancy.
- Parsed both VS Code settings files and the workspace file successfully. The separate PlatformIO project path exists and was preserved.
- Confirmed the two experimental CSV templates remain in `thesis/data/`, and the Arduino pressure-test sketch remains in `vacuum_pressure_test/`.
- Rebuilt the full thesis successfully with MiKTeX texify: 101 pages; no undefined references/citations, multiply defined labels, or oversized floats.

## Preserved material and intentional duplication

- `thesis/archive/`: historical outlines, documented in its README; never included by `main.tex`.
- `tmp/recovery/`: prior recoverable chapter drafts, left in place.
- `tmp/pdfs/` and `thesis/tmp/pdfs/`: generated previews and extracted research text, left in place. Use root `tmp/pdfs/` for new previews. Older paths remain valid for the source-register history.
- `tmp/github-vacuum-review/` and `tmp/vacuum_crawler_ch5/`: temporary review checkouts, retained on disk but excluded from new Git additions and ordinary editor searches.
- `thesis/references/`, `thesis/template_examples/`, and `thesis/writing style/`: source documents, example theses, and writing samples, untouched.
- Root and thesis-folder VS Code settings: two supported folder-opening modes, not two thesis projects.
- `vacuum_thesis.code-workspace`: the external `Pressure_Sensor_test` PlatformIO folder remains connected. No external project files were edited.

## Remaining issues, not silently changed

1. Two small pre-existing Chapter 2 overfull-line warnings remain. They are typography issues, not broken structure.
2. The existing BibTeX log reports 31 empty-year warnings for undated sources. Dates require source verification; no dates were invented to silence warnings.
3. MiKTeX reports that updates have not been checked. The build succeeds; no toolchain update was performed during cleanup.
4. The previously requested `vacuum_cnc`, `vacuum_juan_assembly`, and `crawler_mobility_test` images were not present at the last Chapter 6 check. This audit did not replace missing evidence with unrelated assets.
5. Git already showed `thesis/figures/Vacuum_Juan_v1_manufactured1.png` as deleted before this cleanup. That pre-existing change was not made or reverted here; the active thesis uses `Vacuum_manufactured.png`. An older copy remains in the retained review checkout.
6. Current Chapters 5–7 and several supplied figures are still untracked in Git from the ongoing thesis work. Nothing was staged or committed. Preserve them with the other intended thesis changes when committing; ignoring generated previews does not ignore these source files.

To find historical material in VS Code Search, turn off **Use Exclude Settings and Ignore Files**. Explorer exclusions hide generated clutter; they do not delete it. Do not remove an unused asset or source document solely because it is absent from the current PDF.
