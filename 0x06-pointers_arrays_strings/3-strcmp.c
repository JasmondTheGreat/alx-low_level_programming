/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 > s2, -15 if s1 < s22, or 0 if they're equal
 */


int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		result =
			s1[i] > s2[i] ? 15
			: s1[i] < s2[i] ? -15
			: 0;
		break;
	}

	return (result);
}
