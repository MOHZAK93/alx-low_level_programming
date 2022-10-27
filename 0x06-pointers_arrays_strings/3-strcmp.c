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
	int i;
	int s1_len = 0;
	int s2_len = 0;

	for (i = 0; s1[i]; i++)
		s1_len++;

	for (i = 0; s2[i]; i++)
		s2_len++;

	if (s1_len == s2_len)
		return (0);
	else if (s1_len > s2_len)
		return (1);
	else
		return (-1);
	return (0);
}
