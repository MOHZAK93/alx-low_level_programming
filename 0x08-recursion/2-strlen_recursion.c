#include "main.h"

/**
  *_strlen_recursion - function returns length of a string
  *
  *@s: string to check length
  *
  *Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
