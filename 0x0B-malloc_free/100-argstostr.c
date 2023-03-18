#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: argument count
 * @av: argument vector (an array (pointer) containing each argument
 * string (also a pointer))
 *
 * Return: if successful, a pointer to the new concatenated string, otherwise,
 * NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, len2;
	char **arr, *string;


	arr = malloc(sizeof(char *) * ac);
	len = 0;

	for (i = 0; i < ac; i++)
		arr[i] = malloc(sizeof(char) * *arr[i]);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < *arr[i]; j++)
			len++;
	}

	if (ac == 0 || av == NULL)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (arr[i] == NULL)
			return (NULL);
	}

	len += ac + 1;
	string = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < *arr[i]; j++)
		{
			int len3 = 0;

			len2 += i;

			while (arr[i][j] != '\0')
				len3++;

			string[len2 + len3] = arr[i][j];
		}
		string[len + i + 1] = '\n';
	}

	return (string);
}
