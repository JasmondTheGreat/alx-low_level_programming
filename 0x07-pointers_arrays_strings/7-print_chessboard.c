#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of characters to print
 */

void print_chessboard(char (*a)[8])
{
	int i, j, size;

	size = 8;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
