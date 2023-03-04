#include "main.h"
#include <stdio.h>

/**
 * prime_2 - extension of prime function
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: int
 */
int prime_2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_2(a, b + 1));
}
/**
 * is_prime_number - Returns 1 if n is a prime number
 *
 * @n: number to check
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_2(n, 2));
}
