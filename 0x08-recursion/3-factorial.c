#include "main.h"

/**
  *factorial - function to return a factorial of a number
  *
  *@n: number
  *
  *Return: interger
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
