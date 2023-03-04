#include "includes.c"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 > s2, -15 if s1 < s22, or 0 if they're equal
 */


int _strcmp(char *s1, char *s2)
{
	int i, len1, result;

	len1 = strlen(s1);

	for (i = 0; i < len1; i++)
	{
		result =
			s1[i] > s2[i] ? 15
			: s1[i] < s2[i] ? -15
			: 0;
		break;
	}

	return (result);
}
