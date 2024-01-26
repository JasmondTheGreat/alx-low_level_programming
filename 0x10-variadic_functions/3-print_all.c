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
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				char *s = va_arg(args, char *);

				printf("%s", s == NULL ? "(nil)" : s);
				break;
			}
			default:
				break;
		}

		if (format[i] && i < (formatCount - 1)
			&& (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	va_end(args);


	printf("\n");
}
