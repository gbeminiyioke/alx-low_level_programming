#include "main.h"

/**
 * get_bit - this function returns the value of a bit at
 * a given index
 * @n: number
 * @index: index starting from 0.
 * Return: the value of the bit at index or -1 if
 * an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
