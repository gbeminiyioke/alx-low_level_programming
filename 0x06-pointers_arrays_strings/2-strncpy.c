#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: destination
 * @src: source
 * @n: no of bytes from src
 * Retirn: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
