#include "main.h"

/**
 * putss - prints a string
 *
 * @s: string to print
 *
 * Return: number of chars
 */

int putss(char *s)
{
	int count = 0;

	if (s)
	{
		for (count = 0; s[count] != '\0'; count++)
			_putchar(s[count]);
	}

	return (count);
}
