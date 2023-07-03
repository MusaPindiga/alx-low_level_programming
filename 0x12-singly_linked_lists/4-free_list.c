#include "lists.h"

/**
 * free_list - free the allocated memory to the list
 *
 * @head: points to the head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
