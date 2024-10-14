# Libft - 42 Project

Libft is a comprehensive library of essential C functions used in various C programs and projects. It serves as a foundational project at 42 schools, introducing students to coding best practices, memory management, and problem-solving at a low level.

## Table of Contents

1. [About](#about)
2. [Project Structure](#project-structure)
3. [Functions Implemented](#functions-implemented)
4. [How to Use](#how-to-use)
5. [Compilation](#compilation)
6. [Testing](#testing)
7. [License](#license)

## About

The **Libft** project is a 42 School project that involves recreating standard C library functions (from `<stdlib.h>`, `<string.h>`, and `<ctype.h>`), as well as additional utility functions that extend the functionality of the standard C library. This custom library is written in C and is built to be efficient, reusable, and modular.

The goal of the project is to help students understand low-level programming, memory allocation, string manipulation, linked lists, and more, while adhering to the 42 coding standards.

## Project Structure

- `libft.h`: Header file containing all function prototypes and includes.
- `*.c`: Source files that implement the functions defined in the project.
- `Makefile`: Compilation rules to build the library.

## Functions Implemented

Here is a summary of the types of functions implemented:

### Part 1 - Libc Functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strlen`
- `ft_strdup`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strstr`
- `ft_strnstr`
- `ft_strcmp`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Part 2 - Additional Functions

- `ft_memalloc`
- `ft_memdel`
- `ft_strnew`
- `ft_strdel`
- `ft_strclr`
- `ft_striter`
- `ft_striteri`
- `ft_strmap`
- `ft_strmapi`
- `ft_strequ`
- `ft_strnequ`
- `ft_strsub`
- `ft_strjoin`
- `ft_strtrim`
- `ft_strsplit`
- `ft_itoa`
- `ft_putchar`
- `ft_putstr`
- `ft_putendl`
- `ft_putnbr`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Part 3 - Bonus (Linked List Functions)

- `ft_lstnew`
- `ft_lstdelone`
- `ft_lstdel`
- `ft_lstadd`
- `ft_lstiter`
- `ft_lstmap`

## How to Use

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/username/libft.git
    cd libft
    ```

2. Run `make` to compile the library:

    ```bash
    make
    ```

3. Include `libft.h` in your C programs, and link the compiled library when building your project:

    ```c
    #include "libft.h"
    ```

4. Compile your project with `libft.a`:

    ```bash
    gcc -Wall -Wextra -Werror -L. -lft your_program.c -o your_program
    ```

## Compilation

- `make`: Compiles the library (`libft.a`).
- `make clean`: Deletes object files.
- `make fclean`: Deletes object files and the compiled library.
- `make re`: Cleans and recompiles the library.

## Testing

You can test the functions individually or use third-party testers. To test manually, compile your own C program linking to the `libft.a` library and call the desired function.

## License

This project is open-source and free to use. You are welcome to modify and redistribute it as needed, while crediting the original author(s).
