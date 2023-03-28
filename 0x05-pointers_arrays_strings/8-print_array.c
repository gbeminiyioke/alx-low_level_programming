#include "main.h"

/**
 * print_array -this function prints n elements
 * of an array of integers followed by a new
 * line
 * @a: array name
 * @n: number of elements of the artay to
 * be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
