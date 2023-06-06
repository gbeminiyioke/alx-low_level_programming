#include "main.h"

/**
 * array_range - this function creates an array
 * of integers
 * @min: minimun range
 * @max: maximum range
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *str, i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	size++;
	str = malloc(sizeof(int) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		str[i] = min++;
	return (str);
}
