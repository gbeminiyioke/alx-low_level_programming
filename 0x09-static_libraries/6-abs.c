#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer
 * @i: accepts an interger input
 * Return: returns the absolute value of i
 */

int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
