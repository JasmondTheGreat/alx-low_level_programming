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
	int i;
	int prevTwoNum, prevNum, nextNum, max;
	long evenFibSum;

	evenFibSum = 2;

	prevTwoNum = 1, prevNum = 2, max = 4000000;
	
	for (i = 3; i <= max; i++)
	{
		while (nextNum <= max)
		{
			nextNum = prevNum + prevTwoNum;
			prevTwoNum = prevNum;
			prevNum = nextNum;
			
			if (prevNum % 2 == 0)
			evenFibSum += prevNum;
		}
	
	}

	printf("%ld\n", evenFibSum);

	return (0);
}
