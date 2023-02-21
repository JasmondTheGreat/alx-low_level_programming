/**
 * _islower - to check for if a character is lowercase or not
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, otherwise, 0
 */

int _islower(int c)
{
	int lowercaseCount = 0, letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			lowercaseCount++;
	}

	if (lowercaseCount == 1)
		return (1);

	return (0);
}
