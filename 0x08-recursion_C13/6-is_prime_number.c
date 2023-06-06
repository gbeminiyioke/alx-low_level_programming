#include "main.h"

int prime_number(int i, int j);

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

/**
 * prime_number - checks if the passed integer
 * is a prime number
 * @i: integer passed
 * @j: checker
 * Return: 1 if number os prime, 0 if it is not
 */

int prime_number(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (prime_number(i, j - 1));
}
