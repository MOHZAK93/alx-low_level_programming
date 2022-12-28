#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print alphabets except q and e'
 *
 * Return: Always return 0(Success)
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		if (a == 'e' || a == 'q')
			;
		else
			putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
