#include "lists.h"

/**
 * free_list - this function frees a linked list
 * @head: pointer to the list to be freed
 */

void free_list(list_t *head)
{
	list_t *templist;

	while (head)
	{
		templist = head->next;
		free(head->str);
		free(head);
		head = templist;
	}
}
