#include "lists.h"
/**
 * insert_dnodeint_at_index - insert an element in the list a given position
 * @h: The list
 * @idx: index of the list where the new will be inserted
 * @n: Element to be inserted
 * Return: The address of the new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			newNode->prev = current;
			newNode->next = current->next;

			if (current->next != NULL)
				current->next->prev = newNode;

			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		count++;
	}
	free(newNode);
	return (NULL);
}
