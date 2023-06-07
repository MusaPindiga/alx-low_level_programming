#include "main.h"

/**
 * _print_rev_recursion - function that reverse a string
 *			using recursion
 * @str: string to be reversed
 *
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
