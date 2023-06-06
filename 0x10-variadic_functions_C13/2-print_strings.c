#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function prints strings
 * followed by a new lin
 * @separator: string to be printed between
 * strings
 * @n: number of strings passed to the function
 * @...: variable number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringlist;
	char *c;
	unsigned int i;

	va_start(stringlist, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(stringlist, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stringlist);
}
