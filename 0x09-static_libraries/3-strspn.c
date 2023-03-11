/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: substring to use to check the string
 * Return: the number of bytes in that's contained by the substring
 * in the string
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, i, j;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				count++;
	}

	return (count);
}
