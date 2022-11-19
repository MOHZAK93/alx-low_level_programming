#include "main.h"
#include <limits.h>

/**
 * print_last_digit - function prints last digit of a number
 *
 * @n: The parameter to the function
 *
 * Description: Write a function that prints
 * the last digit of a number.
 *
 * Return: value of last digit.
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n *= -1;
	x = (n % 10) + '0';
	_putchar(x);
	return (n % 10);
}
