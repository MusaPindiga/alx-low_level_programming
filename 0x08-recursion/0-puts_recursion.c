#include "main.h"

/**
 * _puts_recursion - function that prints string's alphabets
 *		recursively
 * @str: string to be printed
 *
 */
void _puts_recursion(char *str)
{
	int i = 0;

	if (str[i])
	{
		_putchar(str[i]);
		_puts_recursion(str + 1);
	}
	else
		_putchar('\n');
}
