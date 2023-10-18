#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given indx.
 *
 * @n: number to evaluate.
 * @index: index starting from 0, of the bit we want to get.
 *
 * Return: Value of bit at index, or -1 if errr.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hld;

	if (index > 64)
		return (-1);

	hld = n >> index;

	return (hld & 1);
}
