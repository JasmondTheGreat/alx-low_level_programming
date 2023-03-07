#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *null;

	j = -3;
	null = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			j = i;
			break;
		}
	}

	if (j != 3)
		return (&s[j]);
	return (null);
}
