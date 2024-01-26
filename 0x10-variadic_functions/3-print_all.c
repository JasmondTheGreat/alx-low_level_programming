#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: format specifiers
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, formatCount = strlen(format);

	va_start(args, format);

	while (i < formatCount)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%i", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char *);

			printf("%s", s == NULL ? "(nil)" : s);
		}

		if (format[i] && i < (formatCount - 1)
			&& (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(args);
}
