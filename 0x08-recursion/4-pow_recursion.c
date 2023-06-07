#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to the power of y
 *
 * @x: the whole number
 * @y: the power
 *
 * Return: value of x raised to the power of y
 *
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (result *= _pow_recursion(x, y - 1));
}
