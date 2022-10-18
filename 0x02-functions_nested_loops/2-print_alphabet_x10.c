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
char a = 'a';
char z = 'z';
int i = 0;

while (i < 10)
{
while (a < z)
{
putchar(a);
a++;
}
i++;
putchar('\n');
}
}
