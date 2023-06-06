#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: input string
 * @f: pointer to a finction
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	return;
	f(name);
}
