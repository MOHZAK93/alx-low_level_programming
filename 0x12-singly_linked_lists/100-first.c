#include <stdio.h>

/**
  *beforemain - function that executes before main
  */

void beforemain(void) __attribute__ ((constructor));

void beforemain(void)
{
	char *tx;

	tx = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s\n", tx);

}
