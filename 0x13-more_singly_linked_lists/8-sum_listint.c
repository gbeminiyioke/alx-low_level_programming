#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the
 * data in a linked list
 * @head: head node in the linked list
 * Return: the sum of all data, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int i;
	listint_t *temp = head;

	i = 0;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
