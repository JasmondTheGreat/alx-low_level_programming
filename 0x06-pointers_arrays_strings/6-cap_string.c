/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i, j, shift;

	char wordSeperators[] = {
		',', ';', '.', '!',
		'?', '"', '(', ')',
		'{', '}', ' ', '\t', '\n'
	};

	shift = 32;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= shift;

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == wordSeperators[j])
				str[i] -= shift;
		}
	}

	return (str);
}
