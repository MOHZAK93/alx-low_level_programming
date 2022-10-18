#include "main.h"

/**
 * print_to_98 - The function called by main.
 *
 * @n: The parameter to the function
 *
 * Description: Write a function that prints all natural
 * numbers from n to 98, followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
_putchar(n);
}
}
