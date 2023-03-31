#include "main.h"

/**_strcat - this function concertenates two
 * strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}

	dest[count1] = '\0';
	return (dest);
}
