#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main function that print the product of two
 *	arguments given
 * @argc: argument counter parameter variable
 * @argv: argument vector parameter variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 1;
	int index = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (index < argc)
		{
			result *= atoi(argv[index]);
			index++;
		}
		printf("%d\n", result);

	}
	return (0);

}
