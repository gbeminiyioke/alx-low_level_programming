#include "main.h"

/**
 * print_line - the function prints a straight line in the terminal
 * @n: number of times _ is printed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
