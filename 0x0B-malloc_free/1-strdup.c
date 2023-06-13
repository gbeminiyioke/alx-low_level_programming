#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function return a pointer to
 * a newly allocated space in memory which
 * contains a copy of the string given as a
 * parameter
 * @str: string
 * Return: the copy of the string or NULL
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		c[j] = str[j];
	return (c);
}
