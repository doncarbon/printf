#include "main.h"

/**
 * print_s - prints a string
 * @str: string to print
 * Return: number of printed chars
 */
int print_s(char *str)
{
	int len = 0, count = 0;

	if (str)
	{
		while (str[len] != '\0')
		{
			c_putchar(str[len]);
			count += 1;
			len++;
		}
	}
	return (count);
}
