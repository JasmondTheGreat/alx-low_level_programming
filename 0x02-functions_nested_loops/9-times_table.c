#include "includes.c"
#include "main.h"

/**
 * times_table - prints out the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 1)
				printf("%d, ", i * j);
			else if (j >= 1 && j < 9)
				printf("%2d, ", i * j);
			else if (j == 9)
				printf("%2d", i * j);
		}
		_putchar('\n');
	}
}
