#include "main.h"

/**
 * getNumBinDigs - gets the num of binary digs of a dec num
 *
 * @n: decimal parameter
 *
 * Return: num of binary digs
 */
int getNumBinDigs(unsigned long int n)
{
	int numBinDigits;

	if (n == 0)
		return (0);

	/* Get the number of the binary digits */
	for (numBinDigits = 0; n != 0; numBinDigits++)
		n /= 2;

	return (numBinDigits);
}

/**
 * getDecFromBinDigits - gets the decimal equiv from an array of bin digits
 *
 * @binDigits: array of bin digits
 * @numBinDigits: size of array
 *
 * Return: dec equiv of bin digits
 */
int getDecFromBinDigits(int *binDigits, int numBinDigits)
{
	int result = 0, i, power, j;

	for (i = 0; i < numBinDigits; i++)
	{
		power = 1;

		for (j = (i + 1); j < numBinDigits; j++)
			power *= 2;
		result += binDigits[i] * power;
	}
	return (result);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to number param
 * @index: index param
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i, j, num = *n, *binDigits, numBinDigits, result = 0;

	numBinDigits = getNumBinDigs(*n);

	/* Guard clause */
	if (*n == 0)
	{
		result = 1;

		for (j = 0; j < (int)index; j++)
			result *= 2;

		*n = result;
		return (1);
	}
	binDigits = malloc(sizeof(int) * numBinDigits);

	if (!binDigits)
		return (0);
	num = *n;

	/* set the binary digits into an array */
	for (i = 0; num != 0; i++)
	{
		binDigits[numBinDigits - i - 1] = num % 2;
		num /= 2;
	}

	/* set the bit at the a particular index */
	binDigits[numBinDigits - 1 - (int)index] = 1;

	/* convert the binary digits array to its dec equiv */
	result = getDecFromBinDigits(binDigits, numBinDigits);
	*n = result;
	free(binDigits);
	return (1);
}


