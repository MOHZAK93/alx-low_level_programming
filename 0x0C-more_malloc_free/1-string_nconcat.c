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
	unsigned int lens1, lens2, a, b;

	lens1 = lens2 = 0;

	for (a = 0; *s1 != '\0'; a++)
		lens1++;
	for (b = 0; *s2 != '\0'; b++)
		lens2++;

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

	for (a = 0; a < lens1; a++)
		str[a] = s1[a];
	for (b = 0; b < lens2 && b < n; b++, a++)
		str[a] = s2[b];
	str[a] = '\0';
	return (str);
}
