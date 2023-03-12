#include "main.h"
#include "includes.c"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: max value
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d\n", 98);
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}

	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
