#include "main.h"

/**
 * _strpbrk - this function searches a string
 * for any set of byte
 * @s: string
 * @accept: string
 * Return: returns a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (s);
}
