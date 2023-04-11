#include <stdio.h>
#include "main.h"

/**
 * main - this program prints the number of
 * arguments passed to it then new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
