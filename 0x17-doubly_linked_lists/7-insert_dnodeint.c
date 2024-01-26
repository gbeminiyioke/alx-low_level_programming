#include "lists.h"

/**
 * insert_dnodeint_at_index - this function
 * inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL
 * if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *hd, *loc;

	loc = NULL;
	if (idx == 0)
		loc = add_dnodeint(h, n);
	else
	{
		hd = *h;
		i = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (i == idx)
			{
				if (hd->next == NULL)
					loc = add_dnodeint_end(h, n);
				else
				{
					loc = malloc(sizeof(dlistint_t));
					if (loc != NULL)
					{
						loc->n = n;
						loc->next = hd->next;
						loc->prev = hd;
						hd->next->prev = loc;
						hd->next = loc;
					}
				}
				break;
			}
			hd = hd->next;
			i++;
		}
	}
	return (loc);
}
