#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	while(argc--)
		printf("%c\n", **argv++);
	exit(EXIT_SUCCESS);
}
