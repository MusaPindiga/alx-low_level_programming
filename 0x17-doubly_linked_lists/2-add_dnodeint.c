#include "lists.h"

/**
 * *add_dnodeint - add a node at the beginning of the list
 *
 * @head: address of the head of the list
 * @n: new element to be added to the list
 *
 * Return: The addres of the new alement, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
