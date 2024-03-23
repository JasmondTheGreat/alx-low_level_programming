#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number param
 * @index: index param
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, result;

	for (i = 0; n != 0; i++)
	{
		if (i == (int)index)
		{
			result = n % 2;
			break;
		}

		n /= 2;
	}

	if (result != 0 && result != 1)
		return (-1);

	return (result);
}
