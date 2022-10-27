#include "main.h"

/**
  *leet - Function that encodes a string into 1337
  *@str: string to be encoded
  *Return:  string
  */

char *leet(char *str)
{
	int i = 0;
	int j;
	char leet[6] = {'A', 'E', 'O', 'T', 'L'};

	while (str[i])
	{
		for (j = 0; j < 6; j++)
		{
			if (str[i] == leet[j] || str[i] + 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
