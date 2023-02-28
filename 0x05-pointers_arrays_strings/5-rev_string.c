#include "main.h"
#include "includes.c"

/**
 * rev_string - prints a string, in reverse
 * @s: string parameter
 */

void rev_string(char *s)
{
	int i, length;
	char temp;

	length = strlen(s);

	for (i = 0; i < (length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
