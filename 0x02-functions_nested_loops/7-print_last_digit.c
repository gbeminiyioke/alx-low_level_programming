#include "main.h"

/**
 * print_last_digit - ths function prints the last digit off a number
 * @i: acepts a integer input
 * Return: returns the last digit of the number
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = -i;
	j = i % 10;
	if (j < 0)
		j = -j;
	_putchar(i + '0');
	return (i);
}
