#include <stdio.h>

/**
 * main - function that print upper and lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerLetter, upperLetter;

	for (lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
		putchar(lowerLetter);

	for (upperLetter = 'A'; upperLetter <= 'Z'; upperLetter++)
		putchar(upperLetter);

	putchar('\n');

	return (0);
}
