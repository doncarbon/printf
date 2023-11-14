#include "main.h"
/**
 * printBinary - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int printBinary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int charCount = 0;

	int i;

	for (i = 31; i >= 0; i--)
	{
		unsigned int bit;

		bit = (num >> i) & 1;
		printChar(bit + '0');
		charCount++;
	}

	if (charCount == 0)
	{
		charCount++;
		printChar('0');
	}

	return (charCount);
}

