#include "main.h"
#include <stdlib.h>

/**
 * *create_array - this function creates array and initialise it
 *		with a specific character
 * @size : size of the array to be created
 * @c : character that the array is initialised with
 *
 * Return: return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int index = 0;

	if (size == 0)
		return (NULL);

	while (index < size)
	{
		arr[index] = c;
		index++;
	}

	return (arr);
}
