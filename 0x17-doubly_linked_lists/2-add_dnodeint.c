#include "lists.h"

/**
 * add_dnodeint - this function adds a new
 * node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: element to add
 * Return: the address of the new element or
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *hd, *loc;

	loc = malloc(sizeof(dlistint_t));
	if (loc == NULL)
		return (NULL);
	loc->n = n;
	loc->prev = NULL;
	hd = *head;
	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}
	loc->next = hd;
	if (hd != NULL)
		hd->prev = loc;
	*head = loc;
	return (loc);
}
