#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int hexNum;

	char hexChar;

	for (hexNum = 48; hexNum <= 57; hexNum++)
		putchar(hexNum);
	for (hexChar = 'a'; hexChar <= 'f'; hexChar++)
		putchar(hexChar);

	putchar('\n');

	return (0);
}
