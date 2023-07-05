#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a
 * linked list
 * @head: pointer to the head of the linked list
 * Return: the value of the head node, or 0 if the linked
 * list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
