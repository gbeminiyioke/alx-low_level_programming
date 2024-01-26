#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for,
 * starting from 0
 * Return: nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_l;
	unsigned int sz;

	sz = 0;
	if (head == NULL)
		return (NULL);
	new_l = head;
	while (new_l)
	{
		if (index == sz)
			return (new_l);
		sz++;
		new_l = new_l->next;
	}
	return (NULL);
}
