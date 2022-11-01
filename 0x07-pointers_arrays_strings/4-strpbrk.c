#include "main.h"

/**
  *_strpbrk - function that searches a string for any of a set of bytes
  *
  *@s: string to search
  *@accept: test string
  *
  *Return: string
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*accept == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
