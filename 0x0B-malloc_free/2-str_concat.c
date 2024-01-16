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
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);
	size_t len_result = len_s1 + len_s2 + 1;

	char *result = (char *)malloc(len_result);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}
