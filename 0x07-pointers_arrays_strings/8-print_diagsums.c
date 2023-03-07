#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: 2-D array param
 * @size: size of array
 */


void print_diagsums(int *a, int size)
{
	int i, leftDiagSum, rightDiagSum;

	leftDiagSum = rightDiagSum = 0;

	for (i = 0; i < size; i++)
	{
		leftDiagSum += a[(size * i) + i];
		rightDiagSum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", leftDiagSum, rightDiagSum);
}
