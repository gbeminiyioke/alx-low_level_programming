#include <stdio.h>

/**
 * main - this function prints 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, k, new;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		new = j + k;
		j = k;
		k = new;
	}
	return (0);
}
