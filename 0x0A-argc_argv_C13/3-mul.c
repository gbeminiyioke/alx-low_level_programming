#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this program multiiplies 2 numbers
 * @argc: number of argumments
 * @argv: array of arguments
 * Return: zero or one
 */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		total = i * j;
		printf("%d\n", total);
		return (0);
	}
}
