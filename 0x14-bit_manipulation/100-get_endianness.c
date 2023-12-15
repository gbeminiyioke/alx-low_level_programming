#include "main.h"

/**
 * get_endianness - this function checks the endianness
 * Return: 0 if big endian, 1 iflittle endian
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
