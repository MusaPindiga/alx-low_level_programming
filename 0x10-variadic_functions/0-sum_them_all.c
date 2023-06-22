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
	unsigned int i, sum = 0;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);
	
	for (i = 0; i < n; i++)
		sum =+ va_arg(num, int);

	va_end(num);

	return (sum);
}
