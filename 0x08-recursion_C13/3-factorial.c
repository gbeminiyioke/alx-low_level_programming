#include "main.h"

/**
 * factorial - this functions returns the
 * factorial of a given number
 * @n: the number to find its factorial
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}