#include "main.h"
/**
 * _pow_recursion - returns @x raised to the power @y
 *
 * @x: base value
 * @y: exponent value
 *
 * Return: -1 if y < 0, indicating error.
 *	Otherwise, the power of the given numbers.
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power = x * _pow_recursion(x, y - 1);

	return (power);
}
