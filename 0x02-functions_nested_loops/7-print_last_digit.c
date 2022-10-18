#include "main.h"

/**
 * print_last_digit - The function called by main
 *
 * @n: The parameter to the function
 *
 * Description: Write a function that prints
 * the last digit of a number.
 *
 * Return: Always return 0 (Success)
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
n = n % 10;
_putchar((n % 10) + '0');
return (n % 10);
}
