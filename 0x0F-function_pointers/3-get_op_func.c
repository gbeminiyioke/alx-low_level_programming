#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - this function selects the
 * correct function to perform the operation
 * asked by the user
 * @s: the operator passed as argument to the
 * program
 * Return: a pointer to the function that
 * corresponds to the operator given as
 * parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int n;

	n = 0;
	while (ops[n].op != NULL && *(ops[n].op) != *s)
		n++;
	return (ops[n].f);
}
