#include "lists.h"

/**
 * get_dnodeint_at_index - find an element at a given position in
 *			a list
 * @head: This list to traverse through
 * @index: index of the element
 *
 * Return: The node at the given position, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
