#include "includes.c"
#include "main.h"

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

	_putchar((n % 10) + '0');

	return (n % 10);
}
