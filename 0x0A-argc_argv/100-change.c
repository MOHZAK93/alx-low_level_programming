#include "main.h"
#include <stdio.h>

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: argument pointer
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int num, i, tmp, change;
	int	units[5];

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	else if (argv[1][0] == 45)
	{
		printf("0\n");
		return (0);
	}

	units[0] = 25;
	units[1] = 10;
	units[2] = 5;
	units[3] = 2;
	units[4] = 1;

	num = atoi(argv[1]);
	tmp = 0;
	change = 0;

	for (i = 0; i < 5; i++)
	{
		tmp = num / units[i];
		num -= tmp * units[i];

		if (tmp)
			change += tmp;
	}
	printf("%d\n", change);
	return (0);
}
