#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - function that prints numbers
  *
  *@separator: pointer to separator
  *@n: number of numbers
  *
  *Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(p);
	_putchar('\n');
}
