#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int fDig, sDig;
for (fDig = 48; fDig <= 56; fDig++)
{
for (sDig = fDig + 1; sDig <= 57; sDig++)
{
putchar(fDig);
putchar(sDig);
if (fDig != 56 && sDig != 57)
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
