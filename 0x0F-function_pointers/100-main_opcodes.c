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
	int bytes = atoi(argv[1]), b = 0;
	int (*address)(int, char **) = main;

	if (argc != 2)
		printf("Error\n"), exit(1);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	for (b = 0; b < bytes; b++)
	{
		printf("%.2x", *((unsigned char *)address));

		if (b == bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
