#include "main.h"

/**
 * _strncat - concatenate two strings and return it.
 *
 * @dest: parameter variable that the new string will be appended to.
 * @src: parameter variable that is appended
 * @n: number of characters to be appended
 *
 * Return: return the new string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, len = 0;

	while (dest[i++])
		len++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[len] = src[j];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
