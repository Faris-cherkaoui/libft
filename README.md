*This project has been created as part of the 42 curriculum by cfaris.*

# Libft

## Description

Libft is my first own C library, built as part of the 42 curriculum. The goal is to understand how the standard C functions work by reimplementing them, and to build a set of reusable utility functions for future projects.

The library is compiled into a static archive, `libft.a`, and is split into three parts:

- **Part 1 - Libc functions**: reimplementation of standard functions, prefixed with `ft_`.
  - Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
  - Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`.
  - Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **Part 2 - Additional functions**: functions that are not in the libc or exist in a different form.
  - Strings: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.
  - Output on a file descriptor: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Part 3 - Linked list**: functions to manipulate a singly linked list based on the `t_list` structure.
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

All functions follow the 42 Norm, have no global variables, and handle memory allocation failures without leaks.

## Instructions

### Compilation

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make        # builds libft.a at the root of the repository
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # rebuilds everything from scratch
```

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- `man` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- The 42 Norm (Norminette documentation)
- GNU Make manual: https://www.gnu.org/software/make/manual/
- Linked lists and static libraries (`ar`) tutorials and documentation

### Use of AI

AI tools were used as a support for learning and review, not to copy
ready-made solutions. They were used for:

- understanding concepts (memory management, pointers, linked lists,
  static libraries, Makefile rules);
- reviewing and checking my work (prototypes in `libft.h` against the
  subject, Makefile structure, Norminette errors);
- debugging and understanding compilation errors or unexpected behaviours;
- helping with the writing of the `README.md`.

I wrote and tested the function implementations myself, and I am able to
explain every part of the code.