#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: character that separates each number to be printed
 * @n: number of arguments
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if ((i + 1) < (n) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);

}
