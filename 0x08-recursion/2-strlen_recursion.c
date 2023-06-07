#include "main.h"

/**
 * _strlen_recursion - finds the length of a given string
 *
 * @str: The string parameter to find it's length
 *
 * Return: the length of the given string
 *
 */

int _strlen_recursion(char *str)
{
	int len = 0;

	if (*str)
	{
		len++;
		len += _strlen_recursion(str + 1);
	}

	return (len);
}
