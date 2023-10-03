#include "main.h"
/**
 * create_file - create an empty file and then fill it with
 * @filename : file needed to be filled after creation
 * @text_content : text that will fill the empty file
 *
 * Return: 1 when success is, otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

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
