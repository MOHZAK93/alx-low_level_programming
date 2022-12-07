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
	if (argc != 3)
		printf("Usage: cp file_from file_to\n"), exit(97);

	copy_from_one_to_another(argv[1], argv[2]);
	return (0);
}

/**
  *copy_from_one_to_another - function that copies content
  *from one file to antother
  *
  *@file_from: the source file
  *@file_to: destination file
  *
  *Return: 1 on success
  */


ssize_t copy_from_one_to_another(const char *file_from, const char *file_to)
{
	ssize_t fd, wf, rf, cf;
	char *buf;

	fd = open(file_from, O_RDONLY);

	buf = malloc(sizeof(char) * 1024);

	rf = read(fd, buf, 1024);

	if (rf == -1 || fd == -1)
		dprintf(fd, "Error: Can't read from file %s\n", file_from), exit(98);

	cf = close(fd);

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 00664);

	wf = write(fd, buf, rf);

	if (wf == -1 || fd == -1)
		dprintf(fd, "Error: Can't write to %s\n", file_to), exit(99);

	cf = close(fd);

	if (cf == -1)
		dprintf(fd, "Error: Can't close fd %lu\n", fd), exit(100);

	return (1);
}

