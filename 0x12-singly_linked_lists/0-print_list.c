#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the list of list_t
 * @h: list of type list_t to be printed
 * Return: print [0] (nil) if str (of list_t) == NULL
 *		number of nodes in list_t otherwise.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s \n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
