# ft_printf 🖨️

**ft_printf** is a project that recreates the standard C library function printf.
It allows formatted output in the terminal and helps students understand variadic functions, format parsing, and memory management in C. This project reinforces the use of pointers, structured programming, and library creation.

---

## Table of Contents
1. [Highlights](#highlights)
2. [Functions](#functions)
3. [Installation](#installation)

---

## Highlights

- Reimplement the behavior of the standard printf function
- Handle variadic arguments with va_list
- Manage memory safely
- Clean, reusable, and well-structured code

## Conversions

Specifier	Description

%c	        Character
%s	        String
%p	        Pointer
%d	        Decimal integer
%i	        Integer
%u	        Unsigned integer
%x	        Hexadecimal (lowercase)
%X	        Hexadecimal (uppercase)
%%	        Prints a % character

## Installation

1. Clone the repository:

```bash
git clone https://github.com/vgalmich/ft_printf.git
cd ft_printf
```

2. Compile the program:
```bash
make
```

3. Clean object files:
```bash
make clean
make fclean
make re
```

---