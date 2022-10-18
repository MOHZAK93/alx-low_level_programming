#include <stdio.h>

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
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
printf("%d", n);
printf("\n");
}
