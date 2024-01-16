#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t length1 = strlen(s1);
	size_t length2 = strlen(s2);
	size_t length = length1 + length2 + 1, i;
	char *newString = (char *)malloc(sizeof(char) * length);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (newString == NULL)
		return (NULL);

	if (newString != NULL)
	{
		for (i = 0; i < length1; i++)
			newString[i] = s1[i];

		for (i = 0; i < length2; i++)
			newString[i + length1] = s2[i];

	}

	return (newString);

}
