#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function the show the result
 * of the chosen operation
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Return: result
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int int1, int2;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int1 = atoi(argv[1]);
	c = argv[2];
	int2 = atoi(argv[3]);
	if (c[1] != '\0' || get_op_func(c) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' && int2 == 0 || *c == '%' && int2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(int1, int2));
	return (0);
}
