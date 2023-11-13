#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int countofpchar = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			countofpchar += specifiers(*format, args);
		}
		else
		{
			countofpchar += print_c(*format);
		}
		format++;
	}
	va_end(args);

	return (countofpchar);
}
