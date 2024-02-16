#include "main.h"

/**
 * divideWithoutOperator - divide without / operator by continuous subtraction
 *
 * @dividend: numerator
 * @divisor: denominator
 *
 * Return: divided result (quotient)
 */

int divideWithoutOperator(int dividend, int divisor)
{
	int quotient = 0;

	if (divisor == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}

	while (dividend >= divisor)
	{
		dividend -= divisor;
		quotient++;
	}

	return (quotient);
}


/**
 * print_binary - prints the binary rep. of a num.
 *
 * @n: binary param
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		while (n != 0)
		{
			if (n & 1)
				_putchar('1');
			else
				_putchar('0');

			n = divideWithoutOperator(n, 2);
		}
	}
}
