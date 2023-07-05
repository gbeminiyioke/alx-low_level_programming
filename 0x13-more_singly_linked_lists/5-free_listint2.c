#include "lists.h"

/**
 * free_listint2 - this function frees a list and then
 * sets the head to NULL
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
