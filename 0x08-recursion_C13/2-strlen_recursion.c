#include "main.h"

/**
 * _strlen_recursion - this function prints the
 * lenght of a string
 * @s: the string whose lenght is to determined
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
