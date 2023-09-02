#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s : this is a pointer
 *
 * Return : type voide so there is no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
