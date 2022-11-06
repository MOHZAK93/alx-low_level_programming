#include "main.h"

/**
  *_strlen - function that returns the lenght of a string
  *
  *@s: parameter of the function
  *
  *Return: 0 (Success)
  */

int _strlen(char *s)
{
	int i = 0;
	int sum = 0;


	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	return (sum);
}
