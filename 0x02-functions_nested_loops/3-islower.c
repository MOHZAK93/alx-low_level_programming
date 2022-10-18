#include "main.h"

/**
 * _islower - This function is called by main.
 *
 * @c: the argument for the function
 *
 * Description: Write a function that checks for lowercase character.
 *
 * Return: Always return 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
