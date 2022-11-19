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

	x = (n % 10);
	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x % 10);
}
