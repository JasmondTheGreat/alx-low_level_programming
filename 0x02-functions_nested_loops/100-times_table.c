#include "includes.c"
#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints out the 12 times table, starting with 0.
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					printf("%d,", i * j);
				else if (j >= 1 && j < n)
					printf("%4d,", i * j);
				else if (j == n)
					printf("%4d", i * j);
			}
			putchar('\n');
		}
	}
	else
	{
		printf("\n");
	}
}
