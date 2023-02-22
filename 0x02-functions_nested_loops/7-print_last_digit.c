#include "main.h"
/**
 * print_last_digit - a funtion that computes the absolute value of a number
 *
 * @n: is the integer parameter to be computed
 *
 * Return: return the absolute value of the given number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
