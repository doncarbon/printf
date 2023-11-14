#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *str);
int specifiers(char string, va_list args);

#endif
