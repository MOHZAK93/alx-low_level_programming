#include "main.h"

/**
  *rev_string - function to reverse a string
  *
  *@s: pointer parameter to function
  *Return: nothing
  */

void rev_string(char *s)
{
	int i;
	int total = 0;
	char rev = s[0];

	while (s[total] != '\0')
		total++;

	for (i = 0; i < total; i++)
	{
		total--;
		rev = s[i];
		s[i] = s[total];
		rev = s[total];
	}
}
