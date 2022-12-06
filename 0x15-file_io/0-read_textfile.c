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
	ssize_t fd, i = 0;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0700);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	while (buf[i] != '\0')
	{
		_putchar(buf[i]);
		i++;
	}
	if (i != letters)
		return (0);

	close(fd);
	free(buf);

	return (i - 1);
}
