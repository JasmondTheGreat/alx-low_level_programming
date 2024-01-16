#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string passed in
 * @str: string pointer
 *
 * Return: pointer to new string which is a duplicate of the passed in string
 */

char *_strdup(char *str)
{
	size_t length = strlen(str), i;
	char *strCopy = malloc(sizeof(char) * length + 1);

	if (str == NULL)
		return (NULL);


	if (strCopy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		strCopy[i] = str[i];
	strCopy[length] = '\0';

	return (strCopy);
}
