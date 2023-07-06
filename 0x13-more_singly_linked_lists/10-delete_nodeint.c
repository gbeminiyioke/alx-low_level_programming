#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes the node
 * at a specified index of a linked list
 * @head: pointer to the head node of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if successful, or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *lst = NULL;
	listint_t *temp = *head;

	i = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp != NULL || (temp->next) != NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	lst = temp->next;
	temp->next = lst->next;
	free(lst);
	return (1);
}
