#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * check_if_int - this function checks if the
 * entry is an integer
 * @c: array c
 * Return: 0.
 */

int check_if_int(char *c)
{
	unsigned int i = 0;

	while (i < strlen(c))
	{
		if (!isdigit(c[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - this program adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, sum_total, strin;

	i = 1;
	sum_total = 0;
	while (i < argc)
	{
		if (check_if_int(argv[i]))
		{
			strin = atoi(argv[i]);
			sum_total += strin;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum_total);
	return (0);
}
