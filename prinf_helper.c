#include "main.h"
/**
  * handle_format_specifier - Handles the format specifier.
  *@format: Pointer to the format specifier character
  *@args: Variable argument list.
  *@count: Pointer to the count of characters printed.
  */
void handle_format_specifier(const char **format, va_list args, int *count)
{
	switch (**format)
	{
		case 'c':
			handle_char(args, count);
			break;
		case 's':
			handle_str(args, count);
			break;
		case '%':
			handle_percent(count);
			break;
		case 'd':
		case 'i':
			handle_integer(args, count);
			break;
		default:
			break;
	}
}
