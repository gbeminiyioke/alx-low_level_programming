#include "lists.h"

/**
 * listint_len - this function returns the number of elements
 * in a linked list listint_t
 * @h: linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t lst;

	lst = 0;
	while (h)
	{
		lst++;
		h = h->next;
	}
	return (lst);
}
