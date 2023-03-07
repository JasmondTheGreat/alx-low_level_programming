#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s;

		s++;
	}

	return NULL;
}
