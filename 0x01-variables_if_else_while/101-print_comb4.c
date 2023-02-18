#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int fDig, sDig, tDig;

	for (fDig = 48; fDig <= 55; fDig++)
	{
		for (sDig = fDig + 1; sDig <= 56; sDig++)
		{
			for (tDig = sDig + 1; tDig <= 57; tDig++)
			{
				putchar(fDig);
				putchar(sDig);
				putchar(tDig);

				if (fDig != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
