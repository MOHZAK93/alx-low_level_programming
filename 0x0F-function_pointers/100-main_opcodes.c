#include <stdio.h>
#include <stdlib.h>

/**
  *main -  Entry point
  *
  *@argc: number of arguments
  *@argv: argument pointer
  *
  *Return: integer
  */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = 0;
	int (*address)(int, char **) = main;

	if (argc != 2)
		printf("Error\n"), exit(1);

	if (a < 0)
		printf("Error\n"), exit(2);

	while (b < a)
	{
		printf("%.2x", *(unsigned char *)address);
		if (b < a - 1)
			printf(" ");
		else
			printf("\n");
		b++;
		address++;
	}
	return (0);
}
