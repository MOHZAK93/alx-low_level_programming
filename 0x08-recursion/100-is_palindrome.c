#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: pointer to the string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len, count = 0;

	len = _strlen_recursion(s);
	return (check(s, len - 1, count));
}

/**
 * _strlen_recursion - Gets length of string
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * check - checks for palindrome
 *
 * @s: string
 * @len: length of string
 * @count: recursion count
 *
 * Return: 1 if string is palindrome, otherwise 0
 */
int check(char *s, int len, int count)
{
	if (count >= len)
		return (1);
	if (s[len] == s[count])
		return (check(s, len - 1, count + 1));
	return (0);
}
