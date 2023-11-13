#include "main.h"

/**
 * print_c - prints a char
 * @c: the char to be printed
 * Return: value of the printed char
 */
int print_c(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
