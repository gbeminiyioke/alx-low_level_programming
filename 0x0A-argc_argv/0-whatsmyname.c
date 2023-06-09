#include <stdio.h>
#include "main.h"

/**
 * main - this function prints its name
 * followed by a new line
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
