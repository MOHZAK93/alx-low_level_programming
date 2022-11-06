#include "main.h"
#include <stdio.h>

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: argument pointer
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
		printf("Error\n");

	else if (argv[1][0] == 45)
		printf("0\n");

	num = atoi(argv[1]);

	if (num == 25 ||
		num == 10 ||
		num == 5 ||
		num == 2 ||
		num == 1)
		printf("1\n");

	return (0);
}
