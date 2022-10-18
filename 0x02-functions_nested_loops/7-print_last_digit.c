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
n = n % 10;
_putchar(n);
}
