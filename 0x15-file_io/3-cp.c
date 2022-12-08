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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

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
	int fdt, fdf, rf, cf;
	char *buf;

	fdf = open(file_from, O_RDONLY);

	buf = malloc(sizeof(char) * 1024);

	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	rf = read(fdf, buf, 1024);

	fdt = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 00664);

	write(fdt, buf, rf);

	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	cf = close(fdf);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	cf = close(fdt);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", fdt);
		exit(100);
	}

	return (1);
}
