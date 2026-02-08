# Libft

**Libft** is an introduction to the basics of programming in C. It is a **personal C library** that reimplements some standard C library functions and provides additional utilities for string manipulation, memory management, and linked lists.  
This project is part of the **42 School curriculum** and helps students to learn memory management, pointers, and structured programming in C.

---

## Table of Contents
1. [Highlights](#highlights)
2. [Functions](#functions)
3. [Installation](#installation)

---

## Highlights

- Reimplement standard C functions (ctype, string, memory, output)  
- Handle dynamic memory safely  
- Include optional bonus functions for linked lists  
- Clean, reusable, and well-structured code  

---

## Functions

### Ctype Functions
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### String Functions
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

### Memory Functions
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Output Functions
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus: Linked Lists
- `ft_lstnew_bonus`
- `ft_lstadd_front_bonus`
- `ft_lstsize_bonus`
- `ft_lstlast_bonus`
- `ft_lstadd_back_bonus`
- `ft_lstdelone_bonus`
- `ft_lstclear_bonus`
- `ft_lstiter_bonus`
- `ft_lstmap_bonus`

---

## Installation

1. Clone the repository:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
```

2. Compile the library:
```bash
make
```

3. Compile with bonus functions:
```bash
make bonus
```

4. Clean object files:
```bash
make clean      # removes .o files
make fclean     # removes .o files and libft.a
make re         # rebuild library from scratch
```

---

vgalmich – 42 School Student