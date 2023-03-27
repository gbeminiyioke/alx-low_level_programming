#include "main.h"

/**
 * puts2 - this function prints every other
 * character of a string, starting with the
 * first character, followed by a new line
 * @str: input string
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
