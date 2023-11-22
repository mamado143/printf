#include "main.h"
/**
 * _printf - This function provides basic formatting prinf.
 * strings (%s), and percent signs (%%).
 * @format: Is a format string containing format specifiers.
 * @...: Additional arguments to be formatted.
 * @Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int count = 0;

	while (*format)
	{
		if (*format == '%') {
			format++;
			switch (*format) 
			{
				case 'c':
					{
						char c = va_arg(args, int);
						_putchar(c);
						count++;
					}
					break;
				case 's':
					{
						char *str = va_arg(args, char*);
						while (*str) 
						{
							_putchar(*str);
							str++;
							count++;
						}
					}
					break;
				case '%':
					_putchar('%');
					count++;
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
