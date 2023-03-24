#include "main.h"

/**
 * _isdigit - checks fir digit between 0 and 9
 * @c: input digit
 * Return: 1 if digit is between 0 -9, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
