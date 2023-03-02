#include "main.h"

/**
 * _strcat - concatenate two strings and return it.
 *
 * @dest: parameter variable that the new string will be appended to.
 * @src: parameter variable that is appended
 *
 * Return: return the new string
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j, len = 0;

	while (dest[i++])
		len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
