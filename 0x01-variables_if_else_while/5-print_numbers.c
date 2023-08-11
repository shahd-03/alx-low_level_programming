#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all singledigit numbers from 0 untill 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf('\n');
	return (0);
}
