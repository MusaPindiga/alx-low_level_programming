#include "main.h"
/**
 * _isalpha - check the alphabet if it is a lowercase
 *
 * @c: is the parameter of the function
 *
 * Return: 0 if the alphabet is not lowercase.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
