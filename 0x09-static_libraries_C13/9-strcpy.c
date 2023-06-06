#include "main.h"

/**
 * char *_strcpy - this function copies the
 * string pointed to by src, including the
 * terminating null byte (\0)
 * @dest: location to copy to
 * @src: location to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
