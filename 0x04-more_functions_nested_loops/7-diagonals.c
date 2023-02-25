#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row - 1; col++)
			{
				putchar(' ');
			}

			putchar('\\');
			putchar('\n');
		}
	}

}
