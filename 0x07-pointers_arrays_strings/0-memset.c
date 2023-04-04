#include "main.h"

/**
 * _memset - this function fills memory with a
 * constant byte
 * @s: memory address
 * @b: constant byte to fill memory
 * @n: number of bytes to fill
 * Return: pointer to memory area b
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
