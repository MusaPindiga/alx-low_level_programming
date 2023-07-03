#include "lists.h"
#include "stdio.h"
#include <string.h>
/**
 * *add_node - add new node at the beginnig of the list
 * @head: points to the head of the list
 * @str: string to be added to the list
 *
 * Return: NULL if failed, address of the new element otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
