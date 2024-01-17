#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * multiplies two numbers with...
 * each result on a separate line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (sizeof(atoi(argv[i])) != 4)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	if (argc < 2)
		printf("0\n");
	else
		printf("%d\n", sum);


	return (0);
}
