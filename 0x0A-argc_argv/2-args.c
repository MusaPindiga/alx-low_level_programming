#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments
 *	passed into command line
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);

}
