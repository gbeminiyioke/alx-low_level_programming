#include "main.h"

/**
 * print_rev - this function prints a string
 * in reverse followed by a new line
 * @s:string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
