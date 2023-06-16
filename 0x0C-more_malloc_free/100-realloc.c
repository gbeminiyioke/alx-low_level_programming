#include "main.h"

/**
 * _realloc - this function reallocates memory
 * block using malloc and free
 * @ptr: pointer
 * @old_size: size of the allocated memory
 * @new_size: size of the new memort block
 * Return: pointer to new
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c, *oc = ptr;
	unsigned int i, j;

	j = new_size;
	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		c[i] = oc[i];
	free(ptr);
	return (c);
}
