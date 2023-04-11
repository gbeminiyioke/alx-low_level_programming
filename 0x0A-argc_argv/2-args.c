#include <stdio.h>
#include "main.h"

/**
 * main - this program prints all arguments
 * it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Returm: Zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
