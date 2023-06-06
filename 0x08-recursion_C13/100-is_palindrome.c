#include "main.h"

int check_if_palind(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - this function checks if a
 * string is palindrome
 * @s: string to check
 * Return: retuns 1 if yes, 0 if no
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_if_palind(s, 0, _strlen(s)));
}

/**
 * _strlen - this function gets the lenght of
 * a string
 * @s: string to get its lenght
 * Return: string lenght
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_if_palind - checks the string for paln
 * @s: string input
 * @i: check...
 * @len: lenght
 * Return: 1 or 0 return
 */

int check_if_palind(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_if_palind(s, i + 1, len - 1));
}
