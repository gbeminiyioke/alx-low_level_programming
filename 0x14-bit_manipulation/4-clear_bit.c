#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0
 * at a given index
 * @n: this is the pointer to the numebr
 * @index: this is the index of the bit to set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
