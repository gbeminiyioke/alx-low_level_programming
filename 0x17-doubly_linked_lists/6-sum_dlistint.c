#include "lists.h"

/**
 * sum_dlistint - this function returns the
 * sum of all the data (n) of a doubly linked list
 * @head: head of the list
 * Return: sum of the data or 0 if the list
 * is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			tot += head->n;
			head = head->next;
		}
	}
	return (tot);
}
