#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - this function prints anything
 * @format: list of types of arguments passed
 * to the functio
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *c, *separator = "";

	i = 0;
	va_list p;
	va_start(p, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(p, int));
				break;
				case 'i':
				printf("%s%d", separator, va_arg(p, int));
				break;
				case 'f':
				printf("%s%f", separator, va_arg(p, double));
				break;
				case 's':
				c = va_arg(p, char *);
				if (!c)
					c = "(nil)";
				printf("%s%s", separator, c);
				break;
				default:
				i++;
				continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(p);
}
