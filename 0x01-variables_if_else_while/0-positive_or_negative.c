#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n < 0
	? printf("%d is negative\n", n)
	: n > 0
	? printf("%d is positive\n", n)
	: printf("%d is zero\n", n);

	return (0);
}

