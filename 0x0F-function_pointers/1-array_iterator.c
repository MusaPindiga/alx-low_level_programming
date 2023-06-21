#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a given action passed as a parameter on
 *		each element of the array.
 *
 * @array: elements to execute the given action upon.
 * @size: size of the array.
 * @action: action to be perform on each of the elements.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);

}
