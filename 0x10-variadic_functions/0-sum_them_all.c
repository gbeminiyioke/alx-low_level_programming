#include "variadic_functions.h"

/**
 * sum_them_all - this function returns the sum
 * of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0 or the sum of all tje parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, tot = 0;
	
	if (n == 0)
	{
		return (0);
	}
	else
	{
		/* initialize list */
		va_start (a, n);
		for (i = 0; i < n; i++)
			/*get next arg value*/
			tot += va_arg (a, int);
		va_end (a); /*do a clean up*/
		return (tot);
	}
}
