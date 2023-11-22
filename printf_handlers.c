#include "main.h"
/**
  * handle_char - handles the 'char' format specifier.
  * @args: args Variable argument list.
  * @count: Pointer to the count of characters printed.
  */
void handle_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	(*count)++;
}
/**
  * handle_str - This function retrieves a string from the args
  * @args: variable args list.
  * @count: Pointer to the count of chars.
 */
void handle_str(va_list args, int *count)
{
	char *str = va_arg(args, char*);

	while (*str)
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}
/**
  * handle_percent - Handles the 'percent' format specifier.
  * @count: Pointer to the count of characters printed.
  */
void handle_percent(int *count)
{
	_putchar('%');
	(*count)++;
}
/**
  * handle_integer - This function retrieves an integer from args.
  * @args: is a variable argument list.
  * @count: Pointer to the count.
  */
void handle_integer(va_list args, int *count)
{
	int num;
	char buffer[12];
	char *str;

	num = va_arg(args, int);
	sprintf(buffer, "%d", num);
	str = buffer;
	while (*str)
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}
