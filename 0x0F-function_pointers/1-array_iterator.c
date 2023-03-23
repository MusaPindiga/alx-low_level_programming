#include "function_pointers.h"

/**
 * array_iterator - execute a given function as parameter on array
 *
 * @array: given array
 * @size: size of the array
 * @action: pointer to a function that execute on each element of
 *	of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	unsigned int index;

	for (index = 0; index < size; index++)
		action(array[index]);
}
