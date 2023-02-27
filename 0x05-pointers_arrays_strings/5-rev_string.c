#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 *
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);
	
	for (i = 0; i < (length / 2); i++)
	{
		s[i] = s[length - i + 1];
	}
}
