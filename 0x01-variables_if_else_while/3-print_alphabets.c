#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This code prints lower and uppercase alphaBETS'
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
char a, z, A, Z;
a = 'a';
z = 'z';
A = 'A';
Z = 'Z';

while (a <= z)
{
putchar(a);
a++;
}
while (A <= Z)
{
putchar(A);
A++;
}
putchar(10);
return (0);
}
