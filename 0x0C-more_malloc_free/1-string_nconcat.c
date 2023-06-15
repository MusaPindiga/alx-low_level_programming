#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *			most n inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: return NULL on failure, otherwise pointer to the
 *	newly allocated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index = 0, len = n;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[index++])
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index] != '\0'; index++)
		concat_str[len++] = s1[index];

	for (index = 0; s2[index] != '\0' && index < n; index++)
		concat_str[len++] = s2[index];

	concat_str[len] = '\0';

	return (concat_str);

}
