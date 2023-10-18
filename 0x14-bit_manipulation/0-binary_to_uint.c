#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned in.
 * @b: char string.
 *
 * Return: converted decimal number or 0 if there is an unconvertable
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int totl, powr;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (powr = 1, totl = 0, len--; len >= 0; len--, powr *= 2)
	{
		if (b[len] == '1')
			totl += powr;
	}
	return (totl);
}
