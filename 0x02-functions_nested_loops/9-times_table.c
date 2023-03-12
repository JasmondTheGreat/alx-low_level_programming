#include "includes.c"
#include "main.h"
#include <stdio.h>

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
			if (j == 0)
				printf("%d,", i * j);
			else if (j >= 1 && j < 9)
				printf("%3d,", i * j);
			else if (j == 9)
				printf("%3d", i * j);
		}
		putchar('\n');
	}
}
