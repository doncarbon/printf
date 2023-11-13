#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int c = 0, countofpchar = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for ( ; format[c] != '\0'; c++)
	{
		if (format[c] != '%')
		{
			_putchar(format[c]);
		}
		else if (format[c + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			c++;
		}
		else if (format[c + 1] == 's')
		{
			int count = print_s(va_arg(args, char *));

			c++;
			countofpchar += (count - 1);
		}
		else if (format[c + 1] == '%')
		{
			_putchar('%');
			c++;
		}
		countofpchar += 1;
	}
	va_end(args);
	return (countofpchar);
}
