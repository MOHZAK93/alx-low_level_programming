#include "main.h"

/**
  *string_toupper - This function converts from lower to uppercase
  *@str: The string to be changed
  *Return: string
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	i++;
}
