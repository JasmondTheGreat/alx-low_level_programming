/*
 * print_name - prints a name
 */

void print_name(char *name, void (*f)(char *))
{
    /*while(*name)
    {
        f(*name);
        name++;
    }*/

    f(name);
}
