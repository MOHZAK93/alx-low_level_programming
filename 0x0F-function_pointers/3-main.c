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
	int (*op_func)(int, int);

	op_func = get_op_func(av[2]);

	if (ac != 4)
		printf("Error\n"), exit(98);

	if ((*av[2] == '/' || *av[2] == '%') && !atoi(av[3]))
		printf("Error\n"), exit(100);

	if (!op_func)
		printf("Error\n"), exit(99);
	
	printf("%d\n", op_func(atoi(av[1]), atoi(av[3])));

	return (0);
}
