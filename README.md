*This project has been created as part of the 42 curriculum by <ngpham>.*

# libft

## Description

**libft** is a personal C library created as part of the 42 curriculum.  
The goal of this project is to reimplement a selection of standard C library
functions in order to better understand how they work internally.

Writing this library helped reinforce core C concepts such as memory allocation,
pointer manipulation, string handling, and data structures.  
The resulting library is meant to be reused in future projects at 42.

All functions are written in **C**, follow the **Norminette rules**, and respect
the project constraints.

---

## Instructions

### Compilation

```sh
make
```

This will create the static library file:

```sh
libft.a
```

### Makefile rules

- `make` or `make all` — compile the library  
- `make clean` — remove object files  
- `make fclean` — remove object files and `libft.a`  
- `make re` — recompile the library from scratch  
- `make bonus` — compile the library including the linked list functions  

---

## Usage

The library can be used in any C project.

### 1. Include the header

```c
#include "libft.h"
```

### 2. Compile with libft

You can either link the library directly:

```sh
gcc main.c libft.a
```

Or use the linker flags if the library is in the current directory:

```sh
gcc main.c -L. -lft
```

### 3. Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hello libft");
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

---

## Library Description

The `libft.a` library contains the following functions:

### Character functions

- `ft_isalpha` — checks if a character is alphabetic  
- `ft_isdigit` — checks if a character is a digit  
- `ft_isalnum` — checks if a character is alphanumeric  
- `ft_isascii` — checks if a character is an ASCII character  
- `ft_isprint` — checks if a character is printable  
- `ft_tolower` — converts a character to lowercase  
- `ft_toupper` — converts a character to uppercase  

### String functions

- `ft_strlen` — returns the length of a string  
- `ft_strdup` — duplicates a string  
- `ft_strchr` — finds the first occurrence of a character in a string  
- `ft_strrchr` — finds the last occurrence of a character in a string  
- `ft_strncmp` — compares two strings up to n characters  
- `ft_strnstr` — finds a substring in a string  
- `ft_strlcpy` — copies a string with size limit  
- `ft_strlcat` — concatenates strings with size limit  
- `ft_strjoin` — joins two strings into a new one  
- `ft_strtrim` — removes characters from the start and end of a string  
- `ft_split` — splits a string using a delimiter  
- `ft_substr` — extracts a substring from a string  
- `ft_strmapi` — applies a function to each character of a string  
- `ft_striteri` — applies a function to each character using its index  

### Memory functions

- `ft_memset` — fills memory with a constant byte  
- `ft_bzero` — sets memory to zero  
- `ft_memcpy` — copies memory  
- `ft_memmove` — copies memory safely when overlapping  
- `ft_memchr` — searches for a byte in memory  
- `ft_memcmp` — compares two memory areas  
- `ft_calloc` — allocates and zeroes memory  

### Conversion functions

- `ft_atoi` — converts a string to an integer  
- `ft_itoa` — converts an integer to a string  

### File descriptor output

- `ft_putchar_fd` — writes a character to a file descriptor  
- `ft_putstr_fd` — writes a string to a file descriptor  
- `ft_putendl_fd` — writes a string followed by a newline  
- `ft_putnbr_fd` — writes an integer to a file descriptor  

### Linked list functions

- `ft_lstnew` — creates a new list element  
- `ft_lstadd_front` — adds an element at the beginning of a list  
- `ft_lstadd_back` — adds an element at the end of the list  
- `ft_lstsize` — returns the number of elements in a list  
- `ft_lstlast` — returns the last element of a list  
- `ft_lstdelone` — deletes a list element  
- `ft_lstclear` — deletes and frees a list  
- `ft_lstiter` — applies a function to each list element  
- `ft_lstmap` — creates a new list by applying a function to each element  

---

## Technical Notes

- Language: **C**  
- Compiler: `gcc`  
- Flags: `-Wall -Wextra -Werror`  
- Static library: `libft.a`  
- Code follows **Norminette rules**

---

## Resources

### References

- *The C Programming Language* — Kernighan & Ritchie  
- Linux `man` pages  
- GNU C Library documentation  
- cppreference.com  

### Use of AI

AI tools were used only as a learning aid, mainly to:
- clarify C concepts and function behavior  
- understand edge cases  
- improve documentation clarity  

All code was written, tested, and validated by the student in accordance with 42 rules.

---