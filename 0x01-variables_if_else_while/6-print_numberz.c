#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code prints all single digit numbers of base 10
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar(10);
	return (0);
}
