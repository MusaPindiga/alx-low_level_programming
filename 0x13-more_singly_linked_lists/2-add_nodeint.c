#include "lists.h"
#include "stdio.h"
#include <string.h>
/**
 * *add_nodeint - add new node at the beginnig of the list
 * @head: points to the head of the list
 * @n: integer to be added to the list
 *
 * Return: NULL if failed, address of the new element otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
