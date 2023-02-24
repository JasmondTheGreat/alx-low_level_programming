#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > i; j--)
				putchar(' ');

			putchar('\n');
		}
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
				putchar('#');

			putchar('\n');
		}
	
	}
}
