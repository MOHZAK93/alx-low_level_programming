#include "main.h"

/**
  *main - Entry point
  *
  *@argc: number of arguments
  *@argv: arguments pointer
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int fdfrom, fdto, cf;
	ssize_t rf;
	char buf[1024];

	if (argc != 3)
		error_97();

	fdfrom = open(argv[1], O_RDONLY);

	if (fdfrom == -1)
		error_98(argv[1]);

	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);

	if (fdto == -1)
		error_99(argv[2]);

	while ((rf = read(fdfrom, buf, 1024)) > 0)
	{
		if (write (fdfrom, buf, rf) != rf)
			error_99(argv[2]);
	}

	cf = close(fdfrom);
	if (cf == -1)
		error_100(fdfrom);

	cf = close(fdto);
	if (cf == -1)
		error_100(fdto);

	return (1);
}

/**
  *error_97 - function that prints error message
  */
void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
/**
  *error_98 - function that prints error message
  *
  *@file_from: source file
  */
void error_98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
  *error_99 - function that returns an error message
  *
  *@file_to: destination file
  */
void error_99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
  *error_100 - function that returns an error message
  *
  *@fd: file descriptor
  */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
