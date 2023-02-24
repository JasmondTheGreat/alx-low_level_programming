#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * For multiples of three, print 'Fizz',
 * and for the multiples of five, print 'Buzz',
 * otherwise, print the number.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			if (i < 100)
				printf("FizzBuzz ");
			else
				printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			if (i < 100)
				printf("Fizz ");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			if (i < 100)
				printf("%d ", i);
			else
				printf("%d", i);
		}
	}
	putchar('\n');

	return (0);
}
