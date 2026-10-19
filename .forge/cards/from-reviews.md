# Cards suggested by the senior reviewer

## review.s00.1
Q: What does `g++ -E` produce, and what is the file extension it's usually saved with?
A: The preprocessed translation unit: all #includes and macros expanded, no compiling yet. Usually saved as `.ii` for C++. It's a build artifact and should not be committed.

## review.s00.2
Q: Which C++ macro gives the language standard version as a number at compile time?
A: `__cplusplus`. With -std=c++20 it expands to 202002L. Use it instead of typing the number in.

## review.s00.3
Q: Which build phase reports "undefined reference to ..."?
A: The linker. The compiler saw a declaration, but no object file or library provides the definition.
