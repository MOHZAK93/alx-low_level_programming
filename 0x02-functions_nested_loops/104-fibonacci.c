#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that finds
 * and prints the first 98 Fibonacci numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int i;
unsigned long long int j = 1;
unsigned long long int k = 2;

for (i = 0; i < 49; i++)
{
printf("%llu, %llu", j, k);
if (i < 48)
{
printf(", ");
}
else
{
}
j += k;
k += j;
}
printf("\n");
return (0);
}
