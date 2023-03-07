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

	j = -3;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			j = i;
			break;
		}
	}

	return (j != -3 ? &s[j] : NULL);
}
