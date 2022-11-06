#include <stdio.h>
#include "main.h"

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: pointer to arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		i++;
	}
	printf("%d\n", argc);
	return (0);
}
