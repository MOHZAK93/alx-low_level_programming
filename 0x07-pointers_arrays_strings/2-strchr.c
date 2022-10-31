#include "main.h"

/**
  *_strchr - function that locates a character in a string
  *
  *@s: string to check
  *@c: character to look for
  *
  *Return: string
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			while (s[i])
				i++;
		i++;
	}

	return (s);
}
