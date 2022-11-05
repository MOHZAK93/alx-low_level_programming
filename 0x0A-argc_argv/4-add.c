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
	int i;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
