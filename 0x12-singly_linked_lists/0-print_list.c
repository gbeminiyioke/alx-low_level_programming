#include "lists.h"

/**
 * print_list - this function prints all the elements of a list
 * @h: pointer to the list list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
