#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 *
 */

void print_rev(char *s)
{
	int i, length, middle;
	char temp;

	length = strlen(s);
	middle = length / 2;
	
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		putchar(s[i]);
	}
}
