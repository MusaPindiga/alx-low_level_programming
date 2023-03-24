#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variable number of argument
 *
 * @separator: string to be printed between the numbers
 * @n:  number of integers passed to the function
 * @...: a variable number of parameters to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
