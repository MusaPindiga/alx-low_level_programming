#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  funtion that returns duplicate of a given string in
 *		a newly allocated memory
 * @str: parameter string to duplicated
 *
 * Return: NULL if str == NULL or there is insufficient memory
 *	otherwise, pointer to the duplicate string
 */

char *_strdup(char *str)
{
	int i, len = 1;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	string = malloc(sizeof(char) * len);

	if (string == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		string[i] = str[i];

	string[i] = '\0';

	return (string);
}
