#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar(' ');
			putchar((i % 10) + '0');
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
