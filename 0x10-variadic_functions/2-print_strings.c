#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - function that prints strings
  *
  *@separator: string betweener
  *@n: number of strings
  *
  *Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);

		if (!str)
			printf("%p", str);
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
