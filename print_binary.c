#include "main.h"
int printBinary(va_list args)
{
    int isFirstNonZeroBitFound = 0;
    int characterCount = 0;
    int i, bitmask = 1, binaryDigit;
    unsigned int number = va_arg(args, unsigned int);
    unsigned int bitCheck;

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

    return characterCount;
}

