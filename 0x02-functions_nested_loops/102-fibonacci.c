#include "includes.c"

/**
 * main - prints Fibonacci numbers
 * prints the first 50 Fibonacci numbers, starting from 1 and 2,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, max;
	long int prevTwoNum, prevNum, nextNum;

	prevTwoNum = 1, prevNum = 2, max = 50;

	printf("%ld, %ld, ", prevTwoNum, prevNum);

	for (i = 3; i <= max; i++)
	{
		nextNum = prevNum + prevTwoNum;
		prevTwoNum = prevNum;
		prevNum = nextNum;

		if (i < max)
			printf("%ld, ", nextNum);
		else
			printf("%ld", nextNum);
	}

	putchar('\n');

	return (0);
}
