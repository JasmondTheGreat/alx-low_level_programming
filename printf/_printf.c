#include "main.h"

/**
 * _printf - produces output based on a format
 * writes output to stdout
 *
 * @format: format string
 *
 * Return: number of chars printed (excluding '\0')
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0, tempStrCount, i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			tempStrCount = putss(va_arg(args, char *));
			i++;
			count += (tempStrCount - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}

		count++;
	}

	va_end(args);

	return (count);
}
