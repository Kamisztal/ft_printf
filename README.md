# ft_printf

![Language](https://img.shields.io/badge/language-C-blue)
![School](https://img.shields.io/badge/school-42-black)
![Status](https://img.shields.io/badge/status-validated-brightgreen)
![Conversions](https://img.shields.io/badge/conversions-9%2F9-brightgreen)

My own remake of `printf` in C, the second project of the 42 Common Core, built on top of my [Libft](https://github.com/Kamisztal/Libft).

## Goal

Recode the standard `printf` function to learn how variadic functions work in C (`va_start`, `va_arg`, `va_end`). The result is a static library, `libftprintf.a`, that I can reuse in my next projects.

## Content

**Prototype**
`int ft_printf(const char *format, ...);`

**Conversions**
`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

Like the real `printf`, it returns the number of characters written.

**How it works**
The format string is read character by character. Normal characters are printed directly. When a `%` is found, the next letter is turned into a type code, and a small function for that type reads the argument with `va_arg`, prints it and returns how many characters it wrote. Numbers are printed recursively, without any `malloc`.

## Usage

```bash
git clone https://github.com/Kamisztal/ft_printf.git
cd ft_printf
make
```
## Tests

Every conversion was compared to the real `printf` (output and return value) with my own test programs, including edge cases like `NULL` strings and pointers, `INT_MIN`, `UINT_MAX` and `-1` in `%u` / `%x`. Checked with AddressSanitizer and Valgrind (0 leaks, 0 allocation), and passes norminette.

---

*Made by [Kamisztal](https://github.com/Kamisztal)*
