#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 *
 * @a: addr of the main func
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints opcodes of its own main function
 *
 * @argc: number of args passed to the func
 * @argv: array of pointers to args
 *
 * Return: always O
 */

int main(int argc, char **argv)
{
	int s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, s);
	return (0);
}
