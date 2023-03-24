#include "calc.h"

int getFuncIndex()
{

}

int (*get_op_func(char *s))(int, int)
{
	int (*operator[index])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	int i, j, length = 5;
	char *operator = "+-*/%"

	for (j = 0; j < length; j++)
	{
		if (s == operator[j])
			break;
	}
	return (operator[i]);
}

int (*get_op_func(char *s))(int, int)
{
	int (*operator[index])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	int i, j, length = 5;
	char *operator = "+-*/%"

	for (j = 0; j < length; j++)
	{
		if (s == operator[j])
			break;
	}
	return (operator[i]);
}
