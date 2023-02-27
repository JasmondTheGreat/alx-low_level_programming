#include "includes.c"

/**
 * _strcpy - copies a string, including '\0' into another string
 *
 * @dest: destination string param
 * @src: source string param
 *
 * Return: copied string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i, srcLength, destinationLength;

	srcLength = strlen(src);
	destinationLength = srcLength + 1;

	for (i = 0; i < destinationLength; i++)
		dest[i] = src[i];

	dest[destinationLength - 1] = '\0';

	return (dest);
}
