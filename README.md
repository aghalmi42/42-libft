# Libft - 42 Project

## 📚 Description

**Libft** is one of the very first core projects at **42 School**.  
Its purpose is to rebuild a custom version of the standard C library by re-implementing essential functions related to:

- Memory handling  
- String manipulation  
- Character checks  
- Conversions  
- File descriptor output  
- Linked list operations (Bonus part)

This project helps develop a strong understanding of low-level programming, memory management, and the fundamentals of C.

---

## 🎯 Objectives

- Recreate commonly used standard library functions  
- Improve understanding of pointers, arrays, and memory allocation  
- Build a reliable library that will be reused in future 42 projects (get_next_line, ft_printf, push_swap, etc.)  
- Learn to write clean, modular, and norm-compliant C code  

---

## 🛠️ Features

### 🔹 Part 1 — Mandatory Functions
Re-implementations of essential libc functions:

- **Memory functions:**  
  `memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `bzero`, `calloc`

- **String functions:**  
  `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`

- **Character checks and conversions:**  
  `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`

- **Conversion functions:**  
  `atoi`

### 🔹 Part 2 — Additional Useful Functions
Utility functions that make programming easier:

- **String manipulation:**  
  `substr`, `strjoin`, `strtrim`, `split`, `strdup`

- **Number & string conversion:**  
  `itoa`

- **Functional output:**  
  `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### 🔹 Bonus — Linked List Module
A complete set of functions to handle singly linked lists:

- **Creation:** `lstnew`  
- **Insertion:** `lstadd_front`, `lstadd_back`  
- **Size & access:** `lstsize`, `lstlast`  
- **Deletion:** `lstdelone`, `lstclear`  
- **Iteration & mapping:** `lstiter`, `lstmap`

---

## 📁 Project Structure

- libft.h: Header file containing all function prototypes
- *.c: Source files for each function
- Makefile: Handles the compilation of the library

## 🚀 Usage

### 1. Compilation
```bash
make
```
This command generates the libft.a file (static library).

### 2. Integration into your projects

Include the header in your code:
```c
#include "libft.h"
```

And when compiling, link the library:
```bash
gcc votre_code.c -L. -lft
```

## 📝 Constraints

- Follow the prototypes and behaviors of the standard C library
- Handle errors properly (NULL pointers, allocation failures, etc.)
- Most libc functions are forbidden (except those explicitly allowed by the subject)

## 💡 Tips

- Test each function individually
- Use valgrind to check for memory leaks
- Follow the 42 coding standard (Norminette)
