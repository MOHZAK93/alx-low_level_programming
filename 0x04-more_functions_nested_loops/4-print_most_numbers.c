#include "main.h"

/**
 * print_most_numbers - The function called by main
 *
 * Description: a function that prints the numbers,
 * from 0 to 9,except 2 and 4, followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
else
{
}
}
i++;
}

