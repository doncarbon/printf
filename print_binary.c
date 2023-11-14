#include "main.h"

/**
 * printBinary	- prints a binary number from an unsigned int argument
 * @args: parameter.
 * Return: integer
 */

int printBinary(va_list args)
{
	int isFirstNonZeroBitFound = 0;
	unsigned int number = va_arg(args, unsigned int);
	unsigned int bitCheck;
	int bitmask = 1;
	int binaryDigit;
	int characterCount = 0;

	int i;

	for (i = 31; i >= 0; i--)
	{
		bitCheck = ((bitmask << i) & number);
		if (bitCheck >> i)
			isFirstNonZeroBitFound = 1;
		if (isFirstNonZeroBitFound)
		{
			binaryDigit = bitCheck >> i;
			printChar(binaryDigit + '0');
			characterCount++;
		}
	}

	if (characterCount == 0)
	{
		characterCount++;
		printChar('0');
	}

	return (characterCount);
}

