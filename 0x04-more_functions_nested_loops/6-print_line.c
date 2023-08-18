#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 *
 * @n: number 0f _ should i print
 */

void print_line(int n)
{
	int mm;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (mm = 1; mm <= n; mm++)
			_putchar('_');
		_putchar('\n');
	}
}

