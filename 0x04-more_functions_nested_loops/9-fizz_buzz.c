#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripton: a program that prints the numbers from 1 to 100,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
int i;
for (i = 0; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
printf(" ");
}
return (0);
}
