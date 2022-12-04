#include "3-calc.h"

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (printf("Error\n"));
}
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (printf("Error\n"));
}
