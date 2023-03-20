#include <stdio.h>
/**
 * main - this program prints three digit combination numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 26; i <= 35; i++)
	{
		for (j = 26; j <= 35; j++)
		{
			for (k = 26; k <= 35; k++)
			{
				for (l = 26; l <= 35; l++)
				{
					if (((k + l) > (i + j) && k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					if (i + j + k + l == 227 && i == 35)
					{
						break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
