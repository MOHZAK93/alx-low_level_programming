#include "main.h"

/**
 * print_alphabet_x10 - This function is called by main
 *
 * Description: This project is to print the alphabet
 * 10 times.
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet_x10(void)
{
char a;
char z;
int j;

for (j = 0; j < 10; j++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar(10);
}
return (0);
}
