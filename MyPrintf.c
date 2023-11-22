#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing format specifiers
 * @...: additional arguments to be formatted
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                print_char(args, &count);
                break;
            case 's':
                print_str(args, &count);
                break;
            case '%':
                print_percent(&count);
                break;
            case 'd':
            case 'i':
                print_integer(args, &count);
                break;
            default:
                break;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}
