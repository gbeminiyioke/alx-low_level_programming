#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
