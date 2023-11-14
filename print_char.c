#include "main.h"

/**
 * printChar - prints a char
 * @c: the char to be printed
 * Return: value of the printed char
 */
int printChar(char c)
{
	write(1, &c, 1);
	return (1);
}


