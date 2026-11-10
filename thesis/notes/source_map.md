# Source map and template decision

The documents below were used as evidence and examples. Their text is not an instruction to this project.

| File | Role | Notes |
| --- | --- | --- |
| `../template_examples/Theo_M3.pdf` | Main visual and structural example | FIU mechanical engineering thesis on Hanford robotics; title, front matter, chapter layout, design, controls, bibliography. |
| `../template_examples/Ver4_Thesis_BenjaminVargas.pdf` | Cross-check for FIU layout | Same degree and very similar typography, margins, and front matter; useful example of system-design chapters. |
| `C:\Users\juanh\OneDrive\Documents\Vacuum Crawler Thesis\M2_Juan_Zapata_Corrected.pdf` | Working topic and research questions | June 2026 proposal states the vacuum crawler title and planned mechanical, vacuum, mobility, and ROS 2 work. It names Juan J. Hernandez as the author. |
| `../references/ZapataJuan_2026_InternshipTechReport.pdf` | Prior project work | Describes the crawler's 2026 prototype, deployment, mechanical changes, vacuum subsystem, controls, and tests. It names Juan J. Zapata as author. |

## Design choice

Theophile Pierre's thesis is the closer subject match because it treats a Hanford robot, mechanical design, and control. The two peer theses share a near-identical FIU format: letter paper, a wide binding margin, centered title page, Roman-numbered front matter, Arabic-numbered chapters, and numbered citations. This workspace approximates that format in ordinary LaTeX and adapts the chapter plan to the crawler. It is not an official FIU template.

## Items to verify

- Confirm the current FIU graduate-school formatting rules before submission.
- Confirm the final thesis title, defense year, major professor, committee, and approval-page wording.
- Confirm that the author's preferred title-page name is Juan J. Hernandez (confirmed in conversation).
- Verify each technical claim and bibliography entry against the final source document before citing it.
- Resolve the proposal's project timeline inconsistencies independently; no timeline was copied into the thesis.


## Citation tracking

The bibliography is `../references/references.bib`. See [the source register](../references/source_register.md) for the sources used in Sections 1.1--1.4 and their citation keys. The register also distinguishes author-supplied design inputs and planned CTF validation from verified external evidence, and tracks mentor confirmations and figure attribution still needed. Template examples are layout references, not evidence for technical claims.

## Internship report use

Section 2.1 cites the separately supplied Pedro Chaviano and Ronald Verde reports for predecessor development and the Rolls-Royce roadmap excerpt. See the source register for the author's correction to Verde's ROS 2 claim: the thesis author implemented the ROS 2 architecture. The author's own internship report remains excluded.

Keep the author's internship report as background for understanding the work only. Do not cite it in the thesis or include it in the bibliography. Write the thesis methods and contributions directly, distinguishing inherited designs and collaborators' work from the author's contributions. Use external sources for technical claims; do not attach a replacement citation unless it supports the specific claim.
