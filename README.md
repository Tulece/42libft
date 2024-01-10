LIBFT

DESCRIPTION

libft is a comprehensive C library developed as part of the 42 School curriculum. It extends the functionality of the standard C library by including additional useful functions such as a custom printf implementation, the get_next_line function for reading files line by line, and various utility functions. This library is a cornerstone for C programming, enhancing the capabilities available to developers.

Features

Custom Printf: Implementation of a subset of the printf function, handling various format specifiers.

Get Next Line: Functionality to read a file descriptor line by line efficiently.

String and Memory Utilities: Functions for manipulating strings and memory, like ft_strdup, ft_strjoin, and more.

Number Conversion and Printing: Functions to handle number printing and conversion in different formats.

Linked List Management: (If included) Basic operations for linked list manipulation.

How to Compile

Compile the library using the provided Makefile:

make

This command will generate a libft.a static library file.

USAGE

Include libft.h in your C projects and link against libft.a during compilation:

gcc -Wall -Wextra -Werror -I. -c your_project.c

gcc -o your_project your_project.o -L. -lft

Core Functions

A highlight of some key functions included in the library:

String functions: ft_strlen, ft_strchr, ft_strdup, ft_strjoin.

Memory functions: (If included) ft_memset, ft_memcpy.

Custom ft_printf and ft_putnbr, along with format-specific variations.

get_next_line for efficient line-by-line file reading.

Linked list functions: ft_lstnew, ft_lstadd_front, ft_lstsize.

DEPENDENCIES

Standard C libraries (unistd.h)

Author
Tulece "anporced"
