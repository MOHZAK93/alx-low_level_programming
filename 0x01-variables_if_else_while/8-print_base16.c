#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code prints hexadecimal numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char i = '0';
	char a = 'a';
	char f = 'f';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (a <= f)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
