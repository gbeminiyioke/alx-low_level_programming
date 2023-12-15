#include "main.h"

/**
 * flip_bits - this function returns the number of bits
 * needed to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int nm1, nm2;

	count = 0;
	nm2 = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		nm1 = nm2 >> i;
		if (nm1 & 1)
			count++;
	}
	return (count);
}
