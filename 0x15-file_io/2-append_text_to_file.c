#include "main.h"

/**
  *append_text_to_file - function that appends text at the end of a file
  *
  *@filename: name of file
  *@text_content: string to add to end of file
  *
  *Return: 1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wf, cf, i = 0;

	if (filename != NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		wf = write(fd, text_content, i);
	}

	if (wf == -1)
		return (-1);

	cf = close(fd);
	if (cf == -1)
		return (-1);

	return (1);
}
