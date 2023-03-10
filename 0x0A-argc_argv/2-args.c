#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector (pointer to an array of characters)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}
