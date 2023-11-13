#include "main.h"

/**
 * specifiers - all specifiers and their code to print
 *
 * @s: string
 * @args: arguments of printf
 * Return: number of chars printed
 */
int specifiers(char string, va_list args)
{
	int countofpchar = 0;

	switch (string)
	{
	case 'c':
		c += print_character(va_arg(osarg, int));
		break;
	case 's':
		c += print_string(va_arg(osarg, char *));
		break;
	case '%':
		c += print_character('%');
		break;
	}

	return (countofpchar);
}
