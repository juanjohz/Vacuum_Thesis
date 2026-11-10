Put approved thesis figures here. Planned names from the workspace outline are `crawler.png`, `wheel_design.png`, and `vacuum_system.png`. Add the real images when they are selected; no blank or fabricated figure files are included.

Keep editable source files for diagrams when available. Every figure in the thesis needs a caption, source or attribution where applicable, and an in-text reference.

## Copy-and-paste figure template

1. Save the image in this folder, for example `crawler.png`.
2. Paste this block in the chapter where you discuss it. Replace the filename, caption, and label.

```latex
\begin{figure}[htbp]
  \centering
  \thesisimage{crawler.png}
  \caption{Crawler prototype. Add the image source here if needed.}
  \label{fig:crawler}
\end{figure}
```

Refer to it in the text with `Figure~\ref{fig:crawler}`. The label must be unique for each figure. LaTeX may move the figure to a nearby spot to fit the page. The project already loads `graphicx` and searches this folder for images, so chapters do not need another `\usepackage` line or a `figures/` prefix in `\includegraphics`.

The shared `\thesisimage` command in `fiu_thesis.sty` displays figures at 70% of the text width, preserving their original proportions. Heights therefore depend on the source image; do not force both dimensions or stretch photographs. Figure captions use the same small, single-spaced style and 8 pt separation. Optional crop settings can be passed as `\thesisimage[trim=...,clip]{image.png}`. Use PNG, JPEG, or PDF with pdfLaTeX; `RoombaCombo_j9.png` is a full-resolution format conversion of the supplied WebP, which is retained as the original.
