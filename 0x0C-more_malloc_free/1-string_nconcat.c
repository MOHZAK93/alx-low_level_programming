#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - function that concatenates two strings
  *
  *@s1: first string
  *@s2: second string
  *@n: size of second string to add
  *
  *Return: char pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *c;

	if (strlen(s2) >= n)
		str = malloc((strlen(s1) + n + 1) * sizeof(*str));
	else
		str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(*str));

	if (str == NULL)
		return (NULL);
	c = str;

	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2 &&  n)
	{
		*str = *s2;
		str++;
		s2++;
		n--;
	}
	return (c);
}
