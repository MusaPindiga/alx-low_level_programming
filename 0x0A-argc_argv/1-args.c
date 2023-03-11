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
	printf("%d\n", argc);
	(void)argv;

	return (0);
}
