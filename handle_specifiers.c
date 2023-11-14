#include "main.h"

/**
* handleSpecifier - all spec and their code to print
*
* @string: string
* @args: arguments of printf
* Return: number of chars printed
*/
int handleSpecifier(char string, va_list args)
{
	int printedCharCount = 0;

	switch (string)
	{
	case 'c':
		printedCharCount += printChar(va_arg(args, int));
		break;
	case 's':
		printedCharCount += printString(va_arg(args, char *));
		break;
	case '%':
		printedCharCount += printChar('%');
		break;
	case 'd':
		printedCharCount += printDecimal(args);
		break;
	case 'i':
		printedCharCount += printInteger(args);
		break;
	case 'b':
		printedCharCount += printBinary(args);
		break;
	case 'r':
		printedCharCount += printReversed(args);
		break;
	case 'R':
		printedCharCount += print_rot13(args);
		break;
	default:
		printedCharCount += printChar('%');
		printedCharCount += printChar(string);
		break;
	}

	return (printedCharCount);
}
