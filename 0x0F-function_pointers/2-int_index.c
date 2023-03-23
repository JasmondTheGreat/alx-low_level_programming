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
	int i, result, count = 0;

	if (size <= 0)
		return (-1);

	else {
		for (i = 0; i < size; i++)
		{
			if (cmp != NULL && array != NULL) {
				if (cmp(array[i]) != 0)
				{
					result = i;
					break;
				}
			}
			else
				count++;
		}

	}

	if (count == size)
		return (-1);
	else
		return (result);
}
