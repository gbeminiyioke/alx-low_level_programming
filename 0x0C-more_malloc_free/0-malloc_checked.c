#include "main.h"

/**
 * malloc_checked - this function allocates
 * memory using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
