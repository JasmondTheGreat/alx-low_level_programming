#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
int main()
{
	char *str =	str_concat("Hello", " world");
	char *str2 = str_concat(NULL, " world");
	char *str3 = str_concat("Hello", NULL);
	char *str4 = str_concat(NULL, NULL);

	printf("%s\n", str);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);

	free(str);
}
char *str_concat(char *s1, char *s2)
{
	size_t length1 = strlen(s1), length2 = strlen(s2);
	size_t length = length1 + length2 + 1, i;
	char *newString = (char *)malloc(sizeof(char) * length);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (newString == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		newString[i] = s1[i];

	for (i = 0; i < length2; i++)
		newString[i + length1] = s2[i];

	return (newString);

}
