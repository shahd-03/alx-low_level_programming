#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a : first param
 * @b : sec param
 *
 * Return: no value for return
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
