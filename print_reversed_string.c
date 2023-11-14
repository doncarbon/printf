#include "main.h"
#include <string.h>

/**
 * printReversed - prints the reversed string
 * @args: argument to print
 * Return: number of characters printed
 */
int printReversed(va_list args)
{
    char *str = va_arg(args, char *);
    int length = strlen(str);
    int characterCount = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        printChar(str[i]);
        characterCount++;
    }

    return characterCount;
}

