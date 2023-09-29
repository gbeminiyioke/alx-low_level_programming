#include "main.h"

/**
 * flip_bits - this function returns the number of bits needed to
 * flip to get from number to number
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt, i;
	unsigned long int num, num2;

	cnt = 0;
	num2 = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		num = num2 >> i;
		if (num & 1)
			cnt++;
	}
	return (cnt);
}
