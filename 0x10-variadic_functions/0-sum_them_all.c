#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the variable number of arguments
 *
 * @n: the fixed parameter variable
 * @...: varaible number of arguments tu be sum up
 *
 * Return: 0 if n == 0, otherwise sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}

