#include "main.h"
#include <stdlib.h>

/**
 * *create_array - this function creates array and initialise it
 *		with a specific character
 * @size : size of the array to be created
 * @c : character that the array is initialised with
 *
 * Return: return NULL if size == 0 or the funtion fails
 *	otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	while (index < size)
	{
		array[index] = c;
		index++;
	}

	return (array);
}
