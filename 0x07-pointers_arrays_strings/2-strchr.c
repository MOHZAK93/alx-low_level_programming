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
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			return (s[i]);
	}
	if (c == '\0')
		return (NULL);

	return (s);
}
