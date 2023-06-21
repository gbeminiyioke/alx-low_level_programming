#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - this function returns the
 * sum of two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function returns the
 * difference of two numbers
 * @a: first number
 * @b: second number
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function returns the product
 * of two numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function returns the division
 * between two numbers
 * @a: first number
 * @b: second number
 * Return: the division between a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this function returns the remainder
 * from the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder from the division of a
 * and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
