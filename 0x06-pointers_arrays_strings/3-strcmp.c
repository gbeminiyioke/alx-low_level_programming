#include "main.h"

/**
 * _strcmp -  this function compares two string
 * @s1: string one
 * @s2: stringg two
 * Return: compared strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
