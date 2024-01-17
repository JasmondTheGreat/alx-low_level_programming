#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count param
 * @av: argument vector param
 *
 * Return: pointer to concatenated string result
 */

char *argstostr(int ac, char **av)
{
	size_t totalLength = ac + 1;
	int i;
	char *result;

	for (i = 0; i < ac; i++)
		totalLength += strlen(av[i]);

	result = (char *)malloc(sizeof(char) * totalLength);

	if (ac == 0 || av == NULL || result == NULL)
		return (NULL);

	strcpy(result, av[0]);
	strcat(result, "\n");

	for (i = 1; i < ac; i++)
	{
		strcat(result, av[i]);
		strcat(result, "\n");
	}

	result[totalLength] = '\0';

	return (result);
}
