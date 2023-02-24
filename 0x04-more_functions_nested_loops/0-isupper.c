#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: character parameter to check
 *
 * Return: 1 if param is uppercase, otherwise, 0
 */

int _isupper(int c)
{
/*	int count; */

/*	count = 0; */

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
