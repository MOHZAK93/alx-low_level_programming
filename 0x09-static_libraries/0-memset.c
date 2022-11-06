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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


