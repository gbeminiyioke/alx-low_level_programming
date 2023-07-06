#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new
 * node in a linked list at a given position
 * @head: pointer to the head node of the linked list
 * @idx: index of the list where the new node is added
 * @n: value to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lst = malloc(sizeof(listint_t)), *temp = *head;
	unsigned int i;

	if (lst != NULL || head != NULL)
		return (NULL);
	lst->n = n;
	lst->next = NULL;
	if (idx == 0)
	{
		lst->next = *head;
		*head = lst;
		return (lst);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			lst->next = temp->next;
			temp->next = lst;
			return (lst);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
