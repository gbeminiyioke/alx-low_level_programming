#include "main.h"
#include <stdlib.h>

/**
 * no_of_words - this functions gets the number
 * of words in the supplied string
 * @s: the supplied string
 * Return: number of words
 */

int no_of_words(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}

/**
 * strtow -this function splits a string into
 * words
 * @str: array of strings to split
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char *c, **arr;
	int i, j, k, l, m, n, o;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	n = 0;
	o = 0;

	while (*(str + k))
		k++;
	l = no_of_words(str);
	if (l == 0)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (l + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= k; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				o = i;
				c = (char *) malloc(sizeof(char) * (m + 1));
				if (c == NULL)
					return (NULL);
				while (n < o)
					*c = '\0';
				arr[j] = c - m;
				j++;
				m = 0;
			}
		}
		else if (m++ == 0)
			n = i;
	}
	arr[j] = NULL;
	return (arr);
}
