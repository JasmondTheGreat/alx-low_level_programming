#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to dynamically allocated array of the concatenated
 * strings
 */


char *str_concat(char *s1, char *s2)
{
	char *concatenatedStrings;
	unsigned int i, size, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2 + 1;
	concatenatedStrings = malloc(sizeof(char) * size);

	if (concatenatedStrings == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenatedStrings[i] = s1[i];
	for (i = 0; i <= len2; i++)
		concatenatedStrings[len1 + i] = s2[i];

	return (concatenatedStrings);
}
