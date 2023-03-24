#include "calc.h"
#include "3-op_functions.c"
#define opSize

int main(argc, *argv[])
{
	int i;

	int (*operator[opSize])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod}

	/* Convert the command line arguments from strings to intergers */
	for (i = 0; i < argc; i++)
	if (argc == 3)
	{
		argv[i] = atoi(argv[i]);
	}
}
