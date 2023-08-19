#include "lists.h"

/**
 * delete_dnodeint_at_index - delete an element from a list at a given index
 * @head: The list
 * @index: position of the element to be removed
 *
 * Return: 1 if succeed, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
