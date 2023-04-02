#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @ac: number of arguments
 * @av: array of arguemnts
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int (*op_func)(int, int), a, b;

	op_func = get_op_func(av[2]);
	a = atoi(av[1]);
	b = atoi(av[3]);

	if (ac != 4)
		printf("Error\n"), exit(98);

	if (!op_func)
		printf("Error\n"), exit(99);

	if ((*av[2] == '/' || *av[2] == '%') && !b)
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));

	return (0);
}
