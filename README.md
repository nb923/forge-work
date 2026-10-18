# forge-work

Learning C++ by building real projects, stage by stage, following
[LearnCPP](https://www.learncpp.com/).

- **`delve/`**: a terminal roguelike. It grows from a greeting into a seeded,
  three-level dungeon with monsters, items, and save/load.
- **`kv/`**: my own mini standard library (string, vector, unique_ptr, hash map),
  then a small Redis-compatible key-value server built on top of it.
- **`side/`**: shorter exercises: toolchain, debugging, testing, refactoring.

Every pull request is reviewed automatically by an AI senior engineer
(`.github/workflows/senior-review.yml`). It runs the stage tests and lints
against the C++ Core Guidelines, then approves or requests changes before
anything merges into `main`.
