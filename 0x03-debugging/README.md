# 0x03. C - Debugging 🐞

A hands-on introduction to finding and fixing bugs in C programs. This project focuses on reading compiler errors, reasoning about program flow, and using manual debugging techniques like strategic print statements and rubber duck debugging.

## Table of Contents
- What you’ll learn
- Requirements
- Resources
- Project structure
- How to build and run
- Debugging playbook (how to approach bugs)
- Common pitfalls covered in this project
- Betty style
- Notes and guidelines
- Author

---

## What you’ll learn
By the end of this project, you should be able to explain (without Google):
- What debugging is and why it’s essential
- How to debug manually using reasoning, tracing, and prints
- How to read and act on compiler and runtime error messages

---

## Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: gcc with flags:
  -Wall -Werror -Wextra -pedantic -std=gnu89
- Style: Betty (checked with betty-style.pl and betty-doc.pl)
- Editors: vi, vim, or emacs
- Every file must end with a new line
- README.md at:
  - the root of this repository, and
  - the root of this project folder: 0x03-debugging

---

## Resources
- “Debugging” (concepts and workflows)
- “Rubber Duck Debugging”

Tip: Rubber duck debugging = explain your code line-by-line (to a duck, a friend, or yourself). You’ll be surprised how often you catch the bug just by narrating your intent vs. what the code actually does.

---

## Project structure
Your 0x03-debugging directory typically includes:
- README.md — this file
- main.h — function prototypes and shared headers
- Test mains and implementation files used to reproduce and fix issues

Common files for this project (may vary by cohort):
- 0-main.c — tests a function that prints whether an integer is positive or negative
- 1-main.c — demonstrates (and fixes) an infinite loop
- 2-largest_number.c — fix a function that returns the largest of three integers
- 3-print_remaining_days.c — fix leap year logic and remaining days calculation
- 2-main.c, 3-convert_day.c, 3-main_b.c — helper test files

If your local repo differs, adjust this section to match your files.

---

## How to build and run

Compile a single file:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o program
./program
```

Compile multiple files:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file1.c file2.c -o program
./program
```

Run Betty checks:
- Documentation: betty-doc path/to/file.c
- Style: betty-style path/to/file.c

---

## Debugging playbook (how to approach bugs)

1) Reproduce the bug
- Run with the same inputs every time until you reliably see the issue.

2) Read the compiler output carefully
- gcc is your first debugger. It will tell you:
  - where a symbol is undeclared,
  - when a statement has no effect,
  - when a variable is unused,
  - and much more.

3) Trace with print statements
- Add prints before/after suspicious lines.
- Print variable values and branch decisions.
- Label prints clearly so you know where they came from.

4) Check the basics
- Assignment vs comparison (use = to assign, == to compare).
- Loop progress (are counters incrementing? are exit conditions reachable?).
- Variable declarations and initialization (did you declare int i; before use?).
- Off-by-one errors and boundary conditions.

5) Reason about control flow
- continue skips to the next loop iteration.
- break exits the current loop immediately.
- If you break before a print, that print won’t run.

6) Test edge cases
- 0, negative numbers, equal numbers, leap years, empty strings, etc.

7) Simplify
- Reduce code to the smallest version that still reproduces the bug.

8) Rubber duck it
- Explain what each line should do. If the code doesn’t match your explanation, you’ve found the bug.

---

## Common pitfalls covered in this project

- Assignment vs comparison
  - Symptom: compiler warns “statement with no effect” or logic never updates.
  - Example:
    ```
    j == j - 1;   /* Wrong: comparison does nothing */
    j = j - 1;    /* Right: assignment updates j */
    ```

- Infinite loops (missing increments or wrong condition)
  - Symptom: program prints forever or never finishes.
  - Example:
    ```
    while (j < 10) {
        printf("%d", j);
        /* Missing: j++; */
    }
    ```

- Undeclared or unused variables
  - Symptom (compile-time):
    - error: ‘i’ undeclared (first use in this function)
    - error: variable ‘hello’ set but not used [-Werror=unused-but-set-variable]
  - Fix: declare variables before use and actually use them.

- Misplaced break/continue
  - Symptom: prints never execute because you break before you reach them.
  - Example:
    ```
    for (i = 0; i < 100; i++) {
        if (i % 2 != 0) {
            continue;             /* Skip odds */
        } else {
            break;                /* Breaks on the first even => loop ends immediately */
        }
        printf("%d\n", i);        /* Unreachable when break runs first */
    }
    ```
  - If the goal is to print even numbers, a clearer approach:
    ```
    for (i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    ```

- Reading error lines correctly
  - The “first” compiler error matters most; later errors can be side-effects.
  - Example: Using i without declaring it creates a cascade of errors on later lines.

---

## Betty style
- Follow Betty guidelines for naming, spacing, comments, and documentation blocks.
- Run betty-doc and betty-style before pushing to ensure compliance.

---

## Notes and guidelines
- This project is about learning to debug manually—print statements, reading errors, reasoning about flow.
- Keep your commits small and message them meaningfully (e.g., “Fix infinite loop in 1-main.c; add increment”).
- Don’t publish solutions verbatim from others. Understand and implement your own fixes.

---

## Author
- Nexesa Foundation
- GitHub: Nekks
- Email: nexesa.foundation@yahoo.com
