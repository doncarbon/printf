#include "main.h"

/**
 * printRot13 - prints the ROT13'ed string
 * @args: argument to print
 * Return: number of characters printed
 */
int printRot13(va_list args)
{
	char *str = va_arg(args, char*);
	int characterCount = 0;
	int i;
	char base;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			base = (str[i] >= 'a') ? 'a' : 'A';
			printChar((str[i] - base + 13) % 26 + base);
		}
		else
		{
			printChar(str[i]);
		}

		characterCount++;
	}

	return (characterCount);
}

