#include "lists.h"

/**
 * print_list - this function prints all the elements
 * of a list listint_t
 * @h: list of elements to print
 * Return: the number of nodes
 */
	
size_t print_listint(const listint_t *h)
{
	size_t list;

	list = 0;
	while (h)
	{
		printf("%d\n", h->n);
		list++;
		h = h->next;
	}
	return (list);
}
