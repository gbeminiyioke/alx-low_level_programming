#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node
 * of a list
 * @head: head node of the linked list
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	i = 0;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
