#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first parameter string
 * @s2: second parameter string
 *
 * Return: negative difference of the first mismatched character, if s1 > s2
 *	   0, if s1 == s2
 *	   positive difference of the first mismatched character, if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)

		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);

	return (s1[index] - s2[index]);
}
