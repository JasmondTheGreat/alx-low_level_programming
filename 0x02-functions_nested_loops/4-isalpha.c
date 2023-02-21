/**
 * _isalpha - to check for if a character is an alphabet
 *
 * @c: the character to check
 *
 * Return: 1 if c is an alphabet, otherwise, 0
 */

int _isalpha(int c)
{
	int alphaCount = 0, letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			alphaCount++;
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
			alphaCount++;
	}

	if (alphaCount == 1 || alphaCount == 2)
		return (1);

	return (0);
}
