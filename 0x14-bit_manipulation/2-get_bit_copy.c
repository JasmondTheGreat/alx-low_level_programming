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
	int *digits, numDigits = 0, i = 0, result;

	while (n != 0)
	{
		numDigits++;
		n /= 10;
	}

	printf("Num digits: %d", numDigits);

	if (index > (unsigned)(numDigits - 1))
		return (-1);

	digits = malloc(sizeof(int) * numDigits);

	while (n != 0)
	{
		digits[numDigits - i - 1] = n % 10;
		i++;
		n /= 10;
	}

	result = digits[index];
	free(digits);

	return (result);
}
