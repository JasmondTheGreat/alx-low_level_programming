#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string, in reverse
 * @s: string parameter
 *
 */

void rev_string(char *s)
{
	int i, length;

	length = strlen(s);
	
	for (i = 0; i < (length / 2); i++)
	{
		s[i] = s[length - i + 1];
	}
}
