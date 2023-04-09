#include <stdio.h>

/**
  *beforemain - function that executes before main
  */

void __attribute__((constructor)) beforemain(void)
{
	char *tx;

	tx = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", tx);
}
