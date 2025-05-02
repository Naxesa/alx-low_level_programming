# 🌀 Welcome to Chaos.c – Where Variables Roam Free

> “Sometimes I code not because I should... but because I *must*.”

## What even *is* this?

This is **not** your typical README. This is a cry for help (or perhaps a celebration of C). Inside this directory lies a chaotic collection of files that somehow compile and do stuff — mostly with variables, randomness, letters, and the occasional loop-de-loop.

## 🔍 What you’ll find here:

- Code that judges numbers for being too positive or not.
- A last digit obsession. Like seriously, what's with the last digit?
- An alphabet soup, carefully filtered to exclude 'q' and 'e' because... reasons.
- Numbers from 0 to 9, just chilling.
- Hexadecimal dreams and `putchar` nightmares.
- Combinations of digits that tried to be unique — and mostly succeeded.

## 🛠 Tools of the madness

- **Compiler**: The almighty `gcc` with a splash of warnings because we like to live dangerously.
- **Rules**:
  - Use `putchar` only.
  - No fancy loops. Actually, loops are fine, but only if they suffer with you.
  - No `char` variables, because why make life easy?
  - Must output exactly what is expected — down to the last comma and space. No mercy.

## 🧠 Developer sanity status

- [x] Has stared at a `while` loop for 30 minutes.
- [x] Forgot semicolons more times than they’d admit.
- [x] Tried to use `printf` and got rejected.
- [x] Wondered if C stands for "Crying".

## ⚠️ Caution

Running these files may result in:
- Increased respect for `putchar`.
- A deep appreciation for `printf`.
- Muscle memory for writing `gcc -Wall -Werror -Wextra -pedantic`.

---

This is not the README you’re looking for... but maybe it’s the README you deserve.

# 0x01. C - Variables, if, else, while

This directory contains C programs focused on mastering the use of variables, conditional statements (`if`, `else`), and loops (`while`). Each program adheres strictly to ALX's C coding style and function usage restrictions.

## Requirements

* All programs compiled using:

  ```bash
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89
  ```
* No use of standard library functions like `printf`, `puts`, etc.

  * Only `putchar` is allowed in most cases
* All code should be within the `main` function
* Programs must output exactly as specified in the task description

## Tasks

### 0. Positive anything is better than negative nothing

**File:** `0-positive_or_negative.c`

* Generates a random number and prints whether it is positive, negative, or zero.

### 1. The last digit

**File:** `1-last_digit.c`

* Prints the last digit of a randomly generated number and classifies it based on its value.

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

**File:** `2-print_alphabet.c`

* Prints the alphabet in lowercase using only `putchar`, twice.

### 3. alphABET

**File:** `3-print_alphabets.c`

* Prints the alphabet in lowercase, then uppercase using only `putchar`, three times.

### 4. When I was having that alphabet soup, I never thought that it would pay off

**File:** `4-print_alphabt.c`

* Prints the alphabet in lowercase, excluding `e` and `q`, using only `putchar` twice.

### 5. Numbers

**File:** `5-print_numbers.c`

* Prints all base 10 digits from `0` to `9`.

### 6. Numberz

**File:** `6-print_numberz.c`

* Prints all base 10 digits using only `putchar` (twice) and no `char` variables.

### 7. Smile in the mirror

**File:** `7-print_tebahpla.c`

* Prints the lowercase alphabet in reverse using `putchar`.

### 8. Hexadecimal

**File:** `8-print_base16.c`

* Prints all hexadecimal digits (`0-9`, `a-f`) in lowercase using `putchar`.

### 9. Patience, persistence and perspiration make an unbeatable combination for success

**File:** `9-print_comb.c`

* Prints all possible combinations of single-digit numbers (comma-separated), using only `putchar` (max 4 times) and no `char` variables.

### 10. Inventing is a combination of brains and materials...

**File:** `100-print_comb3.c`

* Prints all unique combinations of two different digits in ascending order using only `putchar` (max 5 times) and no `char` variables.

## Repository

**GitHub:** `alx-low_level_programming`
**Directory:** `0x01-variables_if_else_while`


# 0x01. C - Variables, if, else, while

## Project Overview

This project introduces basic programming concepts in C, focusing on variables, conditional statements (`if`, `if...else`), and loops (`while`). It also covers the use of arithmetic, relational, and logical operators.

## Resources

- Everything you need to know to start with C.pdf
- Keywords and identifiers
- Integers and arithmetic operators
- If and if...else statements
- Relational and logical operators
- While loops
- ASCII character set

> Note: You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, or functions yet.

## Learning Objectives

At the end of this project, you should be able to explain:

- What are the arithmetic operators and how to use them
- What are the logical operators (boolean operators) and how to use them
- What are the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- How to use `if`, `if...else` statements
- How to use comments
- How to declare variables of type `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print variables using `printf`
- How to use the `while` loop
- How to use variables within a `while` loop
- What is the ASCII character set
- Purpose of the `gcc` flags `-m32` and `-m64`

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A `README.md` file must be present at the root of the project folder
- Code must compile without errors or warnings
- No use of the `system` function
- Code must follow the Betty coding style (checked using `betty-style.pl` and `betty-doc.pl`)

## Copyright

You must complete the tasks yourself to meet the learning objectives.  
