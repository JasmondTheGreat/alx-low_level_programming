#include <stdio.h>

/**
 * main - entry point
 * prints number of argument passed in
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
