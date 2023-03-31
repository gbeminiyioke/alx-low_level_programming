#include "main.h"

/**
 * leet - this function encodes a string to
 * 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, count = 0;
	int low_case[] = {97, 101, 111, 116, 108};
	int upp_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_case[i] || *(s + count) == upp_case[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
