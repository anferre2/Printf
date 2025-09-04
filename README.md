# ft_printf

It involves recreating the standard C `printf` function, with support for a subset of format specifiers.  
This project teaches variadic functions, string/number formatting, and low-level output management.

---

## 🚀 Project Overview

- **Goal:** Reproduce the behavior of `printf` with a custom implementation.
- **Input:** A format string with optional conversion specifiers and variable arguments.
- **Output:** Formatted data written to standard output.
- **Library:** Compilation produces `libftprintf.a`, which can be linked to other projects.

---

## 🧠 Learning Objectives

- Work with **variadic functions** (`stdarg.h`).
- Implement **string and number formatting** manually.
- Handle **different data types** (chars, strings, ints, pointers, hexadecimals).
- Manage **buffered output and memory** safely.
- Gain deeper understanding of **how printf works internally**.

---

## 📋 Supported Conversions

- `%c` → Print a single character.  
- `%s` → Print a string of characters.  
- `%p` → Print a pointer address in hexadecimal format (with `0x` prefix).  
- `%d` / `%i` → Print a signed decimal integer.  
- `%u` → Print an unsigned decimal integer.  
- `%x` → Print a number in lowercase hexadecimal.  
- `%X` → Print a number in uppercase hexadecimal.  
- `%%` → Print a literal percent sign.  

---

## 🛠️ Implementation Details

- Uses `write()` for output (no use of `printf` internally).
- Custom functions for:
  - **Integer to string conversion** (`itoa`, `utoa`, `hex conversion`).
  - **String length and output** (`ft_strlen`, `ft_putstr`).
  - **Pointer formatting** with address handling.
- **No support** for floats (`%f`), long modifiers, or advanced formatting flags (width, precision, etc.).  
- Code structured to allow **easy extension** for future specifiers.

---

## 📊 Example Behavior

```
ft_printf("Hello %s!\n", "world");
ft_printf("Character: %c, Number: %d, Hex: %x\n", 'A', 42, 42);
ft_printf("Pointer: %p\n", (void *)0x1234abcd);
ft_printf("Percent: %%\n");
```

Output:

```
Hello world!
Character: A, Number: 42, Hex: 2a
Pointer: 0x1234abcd
Percent: %
```

🛠️ Usage:
- Include the header: #include "ft_printf.h"
- Compile with: 

`gcc main.c libftprintf.a -o my_program`

- Run your program: 

`./my_program`

Author:
- André Lima
