#include "includes.c"
#include "main.h"

/**
 * print_sign - function to print the sign of a number
 *
 * @n: number parameter to check
 *
 * Return: 1 and prints + if n is greater than zero,
 * or 0 and prints 0 if n is zero
 * or -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
