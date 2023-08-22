#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str : it is param
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
