#include "main.h"

/**
 * prime_number - checks if the passed integer
 * is a prime number
 * @i: integer passed
 * @j: checker
 * Return: 1 if number is prime, 0 if not.
 */

int prime_number(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (prime_number(i, j - 1));
}

/**
 * is_prime_number - this function returns
 * 1 if the input integer is a prime number
 * @n: input integer
 * Return: 1 if n is a prime number else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
