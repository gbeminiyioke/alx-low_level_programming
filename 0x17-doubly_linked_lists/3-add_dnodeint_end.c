#include "lists.h"

/**
 * add_dnodeint_end - this function adds a new
 * node at the end of a dlistint_t list
 * @head: head of the list
 * @n: element to aff
 * Return: the address of the new element or
 * NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd, *loc;

	loc = malloc(sizeof(dlistint_t));
	if (loc == NULL)
		return (NULL);
	loc->n = n;
	loc->next = NULL;
	hd = *head;
	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = loc;
	}
	else
	{
		*head = loc;
	}
	loc->prev = hd;
	return (loc);
}
