#include "main.h"

/**
 * swap_int - swap the given argument variables
 *
 * @a: variable parameter.
 * @b: varaible parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
