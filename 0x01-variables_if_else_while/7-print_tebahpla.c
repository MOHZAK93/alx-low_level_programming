#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code print alphabets in reverse
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
char a, z;
a = 'a';
z = 'z';

while (z >= a)
{
putchar(z);
z--;
}
putchar(10);
return (0);
}
