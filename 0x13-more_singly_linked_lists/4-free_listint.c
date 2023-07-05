#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: the head of the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
