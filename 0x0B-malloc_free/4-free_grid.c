#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimensi
 * onal grid previously created by alloc_grid
 * @grid: 2 dimenssional grid
 * @height: grid height
 * Return: void
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
