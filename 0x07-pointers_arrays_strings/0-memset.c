#include "main.h"

/**
  *_memset - function that fills memory with constant byte
  *
  *@s: the pointer parameter to so return string
  *@b: the constant parameter
  *@n: the number of bytes
  *
  *Return: string
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


