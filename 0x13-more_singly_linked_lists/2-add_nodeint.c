#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the
 * beginning of linked list
 * @head: pointer to the first node of the linked
 * list
 * @n: value to insert in the new node
 * Return: the address of the new element, or NULL
 * if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	lst = malloc(sizeof(listint_t));
	if (!lst)
		return (NULL);
	lst->n = n;
	lst->next = *head;
	*head = lst;
	return (lst);
}
