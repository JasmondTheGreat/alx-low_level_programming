#include "includes.c"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;

	char letters[5][2] = {
		{'a', 'A'},
		{'e', 'E'},
		{'o', 'O'},
		{'t', 'T'},
		{'l', 'L'}
	};
	char encode[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j][0] || str[i] == letters[j][1])
			{
				str[i] = encode[j];
			}
		}
	}

	return (str);
}
