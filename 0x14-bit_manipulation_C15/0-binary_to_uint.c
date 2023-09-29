#include "main.h"

/**
 * binary_to_uint - this function converts a binary number
 * to an unsigned int
 * @b: string of 0 and 1
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
