#include "main.h"

/**
 * print_sign - This function is called by main
 *
 * @n: The parameter for the function
 *
 * Description: Write a function that prints the sign of a number.
 *
 * Return: Always return 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
