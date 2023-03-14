#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in mem, which
 * contains a copy of the string given as a parameter
 * @str: string param
 * Return: pointer to string param copy
 */


char *_strdup(char *str)
{
	char *strCopy;
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	strCopy = malloc(sizeof(char) + (len + 1));

	if (strCopy == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		strCopy[i] = str[i];

	strCopy[len] = '\0';

	return (strCopy);
}
