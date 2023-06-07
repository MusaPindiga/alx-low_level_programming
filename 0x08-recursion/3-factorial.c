#include "main.h"

/**
 * factorial - finds the factorial of a given number
 *
 * @num: the number to finds it's factorial
 *
 * Return: the factorial of the given number
 *
 */
int factorial(int num)
{
	int fact;

	if (num < 0)
		return (-1);

	if (num == 0)
		return (1);

	return (fact = num * factorial(num - 1));
}
