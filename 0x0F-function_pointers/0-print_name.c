/**
 * print_name - prints a name
 *
 * @name: name char array to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
