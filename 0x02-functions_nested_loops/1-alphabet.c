#include "main.h"

/**
 * print_alphabet - thsi function prints the alphabet in lowercare
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
