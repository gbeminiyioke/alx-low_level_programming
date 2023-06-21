#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function shows the result of the
 * chosen operation
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Return: result
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2; //declare int variables
	char *op; //pointer to char

	if (argc != 4)
	{
		//print error & exit with 98
		printf("Error\n");
		exit(98);
	}
	//convert operator string to int
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		//if operator is not valid
		//exit with status 99.
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
