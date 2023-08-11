#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char Ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (Ch <= 'Z')
	{
		putchar(Ch);
		Ch++;
	}
	putchar('\n');
	return (0);
}
