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

	if (argc != 2)
		printf("Error\n"), exit(1);

	if (a < 0)
		printf("Error\n"), exit(2);

	while (b < a)
	{
		printf("%02hhx", *((unsigned char *)main + b));
		if (b < a - 1)
			printf(" ");
		else
			printf("\n");
		b++;
	}
	return (0);
}
