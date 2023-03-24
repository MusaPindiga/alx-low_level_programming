#include "3-calc.h"

/**
 * op_add - add two integers
 *
 * @a: first integer
 * @b: secomd integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find difference of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integer numbers
 *
 * @a: dividend integer
 * @b: divisor integer
 *
 * Return: integer division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder division between two integers
 *
 * @a: dividend integer
 * @b: divisor integer
 *
 * Return: value from the remainder division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
