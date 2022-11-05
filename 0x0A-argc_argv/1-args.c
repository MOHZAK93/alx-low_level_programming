#include <stdio.h>

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: pointer to arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		i++;
	printf("%d\n", i);
	return (0);
}
