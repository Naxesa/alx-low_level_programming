# x02. C - Functions, Nested Loops

## Questions

### General
- What are nested loops and how to use them?
- What is a function and how do you use functions?
- What is the difference between a declaration and a definition of a function?
- What is a prototype?
- What is the scope of variables?
- What are the GCC flags `-Wall -Werror -pedantic -Wextra -std=gnu89`?
- What are header files and how to use them with `#include`?

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`.
- All files must be compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files must end with a **new line**.
- A `README.md` file at the project root is **mandatory**.
- Code must follow the **Betty style** (checked with `betty-style.pl` and `betty-doc.pl`).
- No **global variables** allowed.
- Maximum of **5 functions per file**.
- Standard library functions like `printf`, `puts`, etc., are **forbidden**.  
  (Only `_putchar` is allowed).
- You don’t need to push `_putchar.c`—it will be provided during compilation.
- Prototypes of all functions (including `_putchar`) must be in the header file `main.h`.
- Header files must be **included** using `#include "main.h"`.

### Copyright & Plagiarism
- Solutions must be **original**—no copying/pasting from others.
- Publishing project content (e.g., on GitHub) is **not allowed**.
- Any plagiarism results in removal from the program.


# 0x02. C - Functions, Nested Loops

## Mandatory Tasks

### 0. _putchar
**File:** `0-putchar.c`  
- Write a program that prints `_putchar`, followed by a new line.
- Returns: `0` (Success)

### 1. print_alphabet
**File:** `1-alphabet.c`  
**Prototype:** `void print_alphabet(void);`  
- Prints the lowercase alphabet using only 2 `_putchar` calls.

### 2. print_alphabet_x10
**File:** `2-print_alphabet_x10.c`  
**Prototype:** `void print_alphabet_x10(void);`  
- Prints the alphabet 10 times (2 `_putchar` max).

### 3. _islower
**File:** `3-islower.c`  
**Prototype:** `int _islower(int c);`  
- Returns `1` if `c` is lowercase, `0` otherwise.

### 4. _isalpha
**File:** `4-isalpha.c`  
**Prototype:** `int _isalpha(int c);`  
- Returns `1` if `c` is a letter (a-z/A-Z), `0` otherwise.

### 5. print_sign
**File:** `5-sign.c`  
**Prototype:** `int print_sign(int n);`  
- Prints `+`, `0`, or `-` based on `n`'s sign.
- Returns: `1` (positive), `0` (zero), `-1` (negative).

### 6. _abs
**File:** `6-abs.c`  
**Prototype:** `int _abs(int);`  
- Computes absolute value of an integer.

### 7. print_last_digit
**File:** `7-print_last_digit.c`  
**Prototype:** `int print_last_digit(int);`  
- Prints and returns the last digit of a number.

### 8. jack_bauer
**File:** `8-24_hours.c`  
**Prototype:** `void jack_bauer(void);`  
- Prints every minute of a day in `HH:MM` format (00:00 to 23:59).

### 9. times_table
**File:** `9-times_table.c`  
**Prototype:** `void times_table(void);`  
- Prints the 9 times table in specific format.

### 10. add
**File:** `10-add.c`  
**Prototype:** `int add(int, int);`  
- Returns the sum of two integers.

### 11. print_to_98
**File:** `11-print_to_98.c`  
**Prototype:** `void print_to_98(int n);`  
- Prints all natural numbers from `n` to 98, comma-separated.

## Advanced Tasks

### 12. print_times_table
**File:** `100-times_table.c`  
**Prototype:** `void print_times_table(int n);`  
- Prints `n` times table (0-15) with formatting.

### 13. natural_sum
**File:** `101-natural.c`  
- Computes/prints sum of multiples of 3 or 5 below 1024.

### 14. fibonacci_50
**File:** `102-fibonacci.c`  
- Prints first 50 Fibonacci numbers (1, 2, 3, 5, 8...).

### 15. even_fibonacci_sum
**File:** `103-fibonacci.c`  
- Prints sum of even Fibonacci numbers ≤ 4,000,000.

### 16. fibonacci_98
**File:** `104-fibonacci.c`  
- Prints first 98 Fibonacci numbers with strict constraints:
  - No arrays/pointers
  - No `long long`
  - No hardcoding beyond 1 and 2

## Compilation
All files compiled with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
