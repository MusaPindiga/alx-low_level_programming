#include <stdio.h>
/**
 * main - print numbers of base ten using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
