#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: poiter to arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc < 1)
		printf("%d\n", i);

	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
