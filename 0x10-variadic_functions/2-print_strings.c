#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string separator
 * @n: number of strings passed in
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(args, char *);

		if (arg == NULL)
			printf("nil");
		else
			printf("%s", arg);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

