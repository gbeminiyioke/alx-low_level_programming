#include "lists.h"

/**
 * delete_dnodeint_at_index - this function deletes
 * the node at a specified index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the node to be deleted, starts
 * at zero 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node_1, *node_2;

	node_1 = *head;
	if (node_1 != NULL)
		while (node_1->prev != NULL)
			node_1 = node_1->prev;
	i = 0;
	while (node_1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				node_2->next = node_1->next;

				if (node_1->next != NULL)
					node_1->next->prev = node_2;
			}
			free(node_1);
			return (1);
		}
		node_2 = node_1;
		node_1 = node_1->next;
		i++;
	}
	return (-1);
}
