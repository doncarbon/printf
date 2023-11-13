#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int c, countofpchar = 0;
	va_list args;

	va_start(args, format);

	for (c = 0; format[c] != '\0'; c++)
	{
		if (format[c] != '%')
		{
			c_putchar(format[c]);
		}
		else if (format[c + 1] == 'c')
		{
			c_putchar(va_arg(args, int));
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
			c_putchar('%');
			c++;
		}
		countofpchar += 1;
	}
	va_end(args);

	return (countofpchar);
}
