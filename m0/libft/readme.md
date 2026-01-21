_This project has been created as part of the 42 curriculum by namykim._

# Libft

---

## Description

Libft is a custom implementation of essential C standard library functions, packaged as a static library. This project serves as the foundation of the 42 curriculum, designed to develop a deep understanding of low-level memory manipulation, string processing, and dynamic data structure implementation in C.

The project consists of 43 functions organized into three distinct parts. Part 1 recreates 23 standard libc functions, establishing fundamentals in character classification, string manipulation, and memory management. Part 2 develops 11 utility functions not found in the standard library, advancing skills in string parsing and dynamic memory allocation. Part 3 implements 9 functions for managing singly linked lists, introducing the basics of dynamic data structures.

All functions are designed to operate safely without memory leaks and have been tested under strict compiler warning levels. The completed library serves as a reusable code base for subsequent 42 projects.

### Part 1: Standard Library Function Reimplementation (23 functions)

This section reimplements core functions from the C standard library (libc). Each function faithfully follows the behavior and prototype of the original, distinguished by the `ft_` prefix.

The five character classification functions determine whether a given character belongs to a specific category. The functions `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, and `ft_isprint` are implemented using direct ASCII value comparisons, checking for alphabetic characters, digits, alphanumeric characters, ASCII characters, and printable characters respectively. They return 1 if the condition is met, 0 otherwise.

The eight string processing functions handle basic string operations. The function `ft_strlen` calculates the length of a null-terminated string. Functions `ft_strlcpy` and `ft_strlcat` are safe string copy and concatenation functions that prevent buffer overflows, originating from BSD systems. Functions `ft_strchr` and `ft_strrchr` locate the first or last occurrence of a character in a string respectively. The function `ft_strncmp` compares two strings up to a specified number of bytes, and `ft_strnstr` searches for a substring within a larger string.

The six memory manipulation functions provide byte-level memory control. The function `ft_memset` fills a memory block with a specific byte value, while `ft_bzero` initializes memory to zero. Function `ft_memcpy` copies non-overlapping memory regions, and `ft_memmove` safely handles overlapping memory areas. The memmove implementation prevents data corruption by comparing source and destination addresses to determine the appropriate copy direction. Function `ft_memchr` finds a specific byte in a memory block, and `ft_memcmp` compares two memory regions byte by byte.

The three conversion functions handle character and number transformations. Functions `ft_toupper` and `ft_tolower` convert character case, while `ft_atoi` converts strings to integers, handling whitespace and sign recognition.

The two dynamic memory allocation functions support safe memory management. Function `ft_calloc` allocates memory for a specified number of elements of a given size and initializes it to zero. Function `ft_strdup` dynamically allocates and returns a copy of a given string. Both functions return NULL on allocation failure, enabling safe error handling.

### Part 2: Additional Utility Functions (11 functions)

This part implements practical functions not found in the standard library.

The four string creation and manipulation functions handle dynamic string processing. Function `ft_substr` dynamically allocates and creates a substring from the original string at a specified position and length. Function `ft_strjoin` creates a new string by concatenating two strings. Function `ft_strtrim` removes all characters belonging to a specified set from both ends of a string. Function `ft_split` divides a string based on a delimiter, returning a NULL-terminated array of strings useful for CSV parsing and tokenization tasks.

The type conversion function `ft_itoa` converts an integer to a string, handling negative numbers and edge cases like INT_MIN correctly.

The two function mapping functions implement the concept of higher-order functions using function pointers. Function `ft_strmapi` applies a function to each character of a string along with its index, creating a new string. Function `ft_striteri` is similar but modifies the original string in place and returns nothing.

The four file descriptor output functions provide flexible output capabilities. Functions `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` output a character, string, string with newline, and integer to a specified file descriptor respectively. By accepting a file descriptor as a parameter, these functions offer flexibility to output to standard output, files, or standard error.

### Part 3: Linked List Implementation (9 functions)

This part implements a comprehensive function set for singly linked lists. Each node is represented by the t_list structure, containing a void pointer content member and a next pointer to the following node. Using void pointers enables a generic list capable of storing any data type.

The three node creation and insertion functions form the basic list structure. Function `ft_lstnew` creates a new node with given content and initializes next to NULL. Function `ft_lstadd_front` adds a node to the front of the list with O(1) time complexity. Function `ft_lstadd_back` adds a node to the end of the list, requiring list traversal and thus having O(n) time complexity.

The two list information retrieval functions assess list state. Function `ft_lstsize` counts and returns the total number of nodes in the list. Function `ft_lstlast` finds and returns the last node of the list, returning NULL for an empty list.

The two memory management functions handle safe list deallocation. Function `ft_lstdelone` frees a single node's content using the provided deletion function, then frees the node itself. Function `ft_lstclear` deletes all nodes in the list and sets the list pointer to NULL, preventing memory leaks.

The two list traversal and transformation functions perform operations on the entire list. Function `ft_lstiter` applies a given function to each node in the list. Function `ft_lstmap` creates a new list by applying a function to each node's content, cleaning up all created nodes on allocation failure to prevent memory leaks.

### Technical Implementation Features

All functions in this project are designed to operate without memory leaks. All memory allocated with malloc must be properly freed after use, and allocation failures return NULL to allow callers to handle errors. Memory checks using valgrind show "no leaks are possible" results for all functions.

Functions perform defined behaviors for invalid input. When passed NULL pointers, most functions return NULL or perform no operation. Boundary conditions such as empty strings and zero-size allocations are handled correctly.

The code follows POSIX standards and avoids platform-dependent features. Standard types like size_t are used instead of fixed-size types from stdint.h, ensuring operation across various systems. All code adheres to 42's Norm rules, with functions not exceeding 25 lines and each function following the single responsibility principle. Complex logic is separated into static helper functions to improve readability.

---

## Instructions

### Build Requirements

Building this project requires the following environment. A C compiler such as gcc or clang is needed, and the Make utility must be installed. The project operates normally on POSIX-compliant operating systems such as Linux or macOS.

### Compilation

After cloning the repository, execute the following command in the root directory to generate the `libft.a` static library.

```bash
git clone <repository_url> libft
cd libft
make
```

Compilation uses the `-Wall -Wextra -Werror` flags, treating all warnings as errors. This ensures code stability and portability.

### Makefile Targets

The Makefile provides the following targets.

Running `make` or `make all` compiles all source files to generate the libft.a library.

Running `make clean` removes object files (.o) generated during compilation.

Running `make fclean` removes both object files and the library file, returning to a clean state.

Running `make re` performs fclean followed by all, recompiling everything from scratch.

### Using in Your Project

To integrate libft into your C project, follow these steps. First, compile the library in the libft directory.

```bash
cd libft && make
```

Then link libft.a when compiling your source files.

```bash
cc -Wall -Wextra -Werror your_file.c -L./libft -lft -o your_program
```

In your source code, include the libft.h header file.

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

This allows you to use all libft functions in your project. After using the library, you must free any dynamically allocated memory.

---

## Resources

### Reference Documentation

The following official documentation and learning materials were consulted to complete this project.

FreeBSD Man Pages were used to verify exact specifications and expected behavior of each function. For BSD-specific functions like strlcpy and strlcat, BSD manuals were specifically referenced to implement correct behavior. The documentation can be accessed at[FreeBSD Man Pages](https://man.freebsd.org/cgi/man.cgi).

The Dojang C programming course was used to learn basic syntax and pointer concepts. This resource is available at [The Dojang C programming course](https://dojang.io/course/view.php?id=2) and was very helpful in building C programming fundamentals.

CS50 lectures provided a deep understanding of memory structure, pointers, and the principles of dynamic allocation. This course can be accessed at [CS50 lectures](www.boostcourse.org/cs112) and was extremely useful for learning fundamental computer science concepts.

### AI Usage

This project was developed in strict adherence to 42's AI usage guidelines. AI tools were used only for learning assistance purposes, not for direct code generation.

AI was utilized during the concept understanding phase.For unfamiliar concepts such as memory nesting, or in cases where the intent was not clearly understood from the specification alone, I used it to gain a better understanding of the function’s purpose.

AI was also used in a limited capacity during debugging. By checking common boundary conditions and asking for counterexamples, I was able to improve the completeness of the code.