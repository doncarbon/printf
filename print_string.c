#include "main.h"

/**
 * printString - prints a string
 * @str: string to print
 * Return: number of printed chars
 */
int printString(char *str)
{
	int numberOfCharsPrinted = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		numberOfCharsPrinted += write(1, str, 1);
		str++;
	}

	return (numberOfCharsPrinted);
}


