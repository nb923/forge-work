---
name: forge-cards
description: Turn what the learner just built, designed, or got wrong into atomic Anki flashcards in .forge/cards/personal.md, then optionally sync them to Anki. Use after a design talk, after a review, or when the user says "make cards", "add this to Anki", or "I don't want to forget this".
---

# Forge cards

1. Pick 2–5 facts that are worth remembering for years: interview-trivia-grade
   rules ("why a virtual destructor?"), decisions from the design talk ("why does
   `Vector::reserve` use move_if_noexcept?"), and mistakes they actually made.
2. Each card is **atomic**: one fact; the question answerable in under 10
   seconds; the answer at most 3 lines (a short code snippet in ``` is fine).
3. Append to `.forge/cards/personal.md` in this exact format, with unique ids:

   ```
   ## me.<stage-or-topic>.<short-slug>
   Q: question
   A: answer
   Tags: optional space separated tags
   ```
4. Show the cards and ask if they want to change any of them.
5. Then: `forge cards export` writes `anki/forge-cards.txt` (Anki → File →
   Import). `forge cards sync` pushes straight into Anki if it's open with
   AnkiConnect installed. Re-running either updates cards instead of
   duplicating them.
