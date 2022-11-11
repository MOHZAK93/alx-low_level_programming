#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *strl1 - function to calculate length of string
  *
  *@s1: string pointer
  *
  *Return: length of string
  */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}

int strl1(char *s1)
{
	unsigned int lens1 = 0;

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
	unsigned int lens2 = 0;

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
	unsigned int lens1, lens2, a, b;

	if (s1 == NULL || s2 ==	NULL)
		return (NULL);
	lens1 = strl1(s1);
	lens2 = strl2(s2);

	if (n > lens2)
		str = malloc((lens1 + lens2 + 1) * sizeof(*str));
	else
		str = malloc((lens1 + n + 1) * sizeof(*str));

	if (str == NULL)
		return (NULL);
	a = 0;

	while (lens1)
	{
		str[a] = s1[a];
		a++;
		lens1--;
	}
	b = 0;

	while (lens2)
	{
		str[a] = s2[b];
		b++;
		a++;
		lens2--;
	}
	str[a] = '\0';
	return (str);
}
