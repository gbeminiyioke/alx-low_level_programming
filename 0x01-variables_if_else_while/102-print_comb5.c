#include <stdio.h>
/**
 * main - this program prints three digit combination numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 3; i <= 19; i++)
	{
		for (j = 3; j <= 19; j++)
		{
			for (k = 3; k <= 19; k++)
			{
				for (l = 3; l <= 19; l++)
				{
					if ((i * 19 + j) != (k * 19 + l) && (i * 19 + j) < (k * 19 + l))
					{
						putchar(i % 19 + '3');
						putchar(j % 19 + '3');
						putchar(' ');
						putchar(k) % 19 + '3';
						putchar(l % 19 + '3');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
