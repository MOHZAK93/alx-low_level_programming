#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two integers
 * @a: first integer
 * @b: second integer
 * Return: diff of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: dividend of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of division of integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
