# ft_printf

*This project has been created as part of the 42 curriculum by andede-s*.

## About

The **ft_printf** project consists of recreating the standard C `printf` function. The goal is to better understand variadic functions, string formatting, and handling different data types in C.

This project is part of the 42 curriculum and focuses on building a robust and modular implementation from scratch.

## Contents

- Implementation of `ft_printf`
- Handling variadic functions (`stdarg.h`)
- Conversion and printing of different types:
  - char
  - string
  - pointer
  - int / unsigned int
  - hexadecimal (lowercase / uppercase)
- Output formatting management

## Features

The function supports the following format specifiers:

- `%c` — Character
- `%s` — String
- `%p` — Pointer address
- `%d` — Signed decimal integer
- `%i` — Signed integer
- `%u` — Unsigned integer
- `%x` — Hexadecimal (lowercase)
- `%X` — Hexadecimal (uppercase)
- `%%` — Percent sign

## Objectives

- Understand variadic functions
- Recreate the behavior of the `printf` function
- Improve string manipulation logic
- Learn type handling and conversions in C
- Develop modular and reusable code

## Structure

```text
.
├── ft_printf.c
├── ft_printf_utils.c
├── ft_printf.h
├── Makefile
└── ...
```

## Compilation

```bash
make
```

Clean object files:

```bash
make clean
```

Remove all compiled files:

```bash
make fclean
```

Recompile:

```bash
make re
```
