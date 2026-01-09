<div align="center">

# ft_printf

### A custom implementation of the C standard library `printf` function

[![42 School Project](https://img.shields.io/badge/42-Project-00babc?style=flat-square&logo=42)](https://42.fr)
[![Language](https://img.shields.io/badge/language-C-blue?style=flat-square&logo=c)](<https://en.wikipedia.org/wiki/C_(programming_language)>)
[![Norminette](https://img.shields.io/badge/norminette-passing-success?style=flat-square)](https://github.com/42School/norminette)

_Created as part of the 42 curriculum by [@dide-jes](https://github.com/diogojj)_

</div>

---

## Table of Contents

- [About](#-about)
- [Features](#-features)
- [Installation](#-installation)
- [Usage](#-usage)
- [Implementation Details](#-implementation-details)
- [Testing](#-testing)
- [Resources](#-resources)

---

## About

**ft_printf** is a faithful recreation of the standard C library function `printf`, built from scratch to master:

- **Variadic functions** - Handling variable argument lists
- **Formatted output** - Converting and formatting various data types
- **Low-level I/O** - Direct interaction with file descriptors
- **42 Norm compliance** - Following strict coding standards

This project deepens understanding of how formatted output works under the hood, while providing a robust, production-ready implementation.

---

## Features

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

### Clone the repository

```bash
git clone https://github.com/dide-jes/ft_printf.git
cd ft_printf
```

### Compile the library

```bash
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

### Example Code

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    // Basic usage
    ft_printf("Hello %s!\n", "world");

    // Multiple format specifiers
    ft_printf("Number: %d, Hex: %x, Char: %c\n", 42, 255, 'A');

    // Pointer handling
    int x = 42;
    ft_printf("Address of x: %p\n", &x);

    // Return value (character count)
    count = ft_printf("This string has %d characters\n", 25);
    ft_printf("Printed: %d chars\n", count);

    // NULL handling
    ft_printf("Null string: %s\n", NULL);        // Prints: (null)
    ft_printf("Null pointer: %p\n", NULL);       // Prints: (nil)

    return (0);
}
```

### Expected Output

```
Hello world!
Number: 42, Hex: ff, Char: A
Address of x: 0x7ffeeb8c9a3c
This string has 25 characters
Printed: 30 chars
Null string: (null)
Null pointer: (nil)
```

---

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

### Core Mechanisms

#### 1. **Variadic Argument Handling**

```c
va_list args;
va_start(args, format);
value = va_arg(args, int);
va_end(args);
```

#### 2. **Format Parsing**

- Scans the format string for `%` characters
- Identifies the format specifier
- Dispatches to appropriate handler function

#### 3. **Numeric Conversion**

- Recursive base conversion for hex and unsigned integers
- Handles negative numbers with proper sign placement
- Character counting for return value

#### 4. **Memory Safety**

- NULL pointer checks before dereferencing
- Proper handling of edge cases (INT_MIN, 0, NULL)
- No memory leaks (stack-based allocation only)

---

## Testing

Uncomment the test functions in `ft_printf.c` to run comprehensive tests

### Test Coverage

- ✅ All format specifiers
- ✅ Edge cases (INT_MIN, INT_MAX, 0)
- ✅ NULL pointers and strings
- ✅ Multiple consecutive format specifiers
- ✅ Return value verification
- ✅ Special characters (newline, tab, etc.)

### Recommended External Testers

- [printfTester](https://github.com/Tripouille/printfTester)
- [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester)

---

## Resources

### Documentation

- [`man 3 printf`](https://man7.org/linux/man-pages/man3/printf.3.html) - Standard printf documentation
- [`man 3 stdarg`](https://man7.org/linux/man-pages/man3/stdarg.3.html) - Variadic functions
- [GNU C Library](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html) - Printf implementation details

### Learning Materials

- [42 Intra - ft_printf](https://projects.intra.42.fr/projects/ft_printf) - Project guidelines
- [Understanding printf](https://en.wikipedia.org/wiki/Printf_format_string) - Format string syntaxFormat string
- google

---

## License

This project is part of the 42 School curriculum. Feel free to use and modify for educational purposes.

---

<div align="center">

### ⭐ If you found this helpful, consider giving it a star!

</div>
