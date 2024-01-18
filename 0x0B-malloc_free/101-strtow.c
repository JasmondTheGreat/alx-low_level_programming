#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/**
 * strtow - splits a string into words
 *
 * @str: string parameter
 *
 * Return: an array of word strings
 */

char **strtow(char *str)
{
	int numWords = 0;
	bool inWord = false;

	while(*str)
	{
		if (*str == ' ')
			inWord = false;
		else
		{
			if (!inWord)
			{
				numWords++;
				inWord = true;
			}
		}

		str++;
	}

	printf("num words: %d\n", numWords);

	return malloc(2);
}

int main()
{
	strtow("    Hello    dear  ");
}

