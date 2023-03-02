#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first parameter string
 * @s2: second parameter string
 *
 * Return: 0 if the strings are the same, -15 if the second
 * is > the first, otherwise 15.
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len =  0, s2_len = 0, value = 0, index = 0, index2 = 0;

	while (s1[index++])
		s1_len++;

	while (s2[index2++])
		s2_len++;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])

			if (s2_len > s1_len)
				value = -15;

			else
				value = 15;

		else
			value = 0;
	}

	return (value);
}
