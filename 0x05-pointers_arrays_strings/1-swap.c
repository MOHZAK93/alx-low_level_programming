#include "main.h"

/**
  *swap_int - Swaps the value of two integers
  *
  *@a: first parameter of function
  *@b: second parameter of function
  *
  *Description: a function that swaps the values of two integers.
  */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

