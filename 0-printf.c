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

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			countofpchar++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				countofpchar++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				countofpchar++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				countofpchar += len;
			}
		}
		format++;
	}
	va_end(args);

	return (countofpchar);
}

/**
 * _printf_str - Custom printf that prints str function
 * @str: string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_str(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	write(1, str, len);

	return (len);
}
