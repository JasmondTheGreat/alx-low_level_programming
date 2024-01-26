#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string between numbers
 * @n: nujmber of integers passed in
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		printf("%d", arg);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

