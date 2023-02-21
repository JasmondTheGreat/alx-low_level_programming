#include "includes.c"

/**
 * main - prints Fibonacci numbers
 * prints the first 98 Fibonacci numbers, starting from 1 and 2,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, length;
	long long prevTwoNum, prevNum, nextNum;

	prevTwoNum = 1, prevNum = 2, length = 98;

	printf("%lld, %lld, ", prevTwoNum, prevNum);

	for (i = 3; i <= length; i++)
	{
		nextNum = prevNum + prevTwoNum;
		prevTwoNum = prevNum;
		prevNum = nextNum;

		if (i < length)
			printf("%lld, ", nextNum);
		else
			printf("%lld", nextNum);
	}

	putchar('\n');

	return (0);
}
