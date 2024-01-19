#include <stdio.h>
#include <stdlib.h>

/**
 * getArgNum - converts a string number to an integer
 *
 * @string: string parameter
 *
 * Return: converted integer
 */

int getArgNum(char string[])
{
	char *endptr;
	long value = strtol(string, &endptr, 10);

	if (*endptr == '\0')
		return ((int)value);

	return (-1);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector (array of string arguments)
 *
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = getArgNum(argv[1]);
		num2 = getArgNum(argv[2]);

		if (num1 && num2)
			printf("%d\n", num1 * num2);
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (0);
}
