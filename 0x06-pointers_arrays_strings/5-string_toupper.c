#include "includes.c"

/**
 * string_toupper - changes all lowercase letter of a string to uppercase
 *
 * @str: string to be transformed
 *
 * Return: new string
 */

char *string_toupper(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
