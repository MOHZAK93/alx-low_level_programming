#include "variadic_functions.h"

/**
  *print_char - function that prints character
  *
  *@args: arguments
  */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
  *print_int - function that prints integers
  *
  *@args: arguments
  */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
  *print_float - function that prints double
  *
  *@args: arguments
  */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
  *print_string - function that prints function
  *
  *@args: arguments
  */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%p", str);
		return;
	}
	printf("%s", str);
}
/**
  *print_all - function that prints anything
  *
  *@format: format of data
  */
void print_all(const char * const format, ...)
{
	simbol datatypes[] = {
		{'c', print_char},
		{'s', print_string},
		{'f', print_float},
		{'i', print_int}
	};

	va_list list;
	int i = 0, j;
	char *str = "";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (datatypes[j].all == format[i])
			{
				printf("%s", str);
				datatypes[j].func(list);
				str = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
