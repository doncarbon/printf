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
		countofpchar += print_c(va_arg(args, int));
		break;
	case 's':
		countofpchar += print_s(va_arg(args, char *));
		break;
	case '%':
		countofpchar += print_c('%');
		break;
	}

	return (countofpchar);
}
