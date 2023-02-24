#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * 
 * Return: 0
 */

int main(void)
{
	int i, j, larPrimeFac;
	long max;

	max = 612852475143;

	for (i = 2; i <= max; i++)
	{
		int count;
		
		count = 0;

		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}
		
		if (count == 2)
			larPrimeFac = i;
	}

	printf("%d\n", larPrimeFac);
}
