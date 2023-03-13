#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in mem, which
 * contains a copy of the string given as a parameter
 * @str: string param
 * Return: pointer to string param copy
 */


char *_strdup(char *str)
{
	char *strCopy;
	int len, i;

	len = strlen(str);

	strCopy = malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		strCopy[i] = str[i];

	if (str == NULL || len == 0)
		return (NULL);

	return (strCopy);

	free(strCopy);
}
