#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size
 *	bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of elements in the array
 * @size: size of each elements
 *
 * Return: NULL on failure, otherwise pointer to the allocated memory.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(size) * nmemb);

	if (array == NULL)
		return (NULL);

	return (array);
}
