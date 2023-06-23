#include "variadic_functions.h"

/**
 * print_all - this function prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *c, *seperator = "";
	va_list pq;

	i = 0;
	va_start(pq, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s %c", seperator, va_arg(pq, int));
				break;
				case 'i':
				printf("%s %d", seperator, va_arg(pq, int));
				break;
				case 'f':
				printf("%s %f", seperator, va_arg(pq, double));
				break;
				case 's':
				c = va_arg(pq, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s %s", seperator, c);
				break;
				default:
				i++;
				continue;
			}
			seperator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(pq);
}
