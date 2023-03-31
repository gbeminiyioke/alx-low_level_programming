#include "main.h"

/**
 * reverse_array - this function reverses the
 * content of an array of integers
 * @n: the number of elements of the array
 * @a: the array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
