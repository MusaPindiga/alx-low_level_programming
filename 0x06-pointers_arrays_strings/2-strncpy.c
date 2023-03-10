#include "main.h"

/**
 * _strncpy - copy one string into another with a defined number
 *  of charaters to be copied.
 *
 * @dest: parameter variable that the new string will be copied to.
 * @src: parameter variable that is copied from
 * @n: number of characters to be copied
 *
 * Return: return the new string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; dest[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';


	return (dest);
}
