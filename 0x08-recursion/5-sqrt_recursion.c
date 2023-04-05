#include "main.h"

/**
 * natural_sqrt - this function finds the
 * natural square root of a number
 * @i: number to find its square root
 * @j: number to loop through
 * Return: the square root
 */

int natural_sqrt(int i, int j)
{
	if (j * j == i)
		return (1);
	if (j * j > i)
		return (j);
	return(natural_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - this function returns the
 * natural square of a number
 * @n: the number to find its square root
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(natural_sqrt(n, 0));
}
