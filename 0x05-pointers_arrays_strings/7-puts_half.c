#include "includes.c"
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 */

void puts_half(char *str)
{
	int length, i, middle;

	length = strlen(str);
	middle = length / 2;

	if (length % 2 == 0)
	{
		for (i = middle; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (middle + 1); i < length; i++)
			_putchar(str[i]);
	}

		_putchar('\n');
}
