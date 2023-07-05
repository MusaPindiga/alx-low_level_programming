#include "lists.h"

/**
 * free_listint - free the allocated memory to the list
 *
 * @head: points to the head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
