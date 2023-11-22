#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list args, int *count);
void print_str(va_list args, int *count);
void print_percent(int *count);
void print_integer(va_list args, int *count);
#endif
