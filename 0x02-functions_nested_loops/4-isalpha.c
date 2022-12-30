#include "main.h"

/**
 * _isalpha - This function is called by main
 *
 * @c: argument for the function
 *
 * Return: Always return 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
