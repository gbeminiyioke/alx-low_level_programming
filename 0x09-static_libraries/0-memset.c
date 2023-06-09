#include "main.h"

/**
 * _memset - fills a block of memory with a
 * specific value
 * @s: starting address of memory to be filled
 * @b: dedired value
 * @n: number of bytes
 * Return: array with new values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
