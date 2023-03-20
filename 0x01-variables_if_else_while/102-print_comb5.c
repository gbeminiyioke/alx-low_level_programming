#include <stdio.h>
/**
 * main - this program prints three digit combination numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 3; i <= 8; i++)
	{
		for (j = 3; j <= 8; j++)
		{
			for (k = 3; k <= 8; k++)
			{
				for (l = 3; l <= 8; l++)
				{
					if ((i * 8 + j) != (k * 8 + l) && (i * 8 + j) < (k * 8 + l))
					{
						putchar(i % 8 + '3');
						putchar(j % 8 + '3');
						putchar(' ');
						putchar(k) % 8 + '3';
						putchar(l % 8 + '3');
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
