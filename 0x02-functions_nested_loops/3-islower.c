#include "main.h"
/**
 * islower - check the alphabet if it is a lowercase
 *
 * @c: is the parameter of the function
 *
 * Return: 0 if the alphabet is not lowercase.
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
