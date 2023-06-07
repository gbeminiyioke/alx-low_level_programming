#include "main.h"

/**
 * _pow_recursion - this function returns the
 * value of x to the power of y
 * @x: the value to raise
 * @y: the power to raise x to
 * Return: result of the raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
