#include <stdio.h>
#include "main.h"

/**
 * main - main function that print the name of the
 *	file (executable).
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable.
 *
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
