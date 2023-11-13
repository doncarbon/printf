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

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			countofpchar += print_c(*format);
		}
		else
		{
			format++;
			countofpchar += specifiers(*format, args);
		}
		format++;
	}
	va_end(args);

	return (countofpchar);
}
