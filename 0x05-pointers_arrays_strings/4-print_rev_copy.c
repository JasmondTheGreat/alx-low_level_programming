#include "includes.c"
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = (length - 1); i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
