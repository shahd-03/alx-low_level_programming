#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given indx.
 *
 * @n: pointer to decimal number to chnge.
 * @index: index position to chnge.
 *
 * Return: 1 if it worked, -1 if errr.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hld;

	if (index > 64)
		return (-1);
	hld = index;
	for (i = 1; hld > 0; i *= 2, hld--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
