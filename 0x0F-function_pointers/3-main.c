#include "calc.h"
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
	if (ac != 4)
		printf("Error\n"), exit(98);

	if ((*av[2] == '/' || *av[2] == '%') && atoi(av[3]) == 0)
		printf("Error\n"), exit(100);

	if (*av[2] == '+' || *av[2] == '-' || *av[2] == '/' ||
			*av[2] == '*' || *av[2] == '%')
		printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	else
		printf("Error\n"), exit(99);

	return (0);
}
