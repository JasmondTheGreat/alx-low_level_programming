#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	int len, i, j, numCopy, mult;

	int base10[10] = {
		0, 1, 2, 3, 4,
		5, 6, 7, 8, 9, 10
	}

	mult = 1;
	len = 0;

	while (numCopy != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if ((numCopy / 10) != base10[j])
				numCopy = numCopy / 10;
		}

		_putchar()
		len++;
	}

	for (i = 0; i < len; i++)
	{
		``
	}


}
