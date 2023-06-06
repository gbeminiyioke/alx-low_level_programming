#include "main.h"

/**
 * _isupper - converts to uppercase chatacters
 * @c: character to convert
 * Return: zero or one
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
