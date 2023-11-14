#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int printedCharCount = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printedCharCount += handleSpecifier(*format, args);
		}
		else
		{
			printedCharCount += printChar(*format);
		}
		format++;
	}
	va_end(args);

	return (printedCharCount);
}


