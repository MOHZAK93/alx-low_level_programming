#include "function_pointers.h"

/**
  *print_name - function that prints a name
  *
  *@name: pointer to the name
  *@f: function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
