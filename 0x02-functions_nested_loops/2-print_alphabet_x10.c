#include "main.h"

/**
 * print_alphabet_x10 - this function prints 10 times the alphabet
 * in lowercase followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
