#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n : number of arguments
 *
 * Return: 0 if n == 0, else return sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0, x;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	else
	{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	}
	return (s);
}
