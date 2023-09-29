#include "main.h"

/**
 * print_binary - this function prints a binary representation
 * of a number
 * @n: the number whose binary is to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int cnt, i;

	cnt = 0;
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
		{
			_putchar('0');
		}
	}
	if (!cnt)
		_putchar('0');
}
