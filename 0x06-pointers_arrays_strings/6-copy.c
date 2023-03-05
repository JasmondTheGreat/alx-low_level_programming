/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i, j, shift, nextWordIndex;

	char wordSeperators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	shift = 32;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= shift;

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == wordSeperators[j])
				continue;
			nextWordIndex = i + 1;
		}

		if (str[nextWordIndex] >= 'a' && str[nextWordIndex] <= 'z')
			str[nextWordIndex] -= shift;
	}

	return (str);
}
