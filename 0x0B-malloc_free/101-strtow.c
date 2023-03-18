#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of the split strings
 */

char **strtow(char *str)
{
	char **splitArr;
	int i = 0, j = 0, wordsLen = 1, stringLen = 0;

	if (str[0] == ' ')
		wordsLen = 0;

	while (str[i] != '\0')
	{
		stringLen++;
		if (str[i] != ' ' && str[i - 1] == ' ')
			wordsLen++;
	}

	splitArr = malloc(sizeof(char *) * wordsLen);

	for (i = 0; i < wordsLen; i++)
	{
		int wordLen = 0;

		for (j = 0; j < stringLen; j++)
		{
			while (str[j] != ' ')
			{
				if (str[j] != ' ' && str[i - 1] == ' ')
					wordLen++;
			}

		}
		splitArr[i] = malloc(sizeof(char) * wordLen);
	}

	for (i = 0; i < wordsLen; i++)
	{
		for (j = 0; j < stringLen; j++)
		{
			while (str[j] != ' ')
			{
				if (str[j] != ' ' && str[i - 1] == ' ')
					splitArr[i][j] = str[j];
			}
			splitArr[i][j] = '\n';

		}
	}

	return (splitArr);
}
