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

	a = atoi(av[1]);
	b = atoi(av[3]);

	if (ac != 4)
		printf("Error\n"), exit(98);
	
	op_func = get_op_func(av[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!b && (av[2][0] == '/' || av[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));

	return (0);
}
