#include "main.h"

/**
  *read_textfile - function that reads a text file and prints it
  *to standard output
  *
  *@filename: name of file
  *@letters: number of letters to read and print
  *
  *Return: actuanl number of letters read and printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	fd = open(filename, O_RDWR, 0600);

	if (fd == -1)
		return (0);

	read (filename, letters);
	close (fd);
}
