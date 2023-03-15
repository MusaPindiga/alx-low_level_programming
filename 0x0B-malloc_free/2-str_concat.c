#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenate two strings in to a
 *		newly allocated memory
 * @s1: The first string characters
 * @s2: The second string characters
 *
 * Return: return NULL on failure, otherwise pointer to the
 *	newly allocated string.
 */

char *str_concat(char *s1, char *s2)
{
	int index, len = 0, concat_len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		concat[concat_len++] = s1[index];

	for (index = 0; s2[index] != '\0'; index++)
		concat[concat_len++] = s2[index];

	return (concat);
}
