#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - performs a basic arithmetic calculation based on the operator symbol passed in
 *
 * @s: operator symbol parameter
 *
 * Return: a pointer to the right operator function
 */

int (*get_op_func(char *s))(int, int)
{
	void (*result)(int, int);
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
    };
	int i = 0;

	while (i < 5)
	{
		if (!strcmp(s, ops[i][0]))
			result = ops[i][1];
		/* if no match is found */
		result = NULL;

		i++;
	}

	return (result);
}
