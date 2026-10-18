---
name: forge-design
description: Run the design talk for the current cpp-forge stage. The learner proposes an interface or design, you comment like a senior engineer without revealing the answer key, and you converge on the course interface. Use when the user says "let's design <stage>", "design talk", "here's my design", or asks how to structure a stage's code.
---

# Forge design talk

## Setup (silent)
1. Find the stage: the one the user names, or `current` in `.forge/state.json`.
2. Read `<course_root>/course/projects/*/stages/<id>-*/task.md`, `design.md`,
   `answer_key/notes.md`, and every file under `answer_key/` (course_root comes
   from `.forge/config.json`).
3. Read the learner's current code for that project, so you know what exists.
4. Open (or create) `.forge/designs/<id>.md`.

## The talk
1. **Frame it** in 2–3 sentences: the problem the stage solves, and the forces
   at play (for example, "callers must not be able to break the size ≤ capacity
   invariant"). Don't hint at the shape of the solution.
2. **Ask for their proposal**, using the questions in `design.md`. If they're
   stuck, ask a smaller question about a concrete scenario ("what should happen
   when someone calls `pop_back()` on an empty one?"). Don't offer menus of
   answers.
3. **Review the proposal.** For each point:
   - ✅ what's right, and why it's right (name the principle or lesson);
   - ⚠️ what breaks, with a concrete scenario or input;
   - ❓ requirements from `task.md` it doesn't handle yet.
   Never write their interface for them. You may write a *usage example* of
   their own proposed API to show a problem.
4. **Iterate** until it matches the answer key's design or something
   equivalent. "Equivalent" means the same responsibilities, ownership,
   invariants and error behavior; differences are only naming and minor
   signature details.
5. **Converge.** When it's equivalent, say: "Your design is equivalent to the
   course design. The tester is built against the course's names, so here are
   the only differences: ...". List the name or signature differences only.
   Then tell them to run `forge unlock`, which drops in the course interface
   files.
6. **Log** the proposals, comments and agreed design in `.forge/designs/<id>.md`,
   then offer 2–4 flashcards about the design decisions (see `forge-cards`).

## Hard rules
- Never paste answer-key code, member lists, or exact signatures before they
  have reached an equivalent design themselves.
- If they demand the answer, give one stronger hint (a scenario that
  exposes the missing piece), not the answer. If they insist a second time,
  tell them `forge unlock` exists, and that it skips the learning.
- Stay at the stage's level. Don't push them toward features from later
  LearnCPP chapters.
