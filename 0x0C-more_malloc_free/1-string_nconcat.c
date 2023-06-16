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
	unsigned int a1 = 0, a2 = 0, a3 = 0, a4 = 0;

	while (s1 && s1[a3])
		a3++;
	while (s2 && s2[a4])
		a4++;
	if (n < a4)
		c = malloc(sizeof(char) * (a3 + n + 1));
	else
		c = malloc(sizeof(char) * (a3 + a4 + 1));
	if (!c)
		return (NULL);
	while (a1 < a3)
	{
		c[a1] = s1[a1];
		a1++;
	}
	while (n < a4 && a1 < (a3 + n))
		c[a1++] = s2[a2++];
	while (n >= a4 && a1 < (a3 + a4))
		c[a1++] = s2[a2++];
	c[a1] = '\0';
	return (c);
}
