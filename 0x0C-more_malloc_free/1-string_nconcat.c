#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings till a certain length
 *
 * @s1: first string
 * @s2: second string
 * @n: length of final string
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = strlen(s1), len2 = strlen(s2), i;
	size_t totLen = len1 + n;
	char *result;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(1);

		if (s1 == NULL)
			return (NULL);

		s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		s2 = (char *)malloc(1);

		if (s2 == NULL)
			return (NULL);

		s2[0] = '\0';
	}

	if (n >= len2)
		totLen = len1 + len2 + 1;

	result = malloc(totLen);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[i + len1] = s2[i];

	return (result);
}
