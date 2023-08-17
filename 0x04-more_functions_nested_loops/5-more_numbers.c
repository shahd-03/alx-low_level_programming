#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Alwayes 0 (Success)
 */

void more_numbers(void)
{
	int n, n1, n2;

	for (n = 0; n <= 9 ; n++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			n2 = n1;
			if (n1 > 9)
			{
				_putchar(1 + 48);
				n2 = n1 % 10;
			}
			_putchar(n2 + 48);
		}
		_putchar('\n');
	}
}

