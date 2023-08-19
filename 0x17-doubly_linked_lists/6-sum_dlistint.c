#include "lists.h"

/**
 * sum_dlistint - finds the sum all the elements in the list
 * @head: The list
 *
 * Return: summation of the list, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
