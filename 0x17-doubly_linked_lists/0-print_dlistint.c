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
	int nodeCount = 0;

	while (h)
	{
		if (h->n != NULL)
			printf("%d \n", h->n);
		else
			return;
		nodeCount++;
		h = h->next
	}
	return (nodeCount);
}
