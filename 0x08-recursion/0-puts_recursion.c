#include "main.h"

/**
 * _puts_recursion - function that prints string using recursive
 *			function.
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int index = 0;

	if (s[index])
	{
		_putchar(s[index]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
