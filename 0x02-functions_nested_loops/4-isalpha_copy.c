/**
 * _isalpha - to check for if a character is an alphabet
 *
 * @c: the character to check
 *
 * Return: 1 if c is an alphabet, otherwise, 0
 */

int _isalpha(int c)
{
	int alphaCount = 0, lowerLetter, upperLetter;

	for (lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
	{
		if (c == lowerLetter)
			alphaCount++;
	}

	for (upperLetter = 'A'; upperLetter <= 'Z'; upperLetter++)
	{
		if (c == upperLetter)
			alphaCount++;
	}

	if (alphaCount == 1 || alphaCount == 2)
		return (1);

	return (0);
}
