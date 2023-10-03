#include "main.h"
/**
 * create_file - creates a file and print a text in it
 * @filename : name of the file to create
 * @text_content : some text to be printed in the file name
 *
 * Return: -1 on failure, and on success it returns 1
 */
int create_file(const char *filename, char *text_content)
{
	int wr, i = 0, fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	while (text_content && text_content[i])
	{
		i++;
	}
	wr = write(fd, text_content, i);
	if (wr < 0)
	{
		return (-1);
		close(fd);
	}
	else
	{
		return (1);
	}
}
