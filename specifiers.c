#include "main.h"

/**
 * specifiers - all spec and their code to print
 *
 * @string: string
 * @args: arguments of printf
 * Return: number of chars printed
 */
int specifiers(char string, va_list args)
{
	int countofpchar = 0;

	switch (string)
	{
	case 'c':
		c += print_c(va_arg(osarg, int));
		break;
	case 's':
		c += print_s(va_arg(osarg, char *));
		break;
	case '%':
		c += print_c('%');
		break;
	}

	return (countofpchar);
}
