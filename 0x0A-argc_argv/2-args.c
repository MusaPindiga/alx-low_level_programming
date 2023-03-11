#include <stdio.h>
#include "main.h"

/**
 * main - main function that print all the arguments
 *	passed into command line
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i  < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
