#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list from the memory
 * @head: the list be freed
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *nextNode;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
