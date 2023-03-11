#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function that print the product of two
 *	arguments given
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int product = 1;
	int index;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (index = 1; index < argc; index++)
			product *= atoi(argv[index]);

		printf("%d\n", product);
	}
	return (0);
}
