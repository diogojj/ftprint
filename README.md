<div align="center">

_This project has been created as part
of the 42 curriculum by <@dide-jes>(http:git)_
_(https://github.com/diogojj)_

# ft_printf

### A custom implementation of the C standard library `printf` function

[![42 School Project](https://img.shields.io/badge/42-Project-00babc?style=flat-square&logo=42)](https://42.fr)
[![Language](https://img.shields.io/badge/language-C-blue?style=flat-square&logo=c)](<https://en.wikipedia.org/wiki/C_(programming_language)>)
[![Norminette](https://img.shields.io/badge/norminette-passing-success?style=flat-square)](https://github.com/42School/norminette)

</div>

## Description

**ft_printf** is a faithful recreation of the standard C library function `printf`, built from scratch to master:

- **Variadic functions** - Handling variable argument lists
- **Formatted output** - Converting and formatting various data types
- **42 Norm compliance** - Following strict coding standards

This project deepens understanding of how formatted output works under the hood, while providing a robust, production-ready implementation.

---

### Supported Format Specifiers

|  Specifier  | Description              | Example                                   |
| :---------: | ------------------------ | ----------------------------------------- |
|    `%c`     | Single character         | `ft_printf("%c", 'A')` → `A`              |
|    `%s`     | String (null-safe)       | `ft_printf("%s", "Hello")` → `Hello`      |
| `%d` / `%i` | Signed decimal integer   | `ft_printf("%d", -42)` → `-42`            |
|    `%u`     | Unsigned decimal integer | `ft_printf("%u", 42)` → `42`              |
|    `%x`     | Hexadecimal (lowercase)  | `ft_printf("%x", 255)` → `ff`             |
|    `%X`     | Hexadecimal (uppercase)  | `ft_printf("%X", 255)` → `FF`             |
|    `%p`     | Pointer address          | `ft_printf("%p", ptr)` → `0x7fff5fbff710` |
|    `%%`     | Literal percent sign     | `ft_printf("%%")` → `%`                   |

### Special Handling

- ✅ NULL string pointers print as `(null)`
- ✅ NULL pointers print as `(nil)`
- ✅ Returns character count (like standard `printf`)
- ✅ Error handling for invalid format specifiers

---

## Instructions

### Clone the repository

```bash
git clone https://github.com/dide-jes/ft_printf.git
cd ft_printf
```

### Compile the library

```
make
```

This generates the static library: **`libftprintf.a`**

### Available Make Rules

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

---

## Usage

### In Your Project

1. **Include the header:**

```c
#include "ft_printf.h"
```

2. **Compile with the library:**

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

## Implementation Details

### Architecture

```
ft_printf/
├── ft_printf.c      # Main function and format dispatcher
├── ft_aux.c         # Base conversion functions (hex, unsigned)
├── ft_aux2.c        # Helper functions (putchar, putstr, strlen, putnbr)
├── ft_printf.h      # Header with function prototypes
├── Makefile         # Compilation rules
└── README.md        # This file
```

## Resources

- https://www.geeksforgeeks.org/c/variadic-functions-in-c
- https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf/     variadic-functions

---

## License

This project is part of the 42 School curriculum. Feel free to use and modify for educational purposes.

---

<div align="center">

### ⭐ If you found this helpful, consider giving it a star!

</div>
