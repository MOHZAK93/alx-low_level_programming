#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet(void)
{
char a = 'a';
char z = 'z';
while (a <= z)
{
putchar(a);
a++;
}
putchar('\n');
}
