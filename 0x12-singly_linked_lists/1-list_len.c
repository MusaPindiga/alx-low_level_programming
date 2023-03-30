#include "lists.h"

/**
 * list_len - finds the number of elements in a list
 *
 * @h: the list to finds it's length
 *
 * Return: Number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t no_of_elements = 0;

	while (h)
	{
		no_of_elements++;
		h = h->next;
	}
	return (no_of_elements);
}
