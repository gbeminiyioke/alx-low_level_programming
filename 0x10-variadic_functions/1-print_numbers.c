#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this function prints numbers
 * followed by a new line
 * @separator: string to be printed between nos
 * @n: number of integers passed to the function
 * @...: variable number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int i;

	va_start(ints, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ints, unsigned int));
		if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ints);
}
