#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *  ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 **/

int main(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 + num2 < 197)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
