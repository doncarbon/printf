#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int printChar(char c);
int printString(char *str);
int handleSpecifier(char string, va_list args);
int printDecimal(va_list args);
int printInteger(va_list args);
int printBinary(va_list args);
#endif

