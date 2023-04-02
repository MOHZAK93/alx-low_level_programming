#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform operation
 *
 * @s: operator passed as argument
 *
 * Return: pointer to function that corresponds to the given operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && *(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
