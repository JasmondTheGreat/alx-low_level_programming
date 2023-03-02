#include "includes.c"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string to be copied into
 * @src: source string to be copied
 * @n: number of characters to be copied up to
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}

	return (dest);
}
