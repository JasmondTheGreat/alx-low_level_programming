#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	const int length = strlen(b);
	int result = 0, i, j;
	int powerResult;

	if (!b)
		return (0);

	for (i = 0; i < length; i++)
	{
		/*
		 * if ((b[i] + '0') > 1)
		 * return (0);
		 *
		 */

		powerResult = 1;
		for (j = 1; j <= (length - i - 1); j++)
			powerResult *= 2;

		result += (b[i] - '0') * powerResult;
	}

	return (result);
}
