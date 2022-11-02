#include "main.h"

/**
  *sqrt - function to evaluate form 1 to n
  *
  *@a: same number as n
  *@b: number that iterates from 1 to n
  *
  *Return: 1
  */

int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}

/**
  *_sqrt_recursion - returns the natural square root of n
  *@n: number
  *
  *Return: 1
  */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
