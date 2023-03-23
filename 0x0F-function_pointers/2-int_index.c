#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: array to search integer in
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result)
				break;
		}
		if (i < size)
			return (i);
	}

	return (-1);
}
