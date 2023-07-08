#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary nuber to an unsigned int
 *
 * @b: a pointer to the strings of 0s and 1s.
 * Return: the converted number, otherwise 0 if:
 *		- one or more char in b is not 0 or 1
 *		- b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len > 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		decimal += (b[len] - '0') * power;
		power *= 2;
	}
	return (decimal);
}
