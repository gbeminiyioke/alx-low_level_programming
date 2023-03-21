#include "main.h"

/**
 * _isalpha - this function checks for alphabetic character
 * @c: - a single character input
 * Return: 1 if c is a letter, lowercase or uppercase, 0 therwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (C <= 'Z')))
		return (1);
	else
		return (0);
}
