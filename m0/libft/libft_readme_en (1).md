# Libft

_This project has been created as part of the 42 curriculum by namykim._

---

## Description

Libft is a static library implementing essential C standard library functions. This project establishes foundational knowledge in low-level memory manipulation, string processing, and dynamic data structures.

**Project Scope:**
- 43 functions across three parts
- Part 1: 23 libc function reimplementations
- Part 2: 11 additional utility functions
- Part 3: 9 linked list management functions

**Key Features:**
- Zero memory leaks (validated with valgrind)
- Strict compiler warning compliance (`-Wall -Wextra -Werror`)
- POSIX standard adherence
- 42 Norm compliant

### Part 1: Standard Library Reimplementation (23 functions)

All functions replicate standard libc behavior with `ft_` prefix.

#### Character Classification (5 functions)

- `ft_isalpha`: Checks if character is alphabetic (a-z, A-Z)
- `ft_isdigit`: Checks if character is numeric (0-9)
- `ft_isalnum`: Checks if character is alphanumeric
- `ft_isascii`: Checks if character is valid ASCII (0-127)
- `ft_isprint`: Checks if character is printable (32-126)

Returns 1 on match, 0 otherwise.

#### String Processing (8 functions)

- `ft_strlen`: Returns string length
- `ft_strlcpy`: Safely copies string with size limit (BSD)
- `ft_strlcat`: Safely concatenates string with size limit (BSD)
- `ft_strchr`: Locates first occurrence of character
- `ft_strrchr`: Locates last occurrence of character
- `ft_strncmp`: Compares strings up to n bytes
- `ft_strnstr`: Locates substring within string (up to len bytes)

#### Memory Manipulation (6 functions)

- `ft_memset`: Fills memory block with specified byte
- `ft_bzero`: Initializes memory block to zero
- `ft_memcpy`: Copies non-overlapping memory regions
- `ft_memmove`: Copies memory regions (handles overlap via direction detection)
- `ft_memchr`: Locates byte in memory block
- `ft_memcmp`: Compares memory blocks byte-by-byte

#### Conversion (3 functions)

- `ft_toupper`: Converts lowercase to uppercase
- `ft_tolower`: Converts uppercase to lowercase
- `ft_atoi`: Converts string to integer (handles whitespace and signs)

#### Dynamic Allocation (2 functions)

- `ft_calloc`: Allocates zero-initialized memory
- `ft_strdup`: Duplicates string with dynamic allocation

Both return NULL on allocation failure.

### Part 2: Additional Utilities (11 functions)

Extended functionality not provided by standard library.

#### String Creation (4 functions)

- `ft_substr`: Extracts substring at specified position and length
- `ft_strjoin`: Concatenates two strings into new allocation
- `ft_strtrim`: Removes specified characters from both ends
- `ft_split`: Tokenizes string by delimiter into NULL-terminated array

#### Type Conversion (1 function)

- `ft_itoa`: Converts integer to string (handles INT_MIN)

#### Function Mapping (2 functions)

- `ft_strmapi`: Applies function to each character with index (creates new string)
- `ft_striteri`: Applies function to each character with index (modifies in place)

#### File Descriptor Output (4 functions)

- `ft_putchar_fd`: Writes character to file descriptor
- `ft_putstr_fd`: Writes string to file descriptor
- `ft_putendl_fd`: Writes string with newline to file descriptor
- `ft_putnbr_fd`: Writes integer to file descriptor

### Part 3: Linked List Operations (9 functions)

Singly linked list implementation using generic `t_list` structure.

**Structure Definition:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### Node Creation and Insertion (3 functions)

- `ft_lstnew`: Creates new node with given content
- `ft_lstadd_front`: Prepends node to list (O(1))
- `ft_lstadd_back`: Appends node to list (O(n))

#### List Information (2 functions)

- `ft_lstsize`: Returns node count
- `ft_lstlast`: Returns last node (NULL if empty)

#### Memory Management (2 functions)

- `ft_lstdelone`: Deletes single node with custom deleter function
- `ft_lstclear`: Deletes entire list and sets pointer to NULL

#### List Operations (2 functions)

- `ft_lstiter`: Applies function to each node
- `ft_lstmap`: Creates new list by applying function to each node's content (handles allocation failure)

### Technical Specifications

**Memory Management:**
- All allocations properly freed
- NULL return on allocation failure
- Valgrind verified: "no leaks are possible"

**Error Handling:**
- NULL pointer inputs handled safely
- Boundary conditions (empty strings, zero allocations) validated
- Defined behavior for invalid inputs

**Portability:**
- POSIX compliant
- Platform-independent implementation
- Standard types (`size_t`) over fixed-size types

**Code Standards:**
- 42 Norm compliant
- Maximum 25 lines per function
- Single responsibility principle
- Static helper functions for complex logic

---

## Instructions

### Requirements

- C compiler (gcc or clang)
- Make utility
- POSIX-compliant OS (Linux, macOS)

### Build

Clone and compile:
```bash
git clone <repository_url> libft
cd libft
make
```

Compilation flags: `-Wall -Wextra -Werror`

### Makefile Targets

| Target | Action |
|--------|--------|
| `make` or `make all` | Compile library |
| `make clean` | Remove object files |
| `make fclean` | Remove all generated files |
| `make re` | Recompile from scratch |

### Integration

**Step 1:** Compile library
```bash
cd libft && make
```

**Step 2:** Link with your project
```bash
cc -Wall -Wextra -Werror your_file.c -L./libft -lft -o your_program
```

**Step 3:** Include header in source
```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, libft!");
    ft_putendl_fd(str, 1);
    free(str);
    return 0;
}
```

---

## Resources

### Reference Documentation

**[FreeBSD Man Pages](https://man.freebsd.org/cgi/man.cgi)**
- Function specifications and behavior verification
- BSD-specific functions (strlcpy, strlcat)

**[Dojang C Course](https://dojang.io/course/view.php?id=2)**
- C syntax fundamentals
- Pointer concepts

**[CS50](https://www.boostcourse.org/cs112)**
- Memory structure and management
- Dynamic allocation principles

**[42 Cursus GitBook](https://42-cursus.gitbook.io/guide)**
- Clarifications on ambiguous specifications
- Implementation hints (no code copied)

### AI Usage

**Scope:** Learning assistance only, no direct code generation.

**Concept Understanding:**
- Theoretical explanations of complex topics (memory overlap, endianness)
- Function intent clarification when specifications were ambiguous
- Example: "Why does memmove need bidirectional copying?"

**Debugging Support:**
- Boundary condition identification
- Common error pattern analysis
- Counterexample generation for edge cases

**Not Used For:**
- Direct code implementation
- Algorithm solutions
- Function logic design

**Actual Development:**
- Code written through manual page analysis and iterative testing
- Bugs fixed using gdb and valgrind
- Solutions validated through peer review and code discussions