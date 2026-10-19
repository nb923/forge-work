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

## review.s00.4
Q: What value does `unsigned int lives = -1;` hold?
A: 4294967295 (UINT_MAX on a 32-bit unsigned int). Converting a negative value to an unsigned type wraps modulo 2^32.

## review.s00.5
Q: What does -Werror do?
A: It turns every warning into an error, so the build fails until the warning is fixed. Warnings cannot be ignored or pile up.

## review.s00.6
Q: What kind of error is 'undefined reference to f'?
A: A linker error. The declaration was seen, but no definition was found when the object files and libraries were linked.

## review.s00.7
Q: What is the value of __cplusplus under -std=c++20?
A: 202002 (a long constant, 202002L). It is predefined by the compiler, so print it rather than typing the number.
