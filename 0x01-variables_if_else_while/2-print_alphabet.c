#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0(Success)
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
