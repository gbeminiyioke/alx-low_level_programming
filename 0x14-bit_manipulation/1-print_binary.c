#include "main.h"

/**
 * print_binary - this function prints the binary representation
 * of a number
 * @n: the number whose binary is to be printed
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int nm;

	count = 0;
	for (i = 63; i >= 0; i--)
	{
		nm = n >> i;
		if (nm & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
		_putchar('0');
}
