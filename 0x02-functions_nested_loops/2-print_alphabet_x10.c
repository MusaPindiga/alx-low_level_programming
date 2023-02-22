#include "main.h"
/**
 * print_alphabet_x10 - function that print alphabets using _putchar
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int i = 0, letter;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');

		i++;
	}

}
