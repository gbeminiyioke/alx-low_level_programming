#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array
 * of chars and initializes it with a special
 * char
 * @size: size of the array
 * @c: character
 * Return: pointer to the array or NULL if it
 * fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
