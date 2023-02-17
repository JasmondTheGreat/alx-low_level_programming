#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
for (int hexNum = 48; hexNum <= 57; hexNum++)
putchar(hexNum);
for (char hexChar = 'a'; hexChar <= 'f'; hexChar++)
putchar(hexChar);

putchar('\n');

return (0);
}
