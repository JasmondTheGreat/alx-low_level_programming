#include "includes.c"
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 */

void puts_half(char *str)
{
	long length, i, middle;

	length = strlen(str);
	middle = length / 2;

	for (i = (middle); i < length; i++)
	{
		/* if (length % 2 != 0) */
		_putchar(str[i]);
	}
	_putchar('\n');
}
