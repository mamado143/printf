#include "main.h"
#include <stdio.h>

/**
 * print_char - writes a character to stdout
 * @args: the va_list containing the character
 * @count: pointer to the count of characters printed
 */
void print_char(va_list args, int *count)
{
    char c = va_arg(args, int);
    _putchar(c);
    (*count)++;
}

/**
 * print_str - writes a string to stdout
 * @args: the va_list containing the string
 * @count: pointer to the count of characters printed
 */
void print_str(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    while (*str)
    {
        _putchar(*str);
        str++;
        (*count)++;
    }
}

/**
 * print_percent - writes a percent sign to stdout
 * @count: pointer to the count of characters printed
 */
void print_percent(int *count)
{
    _putchar('%');
    (*count)++;
}

/**
 * print_integer - writes an integer to stdout
 * @args: the va_list containing the integer
 * @count: pointer to the count of characters printed
 */
void print_integer(va_list args, int *count)
{
    int num = va_arg(args, int);
    char buffer[12];
    sprintf(buffer, "%d", num);
    char *str = buffer;
    while (*str)
    {
        _putchar(*str);
        str++;
        (*count)++;
    }
}
