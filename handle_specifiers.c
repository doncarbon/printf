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
	default:
		printedCharCount += printChar('%');
		printedCharCount += printChar(string);
		break;
	}

	return (printedCharCount);
}
