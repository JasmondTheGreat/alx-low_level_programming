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
	int i, result, returnResult, nonNumber;

	i =	result = returnResult = nonNumber = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc >= 2)
	{
		/* Check if any arg is not a number */
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				nonNumber = 1;
			}
		}

		/* if nonNumber exitst */
		if (nonNumber == 1)
		{
			printf("Error\n");
			return (1);
		}

		/* if nonNumber does not exist */
		else
		{
			for (i = 1; i < argc; i++)
			{
				int num = atoi(argv[i]);

				result += num;
			}
			printf("%d\n", result);
		}
	}
	return (0);
}
