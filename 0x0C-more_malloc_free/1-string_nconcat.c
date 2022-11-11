#include "main.h"
#include <stdlib.h>

/**
  *strl1 - function to calculate length of string
  *
  *@s1: string pointer
  *
  *Return: length of string
  */

int strl1(char *s1)
{
	int lens1 = 0;

	while (*s1)
	{
		lens1++;
		s1++;
	}
	return (lens1);
}

/**
  *strl2 - function to calculate length of string
  *
  *@s2: string pointer
  *
  *Return: length of string
  */

int strl2(char *s2)
{
	int lens2 = 0;

	while (*s2)
	{
		lens2++;
		s2++;
	}
	return (lens2);
}

/**
  *string_nconcat - function to concatenate string
  *
  *@s1: first string pointer
  *@s2: second string pointer
  *@n: length of s2 to add
  *
  *Return: char pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL || s2 ==	NULL)
		return (NULL);
	strl1(s1);
	strl2(s2);

	if (lens2 >= n)
		str = malloc((lens1 + n + 1) * sizeof(*str));
	else
		str = malloc((lens1 + lens2 + 1) * sizeof(*str));

	if (str == NULL)
		return (NULL);

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
	return (str);
}
