#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename  : the file that we will append some text to it
 * @text_content : some text that will be appended
 *
 * Return: 1 when success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
