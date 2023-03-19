#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: number that the function finds it's factorial
 *
 * Return: -1 if n < 0
 *	Otherwise the factorial of n
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	fact = n * factorial(n - 1);

	return (fact);
}
