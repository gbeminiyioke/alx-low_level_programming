#include "main.h"

/**
 * print_diagsums - this function prints the su
 * of two diagonals of a square matrix of integ
 * @a: input
 * @size: input
 * Return: zero
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;
	i = 0;
	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
