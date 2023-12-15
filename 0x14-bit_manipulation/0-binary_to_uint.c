#include "main.h"

/**
 * binary_to_uint - this function will convert a
 * binary number to an unsigned int
 * @b: a pointer toa string of 0 and 1
 * Return: the converted number, or zero (0).
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int nm;

	nm = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		nm = 2 * nm + (b[i] - '0');
	}
	return (nm);
}
