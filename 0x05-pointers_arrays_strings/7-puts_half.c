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

	if (length % 2 != 0)
	{
		for (i = ((length - 1) / 2); i < (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (middle); i < length; i++)
		{
			/* if (length % 2 != 0) */
			_putchar(str[i]);
		}

	}
		_putchar('\n');
}
