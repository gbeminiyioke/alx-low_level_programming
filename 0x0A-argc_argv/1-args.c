#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the number of
 * arguments passed to it then new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
