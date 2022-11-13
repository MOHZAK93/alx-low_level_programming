#include "main.h"
#include <stdio.h>

/**
  *_strspn - function that gets length of prefix substing
  *
  *@s: string to test
  *@accept: string search
  *
  *Return: integer
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
	}
	return (k);
}
