#include "main.h"

/**
 * printReversed - prints reversed string from argument list
 * @args: argument to print
 *
 * Return: the string
 */
int printReversed(va_list args)
{
	char *str = va_arg(args, char*);
	int length = 0;
	int i;

	if (str == NULL)
	str = "(null)";

	length = strlen(str);

	for (i = length - 1; i >= 0; i--)
	printChar(str[i]);

	return (length);
}

