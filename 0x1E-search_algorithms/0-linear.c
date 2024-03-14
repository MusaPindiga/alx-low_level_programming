#include "search_algos.h"

/**
 * linear_search - finds a given element in a array
 * 
 * @array: array to be searched in
 * @size: length of the given array
 * @value: an item to be searched for
 * 
 * Return - -1 if the element is not found or array is NULL,
 * 	otherwise the first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
