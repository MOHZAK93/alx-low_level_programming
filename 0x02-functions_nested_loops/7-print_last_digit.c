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

int print_last_digit(unsigned int n)
{
if (n < 0)
{
n = n * -1;
}
_putchar('0' + (n % 10));
return (n % 10);
}
