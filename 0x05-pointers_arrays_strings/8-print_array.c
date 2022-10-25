#include "main.h"

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
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			continue;
	}
	_putchar('\n');
}
