#include "main.h"

/**
 * swap_int - this function swaps the value of
 * two integers
 * @a: first integer to swa
 * @b: second integer to swap
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
