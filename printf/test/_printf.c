#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 *
 * @char: character string
 *
 * Return: the number of characters printed (excluding the null byte used to end strings)
 */

int getFormatSpecsCount(const char *format)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format - 1) != '%' && (*(format + 1) == 'c' ||
			*(format + 1) == 's' || *(format + 1) == '%'))
			count++;

		format++;
	}

	return count;
}

char *getFormatSpecsStr(const char *format)
{
	int formatSpecsCount, i = 0;
	char *formatSpecs;

	formatSpecsCount = getFormatSpecsCount(format);
	formatSpecs = malloc(sizeof(char) * formatSpecsCount + 1);

	while (*format)
	{
		if (*format == '%' && *(format - 1) != '%' && (*(format + 1) == 'c' ||
			*(format + 1) == 's' || *(format + 1) == '%'))
		{
			formatSpecs[i] = *(format + 1);

			i++;
		}
		format++;
	}
	formatSpecs[formatSpecsCount] = '\0';

	return (formatSpecs);
}

int _printf(const char *format, ...)
{
	va_list args;
	int strLen = strlen(format);
	char *outputStr;
	int formatSpecsCount, i;
	char *variableChars, *formatSpecs;

	formatSpecsCount = getFormatSpecsCount(format);
	formatSpecs = malloc(sizeof(char) * formatSpecsCount + 1);
	strcpy(formatSpecs, getFormatSpecsStr(format));

	va_start(args, format);

	while(*formatSpecs)
	{
		switch(*formatSpecs)
		{
			case 'c':
				char c;

				c = va_arg(args, int);

				break;

		}
	}

	va_end(args);
	/*strLen -= formatSpecsCount;
	outputStr = malloc(sizeof(char) * strLen);*/


	printf("\n");
	return (strLen);
}

int main()
{
	_printf("%cabcde%s%%%");
	_printf("12345678%c%c", 'a', 'b');
}
