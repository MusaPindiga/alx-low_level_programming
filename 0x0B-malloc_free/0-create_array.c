#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create and allocate memory to array
 *		of characters
 * @size: size of the array
 * @c: character to create the array with
 *
 * Return: pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *characters;

	if (size == 0)
		return (NULL);

	characters = malloc(sizeof(char) * size);

	if (characters == 0)
		return (NULL);

	while (i < size)
	{
		characters[i] = c;
		i++;
	}

	return (characters);
}
