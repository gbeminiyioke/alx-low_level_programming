#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: string input
 * @needle: string input
 * Return: Always zero
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = needle;
		char *a = haystack;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
