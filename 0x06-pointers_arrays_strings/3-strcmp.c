#include "main.h"

/**
  *_strcmp - A funtion that compares strings
  *
  *@s1: first string parameter
  *@s2: second string parameter
  *Return: 0
  */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (0);
	else if (*s1 > *s2)
		return (1);
	else
		return (-1);
	return (0);
}
