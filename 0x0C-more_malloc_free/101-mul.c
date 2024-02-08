#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
 * exitProgram - exits the program with a status code of 98
 *
 * Return: void
 */

void exitProgram()
{
	printf("Error\n");
	exit(98);
}

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

	if ((errno == ERANGE && (value == LONG_MAX || value == LONG_MIN))
			|| (*endptr != '\0' && endptr != string))
		return ((int)value);
	else if (value == 0)
		return 0;

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
		exitProgram();
	else
	{
		num1 = getArgNum(argv[1]);
		num2 = getArgNum(argv[2]);

		printf("num1: %d\n", num1);
		printf("num2: %d\n", num2);

		if (num1 != -1 && num2 != -1)
			printf("%d\n", num1 * num2);
		else
			exitProgram();
	}

	return (0);
}
