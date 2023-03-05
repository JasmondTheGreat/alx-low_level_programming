/**
 * rot13 - encodes a string using 'rot13'
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, shift, j;

	char alphas[2][2] = {
		{'a', 'z'},
		{'A', 'Z'}
	};

	int index[] = {97, 65};

	shift = 13;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (str[i] >= alphas[j][0] && str[i] <= alphas[j][1])
				str[i] = ((str[i] + shift - index[j]) % 26) + index[j];
		}
	}

	return (str);
}
