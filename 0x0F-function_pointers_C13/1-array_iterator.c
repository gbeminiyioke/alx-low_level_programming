#include "function_pointers.h"

/**
 * array_iterator - this function executes a
 * function given as a parameter on each element
 * of an array
 * @array: an array
 * @size: no of elements in the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
