#include "main.h"

/**
  *_strspn - function that gets length of prefix substing
  *
  *@s: string to test
  *@accept: string search
  *Return: integer
  */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					k++;
				j++;
			}
		else
			return (k);
		i++;
	}
	return (k);
}
