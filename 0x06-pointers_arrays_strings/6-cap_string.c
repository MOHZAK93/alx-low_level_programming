#include "main.h"

/**
  *cap_string - Function to capitalize
  *
  *@str: The string to be capitalized
  *
  *Return: string
  */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			str[i] -= 32;
		}
	return (str);
	}
}
