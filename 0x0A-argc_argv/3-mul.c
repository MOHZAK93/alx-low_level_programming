#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main - Entry point
  *@argc: number of arguments from standard input
  *@argv: character pointer
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
