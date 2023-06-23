#include "variadic_functions.h"

/**
 * sum_them_all - this function returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0 or the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i, tot;

	tot = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ad, n);
		for (i = 0; i < n; i++)
			tot += va_arg(ad, int);
		va_end(ad);
		return (to);
	}
}
