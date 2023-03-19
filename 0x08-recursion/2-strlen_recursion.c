#include "main.h"

/**
 * _strlen_recursion - function that finds string length recursively
 *
 * @s: string parameter to find it's length
 * Return: return the length of the given string
 */
int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s)
	{
		str_len++;
		str_len += _strlen_recursion(s + 1);
	}

	return (str_len);
}
