#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to
 *  make change for an amount of money.
 *
 * @argc: arg count
 * @argv: args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int totl, cnt;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	totl = strtol(argv[1], &p, 10);
	cnt = 0;

	if (!*p)
	{
		while (totl > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (totl >= cents[i])
				{
					cnt += totl / cents[i];
					totl = totl % cents[i];
				}
			}
		}
		if (totl == 1)
			cnt++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cnt);
	return (0);
}
