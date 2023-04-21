#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function returns the sum
 * of all its parameters
 * @n: number of parameters
 * @... variable number of parameters
 * Return: 0 or the sum of all tje parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, tot = 0;
	
	va_start(ap, n);
	for (i = 0; i < n; i++)
		tot += va_arg(ap, int);
	va_end(ap);
	return (tot);
}
