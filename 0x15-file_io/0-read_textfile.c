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
	ssize_t fd, i;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0700);

	if (fd == -1)
		return (0);

	size = read(fd, buf, letters);
	buf[letters + 1] = '\0';

	while (buf[i] != '\0')
	{
		_putchar(buf[i]);
		i++;
	}

	close(fd);

	return (i);
}
