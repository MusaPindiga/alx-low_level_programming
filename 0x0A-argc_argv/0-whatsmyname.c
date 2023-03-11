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
	printf("%s\n", argv[0]);

	return (0);
}
