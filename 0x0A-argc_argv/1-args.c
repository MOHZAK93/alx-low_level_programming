#include <stdio.h>

/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: pointer to arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	while (*argv)
		argc++;
	printf("%d\n", argc);
	return (0);
}
