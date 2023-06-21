#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: elements to be searched in.
 * @size: size of the array.
 * @cmp: function that execute the comparison.
 *
 * Return: first index that @cmp returns, -1 otherwise
 *
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
		if (cmp(array[index]))
			return (index);

	return (-1);
}
