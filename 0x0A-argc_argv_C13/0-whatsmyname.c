#include <stdio.h>
#include "main.h"

/**
 * main - this program prints its name
 * followed by a new line
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: zero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
