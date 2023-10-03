#include "main.h"
/**
 * read_textfile - read a text file and print it to the stdout
 * @filename : the name of the file to be read
 * @letters : num of letts to be read and printed
 *
 * Return: num of printed letts , or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	rd = read(fd, buff, letters);
	if (rd < 0)
		free(buff);
		free(buff);
		return (0);
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr < 0)
		free(buff);
		close(fd);
		return (0);
	close(fd);
	return (rd);
}



