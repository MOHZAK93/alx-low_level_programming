#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat - a function to concatenate two strings
  *
  *@s1: first string
  *@s2: second string
  *
  *Return: pointer to string
  */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0;
	int j = 0;

	str = malloc(sizeof(*str) * sizeof(*s1) * sizeof(*s2));

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}
