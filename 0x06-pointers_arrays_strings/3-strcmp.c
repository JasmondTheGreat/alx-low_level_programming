#include "includes.c"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 > s2, -15 if s1 < s22, or 0 if they're equal
 */


int _strcmp(char *s1, char *s2)
{
	int i, len1, count1, count2;

	count1 = 0;
	count2 = 0;
	len1 = strlen(s1);

	for (i = 0; i < len1; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				count2++;
			else if (s1[i] > s2[i])
				count1++;
		}
	}

	if (count1 > count2)
		return (15);
	else if (count1 < count2)
		return (-15);
	else
		return (0);
}
