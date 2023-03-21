#include "main.h"

/**
 * times_table - this function prints the 9 times table starting with 0
 * x = row, y = column, i = digit
 * Return: 9 times table
 */

void times_table(void)
{
	int x, y, i;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (y = 1; y <= 9; y++)
		{
			i = (x * y);
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
