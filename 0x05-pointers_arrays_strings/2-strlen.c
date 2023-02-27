#include "main.h"

/**
 * _strlen - find the length of a given string.
 *
 * @s: variable parameter of pointer type.
 *
 * Return: return the length of the string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
