#include "lists.h"

/**
 * list_len - this function returns the number of elements in a
 * linked list
 * @h: pointer to the list list_t
 * Return: the number of elements in the list list_t
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
