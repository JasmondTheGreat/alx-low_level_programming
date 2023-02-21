#include "includes.c"

/**
 * main - prints out the sum of nums evenly divisible by either 3 or 5
 * that's less than 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, result;
	result = 0;
	
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}

	printf("%d\n", result);

	return (0);
}
