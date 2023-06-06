#include "main.h"

/**
 * _strchr - this finction locates a character
 * in a strng
 * @s: the string
 * @c: character to locate
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
