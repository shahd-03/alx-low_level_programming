#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a num.
 * @n: decimal number to print as binry.
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shfts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shfts = 0; (tmp >>= 1) > 0; shfts++)
		;

	for (; shfts >= 0; shfts--)
	{
		if ((n >> shfts) & 1)
			printf("1");
		else
			printf("0");
	}
}
