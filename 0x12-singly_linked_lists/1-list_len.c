#include "lists.h"
#include <stdio.h>

/**
 * list_len - count the number of elements in a list
 *
 * @h: the list of list_t
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
