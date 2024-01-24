#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: Always 0;
 */

int main(int argc, char **argv)
{
	char *operator = argv[2];

	if (argc < 4)
	{
		printf("Argument count must be 4");
		exit (98);
	}

	if (!strcmp(operator, "+") || !strcmp(operator, "-") || !strcmp(operator, "*") || !strcmp(operator, "/") || !strcmp(operator, "%"))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", get_op_func(operator)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
