# C Programming & Shell Script Projects

## 📁 Repository Overview

This repository contains C programming and shell scripting projects developed and tested on **Ubuntu 20.04 LTS**. It follows strict coding and documentation guidelines, including adherence to the **Betty style** for C code and minimal formatting for shell scripts.

All projects are designed to enhance mastery of systems-level programming in C, and working with shell environments and scripting fundamentals.

---

## 📌 Requirements

### ✅ General
- Language: C
- Editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- No use of the `system` function
- No warnings or errors allowed during compilation

### ✅ C Code Style
- Code must follow the **Betty style**
  - Validated with: `betty-style.pl` and `betty-doc.pl`

### ✅ Shell Scripts
- Language: Bash
- Editors: `vi`, `vim`, `emacs`
- Tested on Ubuntu 20.04 LTS
- All scripts must:
  - Be exactly **two lines** long
  - Start with `#!/bin/bash`
  - End with a new line

---

## 📂 Project Structure

Each subfolder in this repository contains:
- A `README.md` with a description of the specific project
- Source code files (`.c`, `.h`)
- Shell scripts if applicable
- A `main` or test file (where necessary)

---

## 🔧 Compilation

To compile any C file:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
# alx-low_level_programming
