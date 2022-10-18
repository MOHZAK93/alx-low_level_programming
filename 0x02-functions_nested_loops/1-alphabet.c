#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet(void);

print_alphabet()
{
char a = 'a';
int z = 'z';
while (a <= z)
putchar(a);
a++;
}

