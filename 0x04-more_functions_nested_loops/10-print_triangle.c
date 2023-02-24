#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		putchar('\n');
	
	else
	{
		for (row = size; row > 0; row--)
		{
			for (col = size - row; col > i; col--)
				putchar(' ');

			putchar('\n');
		}
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < i; col++)
				putchar('#');

			putchar('\n');
		}
	
	}
}
