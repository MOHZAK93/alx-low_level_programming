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
	int bytes, (*address)(int, char **) = main, i;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", *((unsigned char *)address));

		if (i == bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");

	return (0);
}
