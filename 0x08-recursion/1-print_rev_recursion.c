#include "main.h"

/**
 * _print_rev_recursion - function that print string characters
 *			in reverse order
 * @s : string characters to be printed
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
