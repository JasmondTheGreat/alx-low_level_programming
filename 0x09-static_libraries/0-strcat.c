#include "includes.c"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the returning string, 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
