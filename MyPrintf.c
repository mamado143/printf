#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing format specifiers
 * @...: additional arguments to be formatted
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (!format)
	{
		fputs("Error: NULL format string\n", stderr);
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_format_specifier(&format, args, &count);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
