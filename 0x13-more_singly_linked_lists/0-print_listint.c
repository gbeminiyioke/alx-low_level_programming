#include "lists.h"

/**
 * print_listint - this function prints all the elements
 * of a list listint_t
 * @h: list of elements to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t lst;

	lst = 0;
	while (h)
	{
		printf("%d\n", h->n);
		lst++;
		h = h->next;
	}
	return (lst);
}
