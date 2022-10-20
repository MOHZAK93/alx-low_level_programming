#include "main.h"

/**
 * _isdigit - The function called by main
 *
 * @c: The parameter of the function
 *
 * Description: Write a function that checks for a digit (0 through 9).
 *
 * Return: 0
 */

int _isdigit(int c)
{
int fnum = '0';
int lnum = '9';

if (c >= fnum && c <= lnum)
return (1);
else
return (0);
}
