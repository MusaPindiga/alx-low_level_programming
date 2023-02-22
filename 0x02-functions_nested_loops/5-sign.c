#include "main.h"
/**
 * print_sign - a funtion that print sign of a number
 *
 * @n: is the integer parameter of the function
 *
 * Return: return the sign of the given number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
