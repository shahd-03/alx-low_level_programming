#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
