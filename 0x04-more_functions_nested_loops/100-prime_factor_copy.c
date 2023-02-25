#include <stdio.h>

/**
 * main - prints largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	int i, j, primeFac;
	long number;
	
	number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		int count;

		count = 0;

		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}

		if (count == 2 && number % i == 0)
		{
			primeFac = i;
		}
	}

	printf("%d\n", primeFac);

	return (0);
}
