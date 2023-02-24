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
		for (row = 0; row < size; row++)
		{
			for (col = row; col < size; col++)
				putchar(' ');
			for (col = 0; col < row + 1; col++)
				putchar('#');
			putchar('\n');
		}
	}
}
