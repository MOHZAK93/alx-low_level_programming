#include "3-calc.h"

/**
  *op_add - function that adds two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function that subtracts two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function that multiplies two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: product
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function that divides two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: quotient
  */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (printf("Error\n"));
}

/**
  *op_mod - function that finds the modulos of two integers
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: remainder
  */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (printf("Error\n"));
}
