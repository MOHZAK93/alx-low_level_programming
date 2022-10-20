#include "main.h"

/**
 * _isupper - The function called by main
 *
 * @c: The function parameter
 *
 * Description: a function that checks for uppercase character.
 *
 * Return: 0
 */

int _isupper(int c)
{
int A = 'A';
int Z = 'Z';

if (c >= A && c <= Z)
return (1);
else
return (0);
}
