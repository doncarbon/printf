#include "main.h"

/**
 * _putchar - prints a char
 * @c: the char to be printed
 * return: value of the printed char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
