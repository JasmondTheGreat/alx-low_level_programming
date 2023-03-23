#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 *
 * @array: array param
 * @size: size of array
 * @action: function to execute on each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL && array != NULL)
			action(array[i]);
	}
}
