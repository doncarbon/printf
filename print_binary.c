#include "main.h"

/**
 * printBinary - prints an unsigned integer in binary
 * @args: argument to print
 * Return: number of characters printed
 */
int printBinary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int characterCount = 0;
    int binary[32];  // assuming an int is 32 bits

    if (num == 0)
    {
        printChar('0');
        return 1;
    }

    for (int i = 0; num > 0; i++)
    {
        binary[i] = num % 2;
        num = num / 2;
    }

    for (int j = 31; j >= 0; j--)
    {
        printChar(binary[j] + '0');
        characterCount++;
    }

    return characterCount;
}

