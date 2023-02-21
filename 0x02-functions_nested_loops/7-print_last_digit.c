#include "includes.c"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer parameter to grab last digit from
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	printf("%d", (n % 10));

	return (n % 10);
}
