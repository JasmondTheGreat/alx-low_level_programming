#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	int fPairDig1, fPairDig2, sPairDig1, sPairDig2;

	int min = 48, max = 57;

	for (fPairDig1 = min; fPairDig1 <= max; fPairDig1++)
	{
		for (fPairDig2 = fPairDig1; fPairDig2 <= max; fPairDig2++)
		{
			for (sPairDig1 = fPairDig2; sPairDig1 <= max; sPairDig1++)
			{
				for (sPairDig2 = sPairDig1; sPairDig2 <= max; sPairDig2++)
				{
					putchar(fPairDig1);
					putchar(fPairDig2);
					putchar(' ');
					putchar(sPairDig1);
					putchar(sPairDig2);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
