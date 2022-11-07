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
	int cent;

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

	cent = atoi(argv[1]);

	change(cent);

	return (0);
}

/**
  *change - function to calculate change
  *@num: integer input in cents
  *Return: 0
  */

int change(int num)
{
	int i, tmp, change;
	int	units[5];

	tmp = change = 0;

	units[0] = 25;
	units[1] = 10;
	units[2] = 5;
	units[3] = 2;
	units[4] = 1;

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
