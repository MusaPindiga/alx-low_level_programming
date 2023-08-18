#include "lists.h"

/**
 * *add_dnodeint_end - add an element at the end of the list
 *
 * @head: the list
 * @n: an element to be added
 *
 * Return: address of the new element, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = newNode;
		newNode->prev = current;
	}

	return (newNode);
}
