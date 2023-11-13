#include "main.h"

/**
 * print_s - prints a string
 * @str: string to print
 * Return: number of printed chars
 */
int print_s(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "(null)";
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
