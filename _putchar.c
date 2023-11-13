#include "main.h"

/**
 * _putchar - prints a char
 * @c: the char to be printed
 * Return: value of the printed char
 */
int c_putchar(char c)
{
	return (write(1, &c, 1));
}
