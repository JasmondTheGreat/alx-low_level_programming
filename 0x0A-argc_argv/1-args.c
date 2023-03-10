#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector (pointer to an array of characters)
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
