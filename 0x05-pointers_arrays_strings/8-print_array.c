#include "main.h"
#include <stdio.h>

/**
  *print_array - This function prints an array of intergers
  *
  *@a: pointer parameter of the function
  *@n: second parameter of the function
  *
  *return: 0
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
		else
			continue;
	}
	printf("\n");
}
