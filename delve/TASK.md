[d01] First words: variables, input and output  (Delve, work in ./delve)

# d01 ┬╖ First words: variables, input and output

In this stage, Delve gets its first command: `delve greet`. It welcomes the player, asks two
questions and answers with a little arithmetic.

## Requirements

**R1.** `delve greet` prints these two lines first, before reading anything:
```
Welcome to Delve!
What is your name, adventurer?
```

**R2.** It then reads the adventurer's name: one word, made of letters.

**R3.** It prints `How many winters have you seen?` on its own line, then reads the age: a whole number (0 or more).

**R4.** It then prints exactly three lines, where `<name>` is the name read in R2 and `<age>` the age read in R3:
```
Well met, <name>!
In ten winters you will be <age + 10>.
That is <age ├ù 12> moons so far.
```

**R5.** Input may arrive on one line (`Corvin 77`) as well as on two. Both must work.

**R6.** After R4, `delve greet` exits with code 0. Any other command must still print its error and
exit with code 1, as the starter already does.

**R7.** Every line of output ends with a newline, including the last one. Match the text exactly:
spelling, punctuation and spaces.

**R8.** Your code reads input with `std::cin >>` and has at least one comment that explains *why*,
not *what* (LearnCPP 1.2).

## Example

With `Ayla` and `21` typed as input:
```
$ delve greet
Welcome to Delve!
What is your name, adventurer?
How many winters have you seen?
Well met, Ayla!
In ten winters you will be 31.
That is 252 moons so far.
```

## Starter code

`delve/src/main.cpp` already reads the command word from the command line and handles unknown commands.
The comment `// Stage d01` marks where your command goes. Commands are written as a branch, in the form
the starter's header comment shows. `if` itself is taught in chapter 4 (4.10) and the command line in
20.4, so treat that branch as given boilerplate for now. Everything inside it is yours.

## How it's tested

- `delve greet` runs with several names and ages, including both on one line, and stdout must match exactly.
- `delve dance` (an unknown command) must exit with code 1.
- A check looks for `std::cin >>` and for at least one comment in your code.

## Notes

- A name is text, so it needs a text type: `std::string`, from `#include <string>`. It's covered properly in 5.7;
  for now you only need to know that it holds text and works with `std::cin >>` and `std::cout <<`.
- The lesson for this stage (`forge learn`) teaches everything these requirements need. It doesn't
  show you the code for them. That's the stage.


LearnCPP lessons for this stage
    1.1  [build]  Statements and the structure of a program
         https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/
    1.2  [build]  Comments
         https://www.learncpp.com/cpp-tutorial/comments/
    1.3  [build]  Introduction to objects and variables
         https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/
    1.4  [build]  Variable assignment and initialization
         https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
    1.5  [build]  Introduction to iostream: cout, cin, and endl
         https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
    1.6  [build]  Uninitialized variables and undefined behavior
         https://www.learncpp.com/cpp-tutorial/uninitialized-variables-and-undefined-behavior/
    1.7  [build]  Keywords and naming identifiers
         https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/
    1.8  [read]  Whitespace and basic formatting
         https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/
    1.9  [build]  Introduction to literals and operators
         https://www.learncpp.com/cpp-tutorial/introduction-to-literals-and-operators/
   1.10  [build]  Introduction to expressions
         https://www.learncpp.com/cpp-tutorial/introduction-to-expressions/
   1.11  [build]  Developing your first program
         https://www.learncpp.com/cpp-tutorial/developing-your-first-program/
    1.x  [build]  Chapter 1 summary and quiz
         https://www.learncpp.com/cpp-tutorial/chapter-1-summary-and-quiz/
Course lesson (own words, built around this stage): `forge learn`
