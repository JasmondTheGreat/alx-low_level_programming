#include <string.h>
#include <stdlib.h>

/**
 * str_check - performs checks on a string parameter
 *
 * @str: string parameter
 *
 * Return: NULL if fail or empty string if successful
 */

char *str_check(char *str)
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
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);
	size_t len_result = len_s1 + len_s2 + 1;

	char *result = (char *)malloc(len_result);

	s1 = str_check(s1);
	s2 = str_check(s2);

	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}
