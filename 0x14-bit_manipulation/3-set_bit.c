#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given indx.
 *
 * @n: decimal number passed by pointr.
 * @index: index position to change, startng from 0.
 * Return: 1 if it worked, -1 if errr.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pp;

	if (index > 64)
		return (-1);

	for (pp = 1; index > 0; index--, pp *= 2)
		;
	*n += pp;

	return (1);
}
