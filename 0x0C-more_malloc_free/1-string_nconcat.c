#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int a, b, i, j;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	if (s1 == NULL || s2 ==	NULL)
		return (NULL);

	if (n > b)
		str = malloc((a + b + 1) * sizeof(*str));
	else
		str = malloc((a + n + 1) * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		str[i] = s1[i];

	for (j = 0; j < b && j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
