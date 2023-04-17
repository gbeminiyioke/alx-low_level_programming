#include "main.h"
#define ERR_MSG "Error"

/**
 * error - this function will handle errors
 * Return: returns nothing
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_a_digit - this function check entry if it
 * contains a alphabet
 * @c: character to evaluate
 * Return: 0 if alphabet else 1.
 */

int is_a_digit(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - this function gets the lenght of a
 * string input
 * @s: input string
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - this function multiplies 2 positive
 * numbers
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	int a1, a2, i, j, k, num_len, num_len1, num_len2, *tot;
	char *c1, *c2;

	c1 = argv[1];
	c2 = argv[2];
	if (argc != 3 || !is_a_digit(c1) || !is_a_digit(c2))
		error();
	num_len1 = _strlen(c1);
	num_len2 = _strlen(c2);
	num_len = num_len1 + num_len2 + 1;
	tot = malloc(sizeof(int) * num_len);
	if (!tot)
		return (1);
	for (j = 0; j <= num_len1 + num_len2; j++)
		tot[j] = 0;
	for (num_len1 = num_len1 -1; num_len1 >= 0; num_len1--)
	{
		a1 = c1[num_len1] - '0';
		k = 0;
		for(num_len2 = _strlen(c2) - 1; num_len2 >= 0; num_len2--)
		{
			a2 = c2[num_len2] - '0';
			k += tot[num_len1 + num_len2 + 1] + (a1 * a2);
			tot[num_len1 + num_len2 + 1] = k % 10;
			k/= 10;
		}
		if (k > 0)
			tot[num_len1 + num_len2 + 1] += k;
	}
	for (j = 0; j < num_len - 1; j++)
	{
		if (tot[j])
			i = 1;
		if (i)
			_putchar(tot[j] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(tot);
	return (0);
}
