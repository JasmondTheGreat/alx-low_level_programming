#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector (pointer to an array of characters)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	i = 0;
	result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		result += num;

	}

	if (argc >= 2)
		printf("%d\n", result);

	return (0);
}
