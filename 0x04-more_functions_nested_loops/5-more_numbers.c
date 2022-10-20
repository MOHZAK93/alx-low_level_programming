#include "main.h"

/**
 * more_numbers - The function called by main
 *
 * Description:  Write a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 *
 * Return: 0
 */

void more_numbers(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 15)
{
_putchar(i + '0');
}
_putchar('\n');
}
_putchar('\n');
}
