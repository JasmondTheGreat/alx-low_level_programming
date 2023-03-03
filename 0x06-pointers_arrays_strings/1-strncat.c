#include "includes.c"

/**
 * _strncat - concatenates two strings
 *
 * It will use at most 'n' bytes from src
 * src does not need to be null-terminated
 * ...if it contains 'n' or more bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: length of 'src' to concatenate into 'dest'
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i == (len2 - 1))
			break;

		dest[len1 + i] = src[i];
	}

	if (len2 < n)
		dest[i] = '\0';

	return (dest);
}
