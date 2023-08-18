#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 *
 * @n: number of \ should i print
 */

void print_diagonal(int n)
{
	int sp1, sp2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sp1 = 1; sp1 <= n; sp1++)
		{
			for (sp2 = 1; sp2 <= sp1; sp2++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
