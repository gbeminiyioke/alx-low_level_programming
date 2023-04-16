#include "main.h"

/**
 * string_nconcat - this function concatenate
 * two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes
 * Return: pointer to result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *c;
	unsigned int a1 = 0, a2 = 0, a3 = 0;

	if (s1 == NULL)
		a1 = 0;
	else
		for (a1 = 0; s1[a1]; a1++)
	if (s2 == NULL)
		a2 = 0;
	else
	{
		for (a2 = 0; s2[a2]; a2++)
			;
	}
	if (a2 > n)
		a2 = n;
	c = malloc(sizeof(char) * (a1 + a2 + 1));
	if (c == NULL)
		return (NULL);
	for (a3 = 0; a3 < a1; a3++)
		c[a3] = s1[a3];
	for (a3 = 0; a3 < a2; a3++)
		c[a3 + a1] = s2[a1];
	c[a1 + a2] = '\0';
	return (c);
}
