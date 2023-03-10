#include <string.h>

/**
 * is_palindrome - to check if a string is a palindrome or not
 * @s: string param
 * Return: 1 if string is a palindrome, otherwise, 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (*s != (s + len - 1))
		return (0);

	is_palindrome(s - 1);
	return (1);
}
