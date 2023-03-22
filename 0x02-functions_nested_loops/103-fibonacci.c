#include <stdio.h>

/**
 * main - this functin finds and prints the sum of the even value
 * numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int j, k, sum, nxt;
	int i;

	sum = 0;
	j = 1;
	k = 2;
	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		nxt = j + k;
		j = k;
		k = nxt;
	}
	printf("%lu\n", sum);
	return (0);
}
