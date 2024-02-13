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
	int result = 0, i;

	if (!b)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] != 0 || b[i] != 1)
		{
			return (0);
		}

		result += (b[i] - '0') * pow(2, (length - i - 1));
	}

	return (result);
}
