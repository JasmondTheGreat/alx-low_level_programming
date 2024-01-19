#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * checkString - checks if a string parameter is NULL or not
 *
 * @str: string parameter
 *
 * Return: string of NULL
 */

char *checkString(char *str)
{
	if (str == NULL)
	{
		str = (char *)malloc(1);

		if (str == NULL)
			return (NULL);

		str[0] = '\0';
	}

	return (str);
}


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
	size_t len1 = strlen(s1), len2 = n, i;
	size_t totLen;
	char *result;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;

	if (n >= strlen(s2) && s2 != NULL)
		len2 = strlen(s2);

	totLen = len1 + len2 + 1;

	result = (char *)malloc(totLen);
	if (result == NULL)
		return (NULL);

	if (totLen == 1)
		result[0] = '\0';
	else
	{
		for (i = 0; i < len1; i++)
			result[i] = s1[i];

		for (i = 0; i < len2; i++)
			result[i + len1] = s2[i];

		result[totLen] = '\0';

	}

	return (result);
}
