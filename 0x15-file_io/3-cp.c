#include "main.h"
#define BUF_SIZE 1024
void error_98(int op1, char *buff, char *argv);
void error_99(int op1, char *buff,  char *argv);
void error_100(int op1, char *buff);

/**
 * main - copy a contnt of a file to another one
 *
 * @argc : num of args that passed to the progrm
 * @argv : arr of args
 *
 * Return: Awayes 0 (success)
 */
int main(int argc, char **argv)
{
	int op0, op1, r0, r1;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(BUF_SIZE);
	if (!buff)
	{
		return (0);
	}
	op0 = open(argv[1], O_RDONLY);
	error_98(op0, buff, argv[1]);
	op1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	error_99(op1, buff, argv[2]);
	do {
		r0 = read(op0, buff, BUF_SIZE);
		if (r0 == 0)
		{
			break;
		}
		error_98(r0, buff, argv[1]);
		r1 = write(op1, buff, r0);
		error_99(r1, buff, argv[2]);
	} while (r1 >= BUF_SIZE);
	r0 = close(op1);
	error_100(r0, buff);
	r0 = close(op0);
	error_100(r0, buff);
	free(buff);
	return (0);
}
/**
 * error_98 - checks erroe 98.
 * @op1 : val to be checked
 * @buff : buffer.
 * @argv : it is an arg.
 */
void error_98(int op1, char *buff, char *argv)
{
	if (op1 < 0)
	{
		dprintf(STDERR_FILENO, "error: can not be read from file %s\n", argv);
		free(buff);
		exit(98);
	}
}
/**
 * error_99 - check error 99..
 * @op1 : check value.
 * @buff : buffer.
 * @argv: it is an arg.
 */
void error_99(int op1, char *buff, char *argv)
{
	if (op1 < 0)
	{
		dprintf(STDERR_FILENO, "error : can not to be written to %s\n", argv);
		free(buff);
		exit(99);
	}
}
/**
 * error_100 - check eroe is 100
 * @op1 : val to be checked
 * @buff : buffer.
 */
void error_100(int op1, char *buff)
{
	if (op1 < 0)
	{
		dprintf(STDERR_FILENO, "eror : can not close fd %i\n", op1);
		free(buff);
		exit(100);
	}
}
