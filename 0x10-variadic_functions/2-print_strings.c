#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: seperator of strings to be printed
 * @n: number of arguments
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	 unsigned int i;

     va_list list;

     va_start(list, n);

     for (i = 0; i < n; i++)
     {
         printf("%s", va_arg(list, char*));

         if ((i + 1) < (n) && separator)
             printf("%s", separator);
     }
     printf("\n");

     va_end(list);
}
