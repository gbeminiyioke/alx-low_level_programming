#include "lists.h"

/**
 * add_node_end - this function adds a new node at the end of
 * a list
 * @head: the head of the linked list
 * @str: string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *list;
	list_t *templist = *head;

	i = 0;
	while (str[i])
		i++;
	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->len = i;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (templist->next)
		templist = templist->next;
	templist->next = list;
		return (list);
}
