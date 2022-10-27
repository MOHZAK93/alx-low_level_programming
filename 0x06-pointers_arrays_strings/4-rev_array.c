#include "main.h"
#include <stdio.h>

/**
  *reverse_array - A function that reverses an array
  *@a: pointer parameter of function
  *@n: number of elements to swap
  *
  *Return: nothing
  */


void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - (i + 1)];
		a[n - (i + 1)] = a[i];
		a[i] = temp;
	}
}
