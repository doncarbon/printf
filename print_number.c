#include "main.h"
/**
 * printInteger - prints an integer with printChar to stdout
 * @args: argument to print
 * Return: integer
 */
int printInteger(va_list args)
{
	int inputNumber = va_arg(args, int);
	int tempNum, lastDigit = inputNumber % 10, digit, placeValue = 1;
	int characterCount = 1;

	inputNumber = inputNumber / 10;
	tempNum = inputNumber;

	if (lastDigit < 0)
	{
		printChar('-');
		tempNum = -tempNum;
		inputNumber = -inputNumber;
		lastDigit = -lastDigit;
		characterCount++;
	}

	if (tempNum > 0)
	{
		while (tempNum / 10 != 0)
		{
			placeValue = placeValue * 10;
			tempNum = tempNum / 10;
		}

		tempNum = inputNumber;
		while (placeValue > 0)
		{
			digit = tempNum / placeValue;
			printChar(digit + '0');
			tempNum = tempNum - (digit * placeValue);
			placeValue = placeValue / 10;
			characterCount++;
		}
	}

	printChar(lastDigit + '0');

	return (characterCount);
}


/**
 * printDecimal - prints decimal number with printChar to stdout
 * @args: argument to print
 * Return: integer
 */
int printDecimal(va_list args)
{
	int inputNumber = va_arg(args, int);
	int tempNum, lastDigit = inputNumber % 10, digit;
	int characterCount = 1;
	int placeValue = 1;

	inputNumber = inputNumber / 10;
	tempNum = inputNumber;


	if (lastDigit < 0)
	{
		printChar('-');
		tempNum = -tempNum;
		inputNumber = -inputNumber;
		lastDigit = -lastDigit;
		characterCount++;
	}

	if (tempNum > 0)
	{
		while (tempNum / 10 != 0)
		{
			placeValue = placeValue * 10;
			tempNum = tempNum / 10;
		}

		tempNum = inputNumber;
		while (placeValue > 0)
		{
			digit = tempNum / placeValue;
			printChar(digit + '0');
			tempNum = tempNum - (digit * placeValue);
			placeValue = placeValue / 10;
			characterCount++;
		}
	}

	printChar(lastDigit + '0');

	return (characterCount);
}


