#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int nodeCount = 0;

	while (current != NULL)
	{
		printf("%d \n", current->n);
		nodeCount++;
		current = current->next;
	}
	return (nodeCount);
}
