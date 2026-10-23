# Git and GitHub Practical Report.MD

**Project/Repository:** `team-toolkit-team-2`  
**Team:** `Team-2`  
**Member:** `Md. Sadiq Musfiq`
**ID:** `243014093`


## Task A — View a commit diff in History

Viewd a commit diff in github desktop history

**Screenshots:** [History](https://drive.google.com/file/d/1Zxbw-BrDEBQaLSsGMv5-8YvwXPKrJ9fl/view?usp=sharing)

---

---

## Task B — Revert a Deliberate Bug Through a PR

Introduced the assigned temporary bug on `[bug branch]`, committed it using `test: introduce temporary bug for revert practice`, and merged the reviewed PR linked to the assigned bug issue. Then updated `main`, created `[revert branch]`, and used GitHub Desktop History → **Revert Changes in Commit** to create a new commit undoing the bug. Opened a reviewed revert PR linked to the assigned revert issue, merged it, and ran the full build again to verify the correct code was restored.

**Screenshots:**[Revert PR/commit](https://drive.google.com/file/d/1-JxN5xQtbJP1OILzrdxATeBZR9A1zo9a/view?usp=sharing)

---

## Task C — Stash, Switch Branches, and Restore


Created `practice/stash-[name]` from the latest `main`, added a temporary line to `README.md`, and used **Stash All Changes** in GitHub Desktop. After switching to `main` and back, restored the stash and confirmed the edit returned as an uncommitted change. Captured the screenshot, then removed the temporary line. The scratch branch was not merged.

**Screenshot:** [Restored stash](https://drive.google.com/file/d/1jqJqD6kXTnIvh08j1mvM_3hWjIo3g9WB/view?usp=sharing)

---

## Task D — Amend an Unpushed Commit


Created `practice/amend-[name]` from the latest `main`, added `practice-notes.md`, and committed it locally as `docs: add amend practice note`. Without publishing the branch, used History → **Amend commit** to change the summary to `docs: amend practice note summary`. Verified the amended summary in History. The branch was not pushed.

**Screenshot:** [Amended local commit](https://drive.google.com/file/d/1Wuh9CxRcoq10j9Fxgz_W-Jlp7uqmlZYe/view?usp=sharing)

---

## Task E — Use Blame on GitHub.com


Opened a committed repository file on GitHub.com and selected **Blame** (or **View blame** from the three-dot menu). Checked the line-by-line commit and author attribution.

**Screenshot:** [GitHub Blame view](https://drive.google.com/file/d/1kyWQmXUUYHvocToMbeM2ZIyu9HTo0ri_/view?usp=sharing)

---

## Task F — Show the Branch Graph


Opened the repository on GitHub.com, navigated to **Insights → Network**, waited for the graph to load, and zoomed out if needed. Captured the visible branch and merge history.

**Screenshot:** [GitHub Network graph](https://drive.google.com/file/d/1qzgwEc4072ngiztantXEHeCO2BnNw4Q1/view?usp=sharing)

---

## Resolve the `contacts.md` Merge Conflict

**Member resolving the conflict:** Sadiq

Ashiq updated `schedule.md` on `feature/ashiq-profile`, changing the milestone status to `Active Milestone Status: Planning Phase`. His PR was approved by Sami and merged into `main`.

I then updated the same lines on `feature/sadiq-profile` without pulling the latest `main`, changing the status to `Active Milestone Status: Development and design phase`. When I selected **Branch → Update from main** in GitHub Desktop, Git produced a merge conflict. I opened `schedule.md` in VS Code and captured the conflict markers.

I resolved the conflict by combining the changes into `Active Milestone Status: Development and design phase`, saved the file, and continued the merge. I published the branch, opened a PR, received Ashiq's approval and Sami Eusuf merged it into `main`.

**Screenshots:** [Conflict markers in github pr](https://drive.google.com/file/d/1Ui2fsM-qqjdMqtZlEH9VpKa6_xRXbNtN/view?usp=sharing) · [Resolve `contacts.md`](https://drive.google.com/file/d/1MVeOrB-ioAMc6CTo_a151my5lGNG5SrS/view?usp=sharing) · [Conflict-resolution PR](https://drive.google.com/file/d/1PwWvrCETfg6-dkyMXIfefQ-je2TLFz_Z/view?usp=sharing)

---

