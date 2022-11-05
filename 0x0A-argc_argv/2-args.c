#include "main.h"
#include <stdio.h>

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: pointer to arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
