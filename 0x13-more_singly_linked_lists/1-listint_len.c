#include "lists.h"
#include <stdio.h>
/**
 * listint_len - finds the number of elements of a list
 *
 * @h: pointer to the head of listint_t list
 *
 * Return: number of the list in listint_t
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
