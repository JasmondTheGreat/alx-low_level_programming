#include "includes.c"
#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string param
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
