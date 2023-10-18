#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another numbr.
 *
 * @n: 1st numbr.
 * @m: second number to convert .
 *
 * Return: number of bits that was needed to flp.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int countr;

	dif = n ^ m;
	countr = 0;

	while (dif)
	{
		countr++;
		dif &= (dif - 1);
	}
	return (countr);
}

