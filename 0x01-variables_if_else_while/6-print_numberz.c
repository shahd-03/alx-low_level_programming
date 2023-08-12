#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all single digit numbers from 0 to 100
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
