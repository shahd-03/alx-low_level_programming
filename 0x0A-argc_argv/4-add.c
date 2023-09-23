#include <stdio.h>
#include <stdlib.h>

/**
 * main - add a postive number
 *
 * @argc: arg count
 * @argv: arg
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, s, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		s = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += s;
		}
	}
	printf("%d\n", sum);

	return (0);
}
