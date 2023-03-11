#include <stdio.h>
#include "main.h"

/**
 * main - main function that print the number of arguments
 *	passed into command line
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
