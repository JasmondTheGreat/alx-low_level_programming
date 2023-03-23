#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name param to print
 * @f: function pointer param
 */



void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
