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
	ssize_t fd = 0, rf = 0, wf = 0, cf = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rf = read(fd, buf, letters);
	if (rf == -1)
		return (0);

	wf = write(STDOUT_FILENO, buf, rf);
	if (wf == -1)
		return (0);

	cf = close(fd);
	if (cf == -1)
		return (0);
	free(buf);
	return (rf);
}
