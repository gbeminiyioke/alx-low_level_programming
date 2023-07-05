#include "lists.h"

/**
 * add_nodeint_end - this function add a new node to the
 * end of a linked list
 * @head: pointer to head of the linked list
 * @n: value to add at the end of the list
 * Return: the address of the new element , or NULL if it
 * failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *lst = malloc(sizeof(listint_t));

	temp = *head;
	if (lst == NULL)
		return (NULL);
	lst->n = n;
	lst->next = NULL;
	if (*head == NULL)
	{
		*head = lst;
		return (lst);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = lst;
	return (lst);
}
