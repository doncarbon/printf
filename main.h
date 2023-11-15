#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int printChar(char c);
int printString(char *str);
int handleSpecifier(char string, va_list args);
int printDecimal(va_list args);
int printInteger(va_list args);
int printBinary(va_list args);
int printReversed(va_list args);
int printRot13(va_list args);

#endif
