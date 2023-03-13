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

	strCopy = (char *) malloc(len * sizeof(char));

	if (strCopy == NULL || len == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		strCopy[i] = str[i];


	return (strCopy);

	free(strCopy);
}
